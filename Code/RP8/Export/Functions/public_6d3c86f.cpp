#include "RP8-PCH.h"

PROC_DECLARE(0x6d3c86f, internal_6d3c86f, public_6d3c86f);
extern "C" NAKED register_t __cdecl internal_6d3c86f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
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
        fld st(0)
        fadd st, st(1)
        fld st(2)
        fmul dword ptr ds : [public_6d5f5f0]
        fld st(1)
        fsub st, st(1)
        fadd dword ptr ds : [public_6d5e488]
        fstp dword ptr ss : [ebp-8]
        fld st(3)
        fadd st(0), st
        fsubr st, st(3)
        fadd dword ptr ss : [ebp+0x1C]
        fstp dword ptr ss : [ebp-4]
        fsub st, st(1)
        fstp dword ptr ss : [ebp+0x1C]
        fstp st(0)
        fsubrp 
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [ecx]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ss : [ebp+0x1C]
        fmul dword ptr ds : [esi]
        faddp 
        fld st(1)
        fmul dword ptr ds : [edi]
        faddp 
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fld dword ptr ss : [ebp+0x1C]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [edi+8]
        pop edi
        fld dword ptr ss : [ebp+0x1C]
        fmul dword ptr ds : [esi+8]
        pop esi
        faddp 
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [edx+8]
        faddp 
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [eax+8]
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d3c86f)
    }
}
