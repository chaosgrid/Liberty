#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac160);

#define public_6eac172 _public_6eac172
#define public_6eac17c _public_6eac17c
#define public_6eac182 _public_6eac182
#define public_6eac188 _public_6eac188

PROC_DECLARE(0x6eac160, internal_6eac160, public_6eac160);
extern "C" NAKED register_t __cdecl internal_6eac160()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        je public_6eac182
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+8]
        public_6eac172 : nop
        cmp dword ptr ds : [eax+8], esi
        jne public_6eac17c
        cmp dword ptr ds : [eax+0xC], edx
        je public_6eac188
        public_6eac17c : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6eac172
        public_6eac182 : nop
        xor al, al
        pop esi
        ret 8
        public_6eac188 : nop
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6eac160)
    }
}

#undef public_6eac172
#undef public_6eac17c
#undef public_6eac182
#undef public_6eac188
