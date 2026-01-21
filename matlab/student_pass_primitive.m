%#codegen
%%
%           Agent Logic
%         Pass Primitive
%              2025
%
%
%%

function [coeffsT2, v2, T2, coeffsT1, v1, T1] = student_pass_primitive(v0, a0, sf, vfmin, vfmax, Tmin, Tmax)
    if a0 >= 0
        Tvmin = final_opt_time_pass(v0, a0, sf, vfmin);
        Tvmax = final_opt_time_pass(v0, a0, sf, vfmax);
    else
        Tstar = time_min_vel(a0, sf);
        vstar = final_opt_vel_pass(v0, a0, sf, Tstar);
        if (vstar < vfmin) && (vfmin < vfmax)
            Tvmin = final_opt_time_pass(v0, a0, sf, vfmin);
            Tvmax = final_opt_time_pass(v0, a0, sf, vfmax);
        elseif (vfmin < vstar) && (vstar < vfmax)
            Tvmin = Tstar;
            Tvmax = final_opt_time_pass(v0, a0, sf, vfmax);
        else
            Tvmin = 0;
            Tvmax = 0;
        end
    end

    if Tmin == 0 && Tmax == 0
        T1 = Tvmax;
        T2 = Tvmin;
    else
        T1 = max(Tvmax, Tmin);
        T2 = min(Tvmin, Tmax);
    end

    if (0 < T1) && (T1 <= T2) && (Tvmax <= Tvmin)
        v1 = final_opt_vel_pass(v0, a0, sf, T2);
        v2 = final_opt_vel_pass(v0, a0, sf, T1);
        coeffsT1 = coef_list(v0, a0, sf, v2, 0., T1);
        coeffsT2 = coef_list(v0, a0, sf, v1, 0., T2);
    else
        coeffsT1 = [0, 0, 0, 0, 0, 0];
        coeffsT2 = [0, 0, 0, 0, 0, 0];
        T1 = 0.;
        T2 = 0.;
        v1 = 0.;
        v2 = 0.;
    end
end
