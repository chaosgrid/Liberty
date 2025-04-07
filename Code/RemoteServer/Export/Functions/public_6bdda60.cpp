#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec240);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bddaaa _public_6bddaaa
#define public_6bddac0 _public_6bddac0
#define public_6bddae8 _public_6bddae8
#define public_6bddb1a _public_6bddb1a
#define public_6bddb33 _public_6bddb33
#define public_6bddb3a _public_6bddb3a
#define public_6bddb69 _public_6bddb69
#define public_6bddbaf _public_6bddbaf
#define public_6bddbef _public_6bddbef
#define public_6bddbf6 _public_6bddbf6
#define public_6bddc14 _public_6bddc14
#define public_6bddc51 _public_6bddc51
#define public_6bddc73 _public_6bddc73
#define public_6bddc83 _public_6bddc83
#define public_6bddc9e _public_6bddc9e
#define public_6bddcb2 _public_6bddcb2
#define public_6bddcd9 _public_6bddcd9
#define public_6bddd09 _public_6bddd09
#define public_6bddd35 _public_6bddd35
#define public_6bddd4d _public_6bddd4d
#define public_6bddd6b _public_6bddd6b
#define public_6bddd78 _public_6bddd78
#define public_6bddd8f _public_6bddd8f
#define public_6bddda4 _public_6bddda4
#define public_6bdddcb _public_6bdddcb
#define public_6bdde07 _public_6bdde07
#define public_6bdde13 _public_6bdde13

PROC_DECLARE(0x6bdda60, internal_6bdda60, public_6bdda60);
extern "C" NAKED register_t __cdecl internal_6bdda60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bddaaa
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 8
        ret 0xC
        public_6bddaaa : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6bddac0
        mov dword ptr ds : [ebx+0xC], edi
        public_6bddac0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ss : [ebp+0x54], dl
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddae8
        mov dword ptr ds : [ebx+0xC], edi
        public_6bddae8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ss : [ebp+0x54]
        add eax, 4
        mov dword ptr ds : [esi], eax
        test byte ptr ss : [ebp+0x34], dl
        mov dword ptr ss : [ebp+0x58], ecx
        je public_6bddb33
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddb1a
        mov dword ptr ds : [ebx+0xC], edi
        public_6bddb1a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x5C], ecx
        mov dword ptr ds : [esi], eax
        jmp public_6bddb3a
        public_6bddb33 : nop
        mov dword ptr ss : [ebp+0x5C], 0xFFFFFFFF
        public_6bddb3a : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bddc14
        mov dl, byte ptr ss : [ebp+0x54]
        test byte ptr ss : [ebp+0x3C], dl
        je public_6bddbef
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddb69
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddb69 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ss : [ebp+0x60], eax
        lea eax, ds:[eax*4+4]
        push eax
        call public_6c09d26
        mov ecx, dword ptr ss : [ebp+0x60]
        mov dword ptr ss : [ebp+0x64], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 1
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddbaf
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddbaf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ss : [ebp+0x60]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x64]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x1C], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp+0x60]
        add ecx, eax
        mov eax, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [ebp+0x18], ecx
        mov word ptr ds : [eax+edx*2], 0
        jmp public_6bddbf6
        public_6bddbef : nop
        mov dword ptr ss : [ebp+0x60], 0
        public_6bddbf6 : nop
        mov cl, byte ptr ss : [ebp+0x54]
        test byte ptr ss : [ebp+0x38], cl
        je public_6bddc14
        lea edx, ss:[ebp+0x20]
        push edx
        mov ecx, ebp
        call public_6bec240
        lea eax, ss:[ebp+0x28]
        push eax
        mov ecx, ebp
        call public_6bec240
        public_6bddc14 : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bddd78
        mov eax, dword ptr ss : [ebp+0x44]
        movzx ecx, byte ptr ss : [ebp+0x54]
        mov edx, dword ptr ss : [ebp+0x40]
        or edx, eax
        test ecx, edx
        je public_6bddda4
        mov edx, dword ptr ds : [ebx]
        test ecx, eax
        mov ecx, dword ptr ds : [ebx+4]
        je public_6bddc73
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddc51
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddc51 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov ax, cx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6bddc9e
        public_6bddc73 : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddc83
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddc83 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        movzx ecx, cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_6bddc9e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6bddda4
        public_6bddcb2 : nop
        push 8
        call public_6c09d26
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov ecx, eax
        mov eax, esi
        add esp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6bddcd9
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddcd9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bddd6b
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6bddd09
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddd09 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bddd6b
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x4C]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bddd35
        mov edi, eax
        public_6bddd35 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bddd4d
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6bddd4d : nop
        mov esi, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc esi
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x50], esi
        mov dword ptr ss : [esp+0x10], eax
        jb public_6bddcb2
        jmp public_6bddda4
        public_6bddd6b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6bddd78 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6bddd8f
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6bddd8f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bdde13
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x30], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6bddda4 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6bdddcb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 8
        ret 0xC
        public_6bdddcb : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6bdde07
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6bdde07 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bdde13 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6bdda60)
    }
}

#undef public_6bddaaa
#undef public_6bddac0
#undef public_6bddae8
#undef public_6bddb1a
#undef public_6bddb33
#undef public_6bddb3a
#undef public_6bddb69
#undef public_6bddbaf
#undef public_6bddbef
#undef public_6bddbf6
#undef public_6bddc14
#undef public_6bddc51
#undef public_6bddc73
#undef public_6bddc83
#undef public_6bddc9e
#undef public_6bddcb2
#undef public_6bddcd9
#undef public_6bddd09
#undef public_6bddd35
#undef public_6bddd4d
#undef public_6bddd6b
#undef public_6bddd78
#undef public_6bddd8f
#undef public_6bddda4
#undef public_6bdddcb
#undef public_6bdde07
#undef public_6bdde13
