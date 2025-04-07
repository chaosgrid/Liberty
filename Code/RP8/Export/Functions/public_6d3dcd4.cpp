#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c83f);

PROC_DECLARE(0x6d3dcd4, internal_6d3dcd4, public_6d3dcd4);
extern "C" NAKED register_t __cdecl internal_6d3dcd4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        lea eax, ss:[ebp-4]
        mov dword ptr ss : [ebp-0xC], eax
        push esi
        lea eax, ss:[ebp-8]
        push edi
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0x10]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld1 
        mov esi, dword ptr ss : [ebp+0xC]
        fsub dword ptr ss : [ebp-4]
        lea edi, ss:[ebp-0x1C]
        movsd 
        lea eax, ss:[ebp-0x1C]
        fstp dword ptr ss : [ebp+0x10]
        movsd 
        push eax
        lea eax, ss:[ebp-0x1C]
        push eax
        movsd 
        call public_6d3c83f
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ss : [ebp-0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x18]
        fmul st, st(1)
        fmul st, st(2)
        fld st(1)
        fmul dword ptr ss : [ebp-0x1C]
        fmul st, st(3)
        fld dword ptr ss : [ebp-0x1C]
        fmul dword ptr ss : [ebp-0x1C]
        fmul st, st(4)
        fadd dword ptr ss : [ebp-4]
        fstp dword ptr ds : [eax]
        fld st(2)
        fmul dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0x10]
        fadd st, st(1)
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ss : [ebp-8]
        fst dword ptr ss : [ebp+0xC]
        fld st(2)
        fsub st, st(1)
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp+0x10]
        fsub st, st(1)
        fstp dword ptr ds : [eax+0x10]
        fstp st(0)
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ss : [ebp-0x18]
        fmul st, st(4)
        fadd dword ptr ss : [ebp-4]
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ss : [ebp-0x1C]
        fmul dword ptr ss : [ebp-8]
        fld st(0)
        fadd st, st(3)
        fstp dword ptr ds : [eax+0x18]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [ebp+0xC]
        fadd st, st(2)
        fstp dword ptr ds : [eax+0x20]
        fld st(2)
        fsub st, st(1)
        fstp dword ptr ds : [eax+0x24]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld st(0)
        fmul st, st(1)
        fmul st, st(2)
        fadd dword ptr ss : [ebp-4]
        fstp dword ptr ds : [eax+0x28]
        pop edi
        pop esi
        fstp st(0)
        fstp st(0)
        fldz 
        fstp dword ptr ds : [eax+0x2C]
        fldz 
        fstp dword ptr ds : [eax+0x30]
        fldz 
        fstp dword ptr ds : [eax+0x34]
        fldz 
        fstp dword ptr ds : [eax+0x38]
        fld1 
        fstp dword ptr ds : [eax+0x3C]
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3dcd4)
    }
}
