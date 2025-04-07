#include "Alchemy-PCH.h"


#define public_621f74a _public_621f74a
#define public_621f76b _public_621f76b
#define public_621f77d _public_621f77d

PROC_DECLARE(0x621f730, internal_621f730, public_621f730);
extern "C" NAKED register_t __cdecl internal_621f730()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push edi
        xor eax, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0xC]
        xor edi, edi
        mov dword ptr ss : [esp+8], eax
        test edx, edx
        jle public_621f77d
        push esi
        public_621f74a : nop
        mov esi, dword ptr ds : [ebx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x1C]
        test al, al
        jne public_621f76b
        mov eax, dword ptr ds : [public_6257a3c]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        mov dword ptr ss : [esp+0xC], eax
        public_621f76b : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        add ebx, 0x10
        cmp edi, dword ptr ds : [eax+4]
        jl public_621f74a
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        public_621f77d : nop
        pop edi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x621f730)
    }
}

#undef public_621f74a
#undef public_621f76b
#undef public_621f77d
