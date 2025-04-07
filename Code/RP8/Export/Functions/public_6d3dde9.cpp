#include "RP8-PCH.h"

PROC_DECLARE(0x6d3dde9, internal_6d3dde9, public_6d3dde9);
extern "C" NAKED register_t __cdecl internal_6d3dde9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [public_6d5f5c8]
        fld dword ptr ds : [eax]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ds : [eax+4]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [eax+0xC]
        fld st(2)
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-4]
        fld st(3)
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [ebp-0xC]
        fld st(3)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [ebp+0xC]
        fld st(3)
        fmul dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+8]
        fld1 
        fsub dword ptr ss : [ebp-0xC]
        fsub st, st(1)
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-4]
        fadd st, st(2)
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [ebp-8]
        fsub st, st(3)
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp-4]
        fsub st, st(2)
        fstp dword ptr ds : [eax+0x10]
        fld1 
        fsub dword ptr ss : [ebp-0x10]
        fst dword ptr ss : [ebp+8]
        fsub st, st(1)
        fstp dword ptr ds : [eax+0x14]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0xC]
        fadd st, st(2)
        fstp dword ptr ds : [eax+0x18]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [ebp-8]
        fadd st, st(1)
        fstp dword ptr ds : [eax+0x20]
        fstp st(0)
        fld dword ptr ss : [ebp+0xC]
        fsub st, st(1)
        fstp dword ptr ds : [eax+0x24]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [ebp-0xC]
        fstp dword ptr ds : [eax+0x28]
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
        ret 8
        UNREACHABLE_TRAP(0x6d3dde9)
    }
}
