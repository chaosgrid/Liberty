#include "RP8-PCH.h"

PROC_DECLARE(0x6d3eb07, internal_6d3eb07, public_6d3eb07);
extern "C" NAKED register_t __cdecl internal_6d3eb07()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [eax+8]
        push esi
        fld dword ptr ds : [ecx+0x30]
        push edi
        fmul dword ptr ds : [eax+0xC]
        lea esi, ss:[ebp-0x10]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp+8]
        mov edi, eax
        faddp 
        fstp dword ptr ss : [ebp-4]
        movsd 
        movsd 
        movsd 
        movsd 
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3eb07)
    }
}
