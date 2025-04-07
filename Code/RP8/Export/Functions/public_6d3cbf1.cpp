#include "RP8-PCH.h"

PROC_DECLARE(0x6d3cbf1, internal_6d3cbf1, public_6d3cbf1);
extern "C" NAKED register_t __cdecl internal_6d3cbf1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [eax+0xC]
        push esi
        fmul dword ptr ds : [ecx+8]
        push edi
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx+4]
        fsubp 
        fstp dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-4]
        fld st(1)
        fsub st, st(1)
        fmul dword ptr ds : [edx+4]
        fld dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [edx+8]
        fsubp 
        fld dword ptr ss : [ebp-8]
        fsub dword ptr ss : [ebp-4]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fstp dword ptr ss : [ebp-0x1C]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [ebp+0x14]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+8]
        fsubp 
        fstp dword ptr ss : [ebp-0xC]
        fsub st, st(1)
        fmul dword ptr ds : [edx]
        fld dword ptr ss : [ebp+0xC]
        fsub dword ptr ss : [ebp+0x14]
        fmul dword ptr ds : [edx+8]
        fsubp 
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fstp dword ptr ss : [ebp-0x18]
        fstp st(0)
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [edx]
        fld dword ptr ss : [ebp+0x14]
        fsub dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [edx+4]
        fsubp 
        fld st(2)
        fsub st, st(2)
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-4]
        fsub dword ptr ss : [ebp-8]
        fmul dword ptr ds : [edx]
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+8]
        lea esi, ss:[ebp-0x1C]
        mov edi, eax
        fsubp 
        fld st(1)
        fsub st, st(3)
        fmul dword ptr ds : [edx+8]
        faddp 
        fstp dword ptr ss : [ebp-0x10]
        movsd 
        movsd 
        fstp st(0)
        fstp st(0)
        movsd 
        movsd 
        pop edi
        pop esi
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d3cbf1)
    }
}
