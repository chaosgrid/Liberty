#include "Alchemy-PCH.h"


#define public_621f7aa _public_621f7aa
#define public_621f7cb _public_621f7cb
#define public_621f7dd _public_621f7dd

PROC_DECLARE(0x621f790, internal_621f790, public_621f790);
extern "C" NAKED register_t __cdecl internal_621f790()
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
        jle public_621f7dd
        push esi
        public_621f7aa : nop
        mov esi, dword ptr ds : [ebx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x1C]
        test al, al
        jne public_621f7cb
        mov eax, dword ptr ds : [public_6257a3c]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x44]
        mov dword ptr ss : [esp+0xC], eax
        public_621f7cb : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        add ebx, 0x10
        cmp edi, dword ptr ds : [eax+4]
        jl public_621f7aa
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        public_621f7dd : nop
        pop edi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x621f790)
    }
}

#undef public_621f7aa
#undef public_621f7cb
#undef public_621f7dd
