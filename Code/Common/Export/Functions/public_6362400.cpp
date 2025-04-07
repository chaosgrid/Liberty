#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d3e0);

#define public_636244a _public_636244a
#define public_636245c _public_636245c

PROC_DECLARE(0x6362400, internal_6362400, public_6362400);
extern "C" NAKED register_t __cdecl internal_6362400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 1
        fstp st(0)
        jne public_636245c
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [esi]
        jl public_636244a
        mov ecx, esi
        call public_635d3e0
        public_636244a : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+ecx*4], edi
        mov eax, dword ptr ds : [esi+4]
        inc eax
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        public_636245c : nop
        ret 0x18
        UNREACHABLE_TRAP(0x6362400)
    }
}

#undef public_636244a
#undef public_636245c
