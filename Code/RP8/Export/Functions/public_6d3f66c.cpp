#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e8ad);

PROC_DECLARE(0x6d3f66c, internal_6d3f66c, public_6d3f66c);
extern "C" NAKED register_t __cdecl internal_6d3f66c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push dword ptr ss : [ebp+0xC]
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6d3e8ad
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [public_6d5f8f4]
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ds : [public_6d5f8f4]
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [public_6d5f8f4]
        fst dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [public_6d5e488]
        fld dword ptr ss : [ebp-0x10]
        fmul st, st(4)
        fadd st, st(1)
        fstp dword ptr ds : [eax]
        fld st(2)
        fmul dword ptr ss : [ebp-0x10]
        fstp dword ptr ds : [eax+4]
        fld st(1)
        fmul dword ptr ss : [ebp-0x10]
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp-0xC]
        fmul st, st(4)
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [ebp-0xC]
        fmul st, st(3)
        fadd st, st(1)
        fstp dword ptr ds : [eax+0x14]
        fld st(1)
        fmul dword ptr ss : [ebp-0xC]
        fstp dword ptr ds : [eax+0x18]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [ebp-8]
        fmul st, st(4)
        fstp dword ptr ds : [eax+0x20]
        fld dword ptr ss : [ebp-8]
        fmul st, st(3)
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ss : [ebp-8]
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ds : [eax+0x28]
        fstp st(0)
        fstp st(0)
        fldz 
        fstp dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [ebp-4]
        fmul st, st(2)
        fstp dword ptr ds : [eax+0x30]
        fld dword ptr ss : [ebp-4]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x34]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ss : [ebp+0xC]
        fstp dword ptr ds : [eax+0x38]
        fld1 
        fstp dword ptr ds : [eax+0x3C]
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3f66c)
    }
}
