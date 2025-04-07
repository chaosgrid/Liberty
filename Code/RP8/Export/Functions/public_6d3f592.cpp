#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e8ad);

PROC_DECLARE(0x6d3f592, internal_6d3f592, public_6d3f592);
extern "C" NAKED register_t __cdecl internal_6d3f592()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6d3e8ad
        fld dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fld dword ptr ss : [ebp-0x10]
        fchs 
        fld dword ptr ss : [ebp-0xC]
        fchs 
        fld dword ptr ss : [ebp-8]
        fchs 
        fst dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-4]
        fchs 
        fst dword ptr ss : [ebp-0x14]
        fld st(3)
        fmul dword ptr ds : [ecx]
        fadd st, st(5)
        fstp dword ptr ds : [eax]
        fld st(2)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [eax+0x10]
        fld st(1)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [eax+0x20]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [eax+0x30]
        fld st(3)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+4]
        fld st(2)
        fmul dword ptr ds : [ecx+4]
        fadd st, st(5)
        fstp dword ptr ds : [eax+0x14]
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+0x24]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+0x34]
        fld st(3)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        fld st(2)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+0x18]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fadd st, st(5)
        fstp dword ptr ds : [eax+0x28]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+0x38]
        fstp st(0)
        fld st(1)
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [eax+0x1C]
        fstp st(0)
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [ebp-0x14]
        fmul dword ptr ds : [ecx+0xC]
        fadd st, st(1)
        fstp dword ptr ds : [eax+0x3C]
        fstp st(0)
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3f592)
    }
}
