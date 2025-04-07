#include "RP8-PCH.h"

PROC_DECLARE(0x6d3cd18, internal_6d3cd18, public_6d3cd18);
extern "C" NAKED register_t __cdecl internal_6d3cd18()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        fld dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ss : [ebp+0xC]
        fmul dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        fmul st, st(1)
        mov esi, dword ptr ss : [ebp+0x14]
        push edi
        mov edi, dword ptr ss : [ebp+0x18]
        fst dword ptr ss : [ebp-4]
        fadd st(0), st
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [public_6d5f5f0]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-0xC]
        fsub dword ptr ss : [ebp-8]
        fadd dword ptr ds : [public_6d5e488]
        fld st(1)
        fadd st(0), st
        fsubr dword ptr ss : [ebp-4]
        fadd dword ptr ss : [ebp+0x1C]
        fld dword ptr ss : [ebp-8]
        fsub dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-4]
        fsub st, st(4)
        fld st(3)
        fmul dword ptr ds : [ecx]
        fld st(3)
        fmul dword ptr ds : [edx]
        faddp 
        fld st(2)
        fmul dword ptr ds : [esi]
        faddp 
        fld st(1)
        fmul dword ptr ds : [edi]
        faddp 
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fld st(2)
        fmul dword ptr ds : [esi+4]
        faddp 
        fld st(3)
        fmul dword ptr ds : [edx+4]
        faddp 
        fld st(4)
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [edi+8]
        fld st(2)
        fmul dword ptr ds : [esi+8]
        faddp 
        fld st(3)
        fmul dword ptr ds : [edx+8]
        faddp 
        fld st(4)
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [eax+8]
        fmul dword ptr ds : [edi+0xC]
        pop edi
        fld st(1)
        fmul dword ptr ds : [esi+0xC]
        pop esi
        faddp 
        fld st(2)
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fld st(3)
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ds : [eax+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d3cd18)
    }
}
