#include "RP8-PCH.h"

PROC_DECLARE(0x6d3ec33, internal_6d3ec33, public_6d3ec33);
extern "C" NAKED register_t __cdecl internal_6d3ec33()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx+4]
        push esi
        fld dword ptr ds : [ecx]
        push edi
        fmul dword ptr ds : [eax]
        lea esi, ss:[ebp-0x10]
        faddp 
        fadd dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x34]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x38]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ss : [ebp+8]
        mov edi, eax
        fstp dword ptr ss : [ebp-4]
        movsd 
        movsd 
        movsd 
        movsd 
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ec33)
    }
}
