#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03410);
CLANG_FORWARD_PROC_SYMBOL(public_6d075f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d07620 _public_6d07620
#define public_6d0762c _public_6d0762c
#define public_6d0762e _public_6d0762e
#define public_6d07644 _public_6d07644
#define public_6d07650 _public_6d07650
#define public_6d0766c _public_6d0766c
#define public_6d07675 _public_6d07675
#define public_6d07679 _public_6d07679

PROC_DECLARE(0x6d075f0, internal_6d075f0, public_6d075f0);
extern "C" NAKED register_t __cdecl internal_6d075f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax]
        push eax
        call public_6d03410
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        call dword ptr ds : [edx]
        push eax
        call dword ptr ds : [public_6d6467c]
        add esp, 4
        xor ebx, ebx
        xor edi, edi
        lea ebx, ds:[ebx]
        public_6d07620 : nop
        cmp edi, ebx
        jne public_6d0762c
        mov edi, dword ptr ds : [esi+0xC4]
        jmp public_6d0762e
        public_6d0762c : nop
        mov edi, dword ptr ds : [edi]
        public_6d0762e : nop
        cmp edi, ebx
        je public_6d07644
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebx
        je public_6d07620
        lea ecx, ds:[eax+0xC]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        jmp public_6d07620
        public_6d07644 : nop
        mov edi, dword ptr ds : [esi+0xC4]
        cmp edi, ebx
        je public_6d07679
        mov edi, edi
        public_6d07650 : nop
        cmp byte ptr ds : [esi+0xCC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d0766c
        mov ecx, dword ptr ds : [esi+0xD0]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0xD0], eax
        jmp public_6d07675
        public_6d0766c : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d07675 : nop
        cmp edi, ebx
        jne public_6d07650
        public_6d07679 : nop
        pop edi
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d075f0)
    }
}

#undef public_6d07620
#undef public_6d0762c
#undef public_6d0762e
#undef public_6d07644
#undef public_6d07650
#undef public_6d0766c
#undef public_6d07675
#undef public_6d07679
