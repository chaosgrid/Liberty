#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

#define public_6d38c3c _public_6d38c3c
#define public_6d38c40 _public_6d38c40
#define public_6d38c7b _public_6d38c7b
#define public_6d38c9a _public_6d38c9a
#define public_6d38cb2 _public_6d38cb2
#define public_6d38cc1 _public_6d38cc1
#define public_6d38cd6 _public_6d38cd6
#define public_6d38ce0 _public_6d38ce0
#define public_6d38d10 _public_6d38d10
#define public_6d38d4f _public_6d38d4f
#define public_6d38d69 _public_6d38d69
#define public_6d38d78 _public_6d38d78
#define public_6d38d93 _public_6d38d93
#define public_6d38dd7 _public_6d38dd7
#define public_6d38e13 _public_6d38e13
#define public_6d38e22 _public_6d38e22
#define public_6d38e2e _public_6d38e2e

PROC_DECLARE(0x6d38bf0, internal_6d38bf0, public_6d38bf0);
extern "C" NAKED register_t __cdecl internal_6d38bf0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+8]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d38d69
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, edi
        je public_6d38c7b
        jmp public_6d38c40
        public_6d38c3c : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_6d38c40 : nop
        cmp dword ptr ss : [ebp+0xC], ebx
        je public_6d38d69
        xor eax, eax
        mov ax, word ptr ds : [esi]
        xor edx, edx
        mov dx, word ptr ds : [ebx]
        add ecx, 0xC
        push eax
        push edx
        call public_6d3e550
        test al, al
        mov edi, dword ptr ss : [esp+0x28]
        jne public_6d38d69
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        add ebx, 2
        cmp esi, eax
        jne public_6d38c3c
        cmp ebx, edi
        jne public_6d38cc1
        public_6d38c7b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d38c9a
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x10
        ret 8
        public_6d38c9a : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d38cb2
        cmp dword ptr ss : [ebp+8], edi
        jne public_6d38cb2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_6d38cb2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d38cc1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6d38cd6
        mov edi, ebx
        mov dword ptr ss : [esp+0x14], 1
        public_6d38cd6 : nop
        cmp dword ptr ss : [esp+0x14], eax
        jae public_6d38d78
        public_6d38ce0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx]
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        je public_6d38e2e
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6d38d4f
        mov edi, edi
        public_6d38d10 : nop
        cmp dword ptr ss : [ebp+0xC], edi
        je public_6d38e2e
        mov bx, word ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push ebx
        mov ebp, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bp
        jne public_6d38e2e
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        add esi, 2
        add edi, 2
        cmp esi, eax
        jne public_6d38d10
        public_6d38d4f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6d38ce0
        jmp public_6d38d78
        public_6d38d69 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_6d38e2e
        public_6d38d78 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d38e13
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d38d93 : nop
        jne public_6d38e22
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0x10]
        jae public_6d38e2e
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp]
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 5
        lea eax, ds:[edx+ecx]
        mov cl, byte ptr ds : [eax+8]
        inc ebx
        test cl, cl
        mov dword ptr ss : [esp+0x14], ebx
        je public_6d38e2e
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6d38d78
        public_6d38dd7 : nop
        cmp dword ptr ss : [ebp+0xC], edi
        je public_6d38e2e
        mov bx, word ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push ebx
        mov ebp, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bp
        jne public_6d38e2e
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        add esi, 2
        add edi, 2
        cmp esi, eax
        jne public_6d38dd7
        jmp public_6d38d78
        public_6d38e13 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d38e22
        cmp dword ptr ss : [ebp+8], edi
        jmp public_6d38d93
        public_6d38e22 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 8
        public_6d38e2e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d38bf0)
    }
}

#undef public_6d38c3c
#undef public_6d38c40
#undef public_6d38c7b
#undef public_6d38c9a
#undef public_6d38cb2
#undef public_6d38cc1
#undef public_6d38cd6
#undef public_6d38ce0
#undef public_6d38d10
#undef public_6d38d4f
#undef public_6d38d69
#undef public_6d38d78
#undef public_6d38d93
#undef public_6d38dd7
#undef public_6d38e13
#undef public_6d38e22
#undef public_6d38e2e
