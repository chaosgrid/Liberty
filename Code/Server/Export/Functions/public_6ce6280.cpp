#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);

#define public_6ce6297 _public_6ce6297
#define public_6ce62a9 _public_6ce62a9
#define public_6ce62ab _public_6ce62ab
#define public_6ce62dd _public_6ce62dd

PROC_DECLARE(0x6ce6280, internal_6ce6280, public_6ce6280);
extern "C" NAKED register_t __cdecl internal_6ce6280()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push edi
        push ebx
        mov edi, ecx
        call public_6cee9e0
        test al, al
        jne public_6ce6297
        pop edi
        pop ebx
        ret 4
        public_6ce6297 : nop
        push esi
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_6ce62a9
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x17
        cmp al, 0x17
        je public_6ce62ab
        public_6ce62a9 : nop
        xor esi, esi
        public_6ce62ab : nop
        mov eax, dword ptr ds : [public_6d64194]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        fld dword ptr ds : [esi+0xE8]
        fcomp dword ptr ds : [public_6d65188]
        pop esi
        fnstsw ax
        test ah, 1
        je public_6ce62dd
        mov edx, dword ptr ds : [edi]
        push 0
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x158]
        public_6ce62dd : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x160]
        neg al
        pop edi
        pop ebx
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6ce6280)
    }
}

#undef public_6ce6297
#undef public_6ce62a9
#undef public_6ce62ab
#undef public_6ce62dd
