#include "RP8-PCH.h"

PROC_DECLARE(0x6d3e2cc, internal_6d3e2cc, public_6d3e2cc);
extern "C" NAKED register_t __cdecl internal_6d3e2cc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        fld dword ptr ss : [ebp+0x14]
        lea eax, ss:[ebp-4]
        fmul dword ptr ds : [public_6d5f1fc]
        mov dword ptr ss : [ebp-0x1C], eax
        lea eax, ss:[ebp+0x14]
        mov dword ptr ss : [ebp-0x20], eax
        fstp dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp-0x18]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0xC]
        fmul dword ptr ds : [public_6d5f1fc]
        mov dword ptr ss : [ebp-0x20], eax
        lea eax, ss:[ebp-0x14]
        mov dword ptr ss : [ebp-0x1C], eax
        fstp dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp+0x10]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp+0xC]
        lea eax, ss:[ebp-8]
        fmul dword ptr ds : [public_6d5f1fc]
        mov dword ptr ss : [ebp-0x20], eax
        lea eax, ss:[ebp-0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        fstp dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp+0x10]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+8]
        fmul dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-4]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ss : [ebp+0x14]
        faddp 
        fstp dword ptr ds : [eax]
        fld st(1)
        fmul dword ptr ss : [ebp-4]
        fld st(1)
        fmul dword ptr ss : [ebp+0x14]
        fsubp 
        fstp dword ptr ds : [eax+4]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0x14]
        fld st(1)
        fmul dword ptr ss : [ebp+0x14]
        fld st(1)
        fmul dword ptr ss : [ebp-4]
        fsubp 
        fstp dword ptr ds : [eax+8]
        fmul dword ptr ss : [ebp+0x14]
        fld st(1)
        fmul dword ptr ss : [ebp-4]
        faddp 
        fstp dword ptr ds : [eax+0xC]
        fstp st(0)
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d3e2cc)
    }
}
