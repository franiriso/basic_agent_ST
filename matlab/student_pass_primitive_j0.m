%#codegen
%%
%          Agent Logic
%         Pass Primitive J0
%              2025
%
%
%%

function [coefsj0] = student_pass_primitive_j0(v0, a0, sf, vfmin, vfmax)
    T = final_opt_time_j0_pass(v0, a0, sf);
    v1 = final_opt_vel_pass(v0, a0, sf, T(1));
    if vfmin < v1 && v1 < vfmax
        coefsj0 = coef_list(v0, a0, sf, v1, 0, T(1));
    else
        v2 = final_opt_vel_pass(v0, a0, sf, T(2));
        if vfmin < v2 && v2 < vfmax
            coefsj0 = coef_list(v0, a0, sf, v2, 0, T(2));
        else
            coefsj0 = [0,0,0,0,0,0];
        end
    end
end