#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ec80);

PROC_DECLARE(0x6f2ec80, internal_6f2ec80, public_6f2ec80);
extern "C" NAKED register_t __cdecl internal_6f2ec80()
{
    __asm
    {
        mov eax, ecx
        fld dword ptr ds : [eax+8]
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
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_6f5a1b8]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x6f2ec80)
    }
}
