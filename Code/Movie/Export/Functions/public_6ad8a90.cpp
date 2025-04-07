#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad38fb);

#define public_6ad8abc _public_6ad8abc
#define public_6ad8ad4 _public_6ad8ad4
#define public_6ad8ade _public_6ad8ade
#define public_6ad8ae5 _public_6ad8ae5
#define public_6ad8aef _public_6ad8aef
#define public_6ad8b01 _public_6ad8b01
#define public_6ad8b15 _public_6ad8b15
#define public_6ad8b2e _public_6ad8b2e
#define public_6ad8b34 _public_6ad8b34
#define public_6ad8b5f _public_6ad8b5f
#define public_6ad8b65 _public_6ad8b65
#define public_6ad8b6e _public_6ad8b6e
#define public_6ad8b7c _public_6ad8b7c
#define public_6ad8b8a _public_6ad8b8a

PROC_DECLARE(0x6ad8a90, internal_6ad8a90, public_6ad8a90);
extern "C" NAKED register_t __cdecl internal_6ad8a90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr ss : [ebp+0x10]
        or ecx, ecx
        je public_6ad8b8a
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        lea eax, ds : [public_6ae0f5c]
        cmp dword ptr ds : [eax+8], 0
        jne public_6ad8b01
        mov bh, 0x41
        mov bl, 0x5A
        mov dh, 0x20
        lea ecx, ds:[ecx]
        public_6ad8abc : nop
        mov ah, byte ptr ds : [esi]
        or ah, ah
        mov al, byte ptr ds : [edi]
        je public_6ad8ae5
        or al, al
        je public_6ad8ae5
        inc esi
        inc edi
        cmp ah, bh
        jb public_6ad8ad4
        cmp ah, bl
        ja public_6ad8ad4
        add ah, dh
        public_6ad8ad4 : nop
        cmp al, bh
        jb public_6ad8ade
        cmp al, bl
        ja public_6ad8ade
        add al, dh
        public_6ad8ade : nop
        cmp ah, al
        jne public_6ad8aef
        dec ecx
        jne public_6ad8abc
        public_6ad8ae5 : nop
        xor ecx, ecx
        cmp ah, al
        je public_6ad8b8a
        public_6ad8aef : nop
        mov ecx, 0xFFFFFFFF
        jb public_6ad8b8a
        neg ecx
        jmp public_6ad8b8a
        public_6ad8b01 : nop
        lock inc dword ptr ds : [public_6ae2588]
        cmp dword ptr ds : [public_6ae2584], 0
        jg public_6ad8b15
        push 0
        jmp public_6ad8b2e
        public_6ad8b15 : nop
        lock dec dword ptr ds : [public_6ae2588]
        mov ebx, ecx
        push 0x13
        call public_6ad237a
        mov dword ptr ss : [esp], 1
        mov ecx, ebx
        public_6ad8b2e : nop
        xor eax, eax
        xor ebx, ebx
        mov edi, edi
        public_6ad8b34 : nop
        mov al, byte ptr ds : [esi]
        or eax, eax
        mov bl, byte ptr ds : [edi]
        je public_6ad8b5f
        or ebx, ebx
        je public_6ad8b5f
        inc esi
        inc edi
        push ecx
        push eax
        push ebx
        call public_6ad38fb
        mov ebx, eax
        add esp, 4
        call public_6ad38fb
        add esp, 4
        pop ecx
        cmp eax, ebx
        jne public_6ad8b65
        dec ecx
        jne public_6ad8b34
        public_6ad8b5f : nop
        xor ecx, ecx
        cmp eax, ebx
        je public_6ad8b6e
        public_6ad8b65 : nop
        mov ecx, 0xFFFFFFFF
        jb public_6ad8b6e
        neg ecx
        public_6ad8b6e : nop
        pop eax
        or eax, eax
        jne public_6ad8b7c
        lock dec dword ptr ds : [public_6ae2588]
        jmp public_6ad8b8a
        public_6ad8b7c : nop
        mov ebx, ecx
        push 0x13
        call public_6ad23db
        add esp, 4
        mov ecx, ebx
        public_6ad8b8a : nop
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad8a90)
    }
}

#undef public_6ad8abc
#undef public_6ad8ad4
#undef public_6ad8ade
#undef public_6ad8ae5
#undef public_6ad8aef
#undef public_6ad8b01
#undef public_6ad8b15
#undef public_6ad8b2e
#undef public_6ad8b34
#undef public_6ad8b5f
#undef public_6ad8b65
#undef public_6ad8b6e
#undef public_6ad8b7c
#undef public_6ad8b8a
