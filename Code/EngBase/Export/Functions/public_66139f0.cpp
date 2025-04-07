#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66139f0);
CLANG_FORWARD_PROC_SYMBOL(public_6614040);
CLANG_FORWARD_PROC_SYMBOL(public_6614340);
CLANG_FORWARD_PROC_SYMBOL(public_6614420);
CLANG_FORWARD_PROC_SYMBOL(public_6619a50);
CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_661a240);

#define public_6613a0c _public_6613a0c
#define public_6613a1f _public_6613a1f
#define public_6613a22 _public_6613a22
#define public_6613a26 _public_6613a26
#define public_6613a87 _public_6613a87
#define public_6613a9f _public_6613a9f
#define public_6613aa9 _public_6613aa9
#define public_6613aad _public_6613aad
#define public_6613abb _public_6613abb
#define public_6613af6 _public_6613af6
#define public_6613b05 _public_6613b05
#define public_6613b26 _public_6613b26
#define public_6613b47 _public_6613b47
#define public_6613b55 _public_6613b55
#define public_6613b74 _public_6613b74
#define public_6613b80 _public_6613b80
#define public_6613b9c _public_6613b9c
#define public_6613bb7 _public_6613bb7
#define public_6613bc0 _public_6613bc0
#define public_6613be3 _public_6613be3

PROC_DECLARE(0x66139f0, internal_66139f0, public_66139f0);
extern "C" NAKED register_t __cdecl internal_66139f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6613a26
        public_6613a0c : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setb al
        test al, al
        je public_6613a1f
        mov ebp, dword ptr ss : [ebp]
        jmp public_6613a22
        public_6613a1f : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6613a22 : nop
        cmp ebp, edx
        jne public_6613a0c
        public_6613a26 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6613b9c
        push 0
        push esi
        mov ecx, edi
        call public_661a240
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6614420
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6613a87
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6613a87
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6613a87
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6613aad
        mov dword ptr ds : [eax+8], ebx
        jmp public_6613aad
        public_6613a87 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6613a9f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6613aa9
        public_6613a9f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6613aa9
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6613aa9 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6613aad : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6613b80
        public_6613abb : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x30]
        test cl, cl
        jne public_6613b80
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6613b26
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6613af6
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6613b74
        public_6613af6 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6613b05
        mov esi, eax
        mov ecx, edi
        push esi
        call public_661a0c0
        public_6613b05 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x30], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6619a50
        jmp public_6613b74
        public_6613b26 : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6613b47
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6613b74
        public_6613b47 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6613b55
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6619a50
        public_6613b55 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_661a0c0
        public_6613b74 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6613abb
        public_6613b80 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6613b9c : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_6613bb7
        cmp esi, dword ptr ds : [ecx]
        je public_6613bc0
        lea ecx, ss:[esp+0x10]
        call public_6614340
        mov edx, dword ptr ss : [esp+0x10]
        public_6613bb7 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jae public_6613be3
        public_6613bc0 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6614040
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6613be3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66139f0)
    }
}

#undef public_6613a0c
#undef public_6613a1f
#undef public_6613a22
#undef public_6613a26
#undef public_6613a87
#undef public_6613a9f
#undef public_6613aa9
#undef public_6613aad
#undef public_6613abb
#undef public_6613af6
#undef public_6613b05
#undef public_6613b26
#undef public_6613b47
#undef public_6613b55
#undef public_6613b74
#undef public_6613b80
#undef public_6613b9c
#undef public_6613bb7
#undef public_6613bc0
#undef public_6613be3
