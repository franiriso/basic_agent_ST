%#codegen
%%
%          Agent Logic
%         Pass Primitive J0
%              2025
%
%
%%

function [coefsj0, vfj0, tfj0] = student_pass_primitive_j0(v0, a0, sf, vfmin, vfmax)
    [T1, T2] = final_opt_time_j0_pass(v0, a0, sf);
    v1 = final_opt_vel_pass(v0, a0, sf, T1);
    if vfmin < v1 && v1 < vfmax
        coefsj0 = coef_list(v0, a0, sf, v1, 0, T1);
    else
        v2 = final_opt_vel_pass(v0, a0, sf, T2);
        if vfmin < v2 && v2 < vfmax
            coefsj0 = coef_list(v0, a0, sf, v2, 0, T2);
        else
            coefsj0 = [0,0,0,0,0,0];
        end
    end
end