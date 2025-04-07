#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb7bb2 _public_6eb7bb2
#define public_6eb7bd2 _public_6eb7bd2
#define public_6eb7bd6 _public_6eb7bd6
#define public_6eb7bdb _public_6eb7bdb
#define public_6eb7c6d _public_6eb7c6d
#define public_6eb7c84 _public_6eb7c84
#define public_6eb7c9c _public_6eb7c9c
#define public_6eb7ca3 _public_6eb7ca3
#define public_6eb7cb5 _public_6eb7cb5
#define public_6eb7cc7 _public_6eb7cc7

PROC_DECLARE(0x6eb7b90, internal_6eb7b90, public_6eb7b90);
extern "C" NAKED register_t __cdecl internal_6eb7b90()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6eb7cb5
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6eb7bb2 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6eb7bd6
        cmp al, bl
        je public_6eb7bd2
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6eb7bd6
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6eb7bb2
        public_6eb7bd2 : nop
        xor eax, eax
        jmp public_6eb7bdb
        public_6eb7bd6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb7bdb : nop
        cmp eax, ebx
        jne public_6eb7cb5
        push 0x88
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6eb7ca3
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov byte ptr ds : [esi+0x74], 1
        mov byte ptr ds : [esi+0x75], 1
        lea eax, ds:[esi+0x7C]
        mov dword ptr ds : [eax], offset public_6ed1c14
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed1ba0
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x78], ecx
        jne public_6eb7c9c
        mov dword ptr ds : [esi+0x78], eax
        public_6eb7c6d : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6eb7cc7
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6eb7c84
        mov dword ptr ds : [eax], ebx
        public_6eb7c84 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6eb7c9c : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6eb7c6d
        public_6eb7ca3 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6eb7cb5 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6eb7cc7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb7b90)
    }
}

#undef public_6eb7bb2
#undef public_6eb7bd2
#undef public_6eb7bd6
#undef public_6eb7bdb
#undef public_6eb7c6d
#undef public_6eb7c84
#undef public_6eb7c9c
#undef public_6eb7ca3
#undef public_6eb7cb5
#undef public_6eb7cc7
