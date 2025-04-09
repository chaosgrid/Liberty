#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557d00);

PROC_DECLARE(0x557d00, internal_557d00, public_557d00);
extern "C" NAKED register_t __cdecl internal_557d00()
{
    __asm
    {
        sub esp, 8
        mov eax, ecx
        fld dword ptr ds : [eax+8]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fstp st(0)
        sar ecx, 1
        fstp st(0)
        sub edx, ecx
        fstp st(0)
        mov dword ptr ss : [esp], edx
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fmul dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x557d00)
    }
}
