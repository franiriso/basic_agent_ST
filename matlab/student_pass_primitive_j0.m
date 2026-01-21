%#codegen
%%
%          Agent Logic
%         Pass Primitive J0
%              2025
%
%
%%

function [coefsj0, vfj0, tfj0] = student_pass_primitive_j0(v0, a0, sf, vfmin, vfmax)
    T = final_opt_time_j0_pass(v0, a0, sf);
    vfj0 = final_opt_vel_pass(v0, a0, sf, T(1));
    if vfmin < vfj0 && vfj0 < vfmax
        tfj0 = T(1);
        coefsj0 = coef_list(v0, a0, sf, vfj0, 0, T(1));
    else
        vfj0 = final_opt_vel_pass(v0, a0, sf, T(2));
        if vfmin < vfj0 && vfj0 < vfmax
            tfj0 = T(2);
            coefsj0 = coef_list(v0, a0, sf, vfj0, 0, T(2));
        else
            tfj0 = 0.;
            vfj0 = 0.;
            coefsj0 = [0,0,0,0,0,0];
        end
    end
end