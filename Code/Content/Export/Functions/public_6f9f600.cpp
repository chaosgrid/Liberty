#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3470);
CLANG_FORWARD_PROC_SYMBOL(public_6fa38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3b80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa58a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9f621 _public_6f9f621
#define public_6f9f62f _public_6f9f62f
#define public_6f9f656 _public_6f9f656
#define public_6f9f67e _public_6f9f67e
#define public_6f9f69d _public_6f9f69d
#define public_6f9f6a1 _public_6f9f6a1
#define public_6f9f6c1 _public_6f9f6c1

PROC_DECLARE(0x6f9f600, internal_6f9f600, public_6f9f600);
extern "C" NAKED register_t __cdecl internal_6f9f600()
{
    __asm
    {
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov byte ptr ds : [ecx+4], bl
        mov byte ptr ds : [ecx+5], bl
        mov dword ptr ds : [ecx+8], 0xFFFFFFFF
        mov esi, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, esi
        cmp eax, esi
        push edi
        je public_6f9f62f
        public_6f9f621 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, esi
        jne public_6f9f621
        public_6f9f62f : nop
        lea esi, ds:[ecx+0x1C]
        mov dword ptr ds : [ecx+0x14], edx
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6f9f69d
        mov ecx, eax
        cmp eax, ecx
        jne public_6f9f69d
        mov eax, dword ptr ds : [esi+8]
        push ebp
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, eax
        mov edi, ebp
        je public_6f9f67e
        public_6f9f656 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa38c0
        mov edi, dword ptr ds : [edi]
        push ebx
        lea ecx, ss:[ebp+0xC]
        call public_6fa58a0
        push ebp
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebp, edi
        jne public_6f9f656
        public_6f9f67e : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        pop ebp
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6f9f69d : nop
        cmp eax, edi
        je public_6f9f6c1
        public_6f9f6a1 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6fa3b80
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6fa3470
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6f9f6a1
        public_6f9f6c1 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f9f600)
    }
}

#undef public_6f9f621
#undef public_6f9f62f
#undef public_6f9f656
#undef public_6f9f67e
#undef public_6f9f69d
#undef public_6f9f6a1
#undef public_6f9f6c1
