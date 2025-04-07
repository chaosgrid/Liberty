#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001a80);
CLANG_FORWARD_PROC_SYMBOL(public_10002de0);
CLANG_FORWARD_PROC_SYMBOL(public_100032d0);
CLANG_FORWARD_PROC_SYMBOL(public_100033e0);
CLANG_FORWARD_PROC_SYMBOL(public_10003940);
CLANG_FORWARD_PROC_SYMBOL(public_100058e0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a40c);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);
CLANG_FORWARD_PROC_SYMBOL(public_1000a470);
CLANG_FORWARD_PROC_SYMBOL(public_1000a476);
CLANG_FORWARD_PROC_SYMBOL(public_1000a47c);
CLANG_FORWARD_PROC_SYMBOL(public_1000a482);

#define public_100039c0 _public_100039c0
#define public_100039e4 _public_100039e4
#define public_100039f3 _public_100039f3
#define public_100039fa _public_100039fa
#define public_10003a04 _public_10003a04
#define public_10003a08 _public_10003a08
#define public_10003a1a _public_10003a1a
#define public_10003a28 _public_10003a28
#define public_10003a36 _public_10003a36
#define public_10003a41 _public_10003a41
#define public_10003a52 _public_10003a52
#define public_10003a93 _public_10003a93
#define public_10003a98 _public_10003a98
#define public_10003aa2 _public_10003aa2
#define public_10003acc _public_10003acc
#define public_10003af3 _public_10003af3
#define public_10003af9 _public_10003af9
#define public_10003b40 _public_10003b40

PROC_DECLARE(0x10003940, internal_10003940, public_10003940);
extern "C" NAKED register_t __cdecl internal_10003940()
{
    __asm
    {
        sub esp, 0x58
        push ebx
        push ebp
        lea ecx, ss:[esp+0x10]
        xor ebx, ebx
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        push esi
        or ebp, 0xFFFFFFFF
        cmp ecx, ebx
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, eax
        je public_10003a98
        cmp eax, ebx
        je public_10003a98
        push 0x64
        call public_1000a46a
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_10003a98
        push ebx
        push ebx
        push ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        call public_10001a80
        mov dword ptr ds : [esi+0x4C], eax
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x58], ebx
        lea edx, ds:[eax+1]
        lea ecx, ds:[ecx]
        public_100039c0 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        cmp cl, bl
        jne public_100039c0
        sub eax, edx
        inc eax
        push eax
        call public_1000a46a
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x54], eax
        je public_10003a93
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, eax
        public_100039e4 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_100039e4
        mov byte ptr ds : [esi+0x5C], bl
        mov cl, 0x72
        public_100039f3 : nop
        cmp byte ptr ds : [edi], cl
        jne public_100039fa
        mov byte ptr ds : [esi+0x5C], cl
        public_100039fa : nop
        mov al, byte ptr ds : [edi]
        cmp al, 0x77
        je public_10003a04
        cmp al, 0x61
        jne public_10003a08
        public_10003a04 : nop
        mov byte ptr ds : [esi+0x5C], 0x77
        public_10003a08 : nop
        mov al, byte ptr ds : [edi]
        cmp al, 0x30
        jl public_10003a1a
        cmp al, 0x39
        jg public_10003a1a
        movsx ebp, al
        sub ebp, 0x30
        jmp public_10003a41
        public_10003a1a : nop
        cmp al, 0x66
        jne public_10003a28
        mov dword ptr ss : [esp+0x14], 1
        jmp public_10003a41
        public_10003a28 : nop
        cmp al, 0x68
        jne public_10003a36
        mov dword ptr ss : [esp+0x14], 2
        jmp public_10003a41
        public_10003a36 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx], al
        inc edx
        mov dword ptr ss : [esp+0x10], edx
        public_10003a41 : nop
        inc edi
        cmp al, bl
        je public_10003a52
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x68]
        cmp eax, edx
        jne public_100039f3
        public_10003a52 : nop
        mov al, byte ptr ds : [esi+0x5C]
        cmp al, bl
        je public_10003a93
        cmp al, 0x77
        jne public_10003aa2
        mov eax, dword ptr ss : [esp+0x14]
        push 0x38
/*FIXUP push offset public_1000b068 @0x10003a63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b068
        push eax
        push 8
        push 0xFFFFFFF1
        push 8
        push ebp
        push esi
        call public_10002de0
        push 0x4000
        mov edi, eax
        call public_1000a46a
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0xC], eax
        jne public_10003a93
        cmp eax, ebx
        jne public_10003acc
        public_10003a93 : nop
        call public_100033e0
        public_10003a98 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x58
        ret 
        public_10003aa2 : nop
        push 0x4000
        call public_1000a46a
        add esp, 4
        push 0x38
/*FIXUP push offset public_1000b068 @0x10003ab1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b068
        push 0xFFFFFFF1
        push esi
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi], eax
        call public_100058e0
        test eax, eax
        jne public_10003a93
        cmp dword ptr ds : [esi+0x44], ebx
        je public_10003a93
        public_10003acc : nop
        mov dword ptr ds : [esi+0x10], 0x4000
        call public_1000a40c
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x70]
        cmp eax, ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        jge public_10003af3
        mov edx, dword ptr ss : [esp+0x70]
        push edx
        call public_1000a482
        jmp public_10003af9
        public_10003af3 : nop
        push eax
        call public_1000a47c
        public_10003af9 : nop
        add esp, 8
        cmp eax, ebx
        mov dword ptr ds : [esi+0x40], eax
        je public_10003a93
        cmp byte ptr ds : [esi+0x5C], 0x77
        jne public_10003b40
        mov edx, dword ptr ds : [public_1000d010]
        mov ecx, dword ptr ds : [public_1000d00c]
        push 0xB
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push 8
        push edx
        push ecx
/*FIXUP push offset public_1000b134 @0x10003b21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b134
        push eax
        call public_1000a476
        add esp, 0x30
        pop edi
        mov dword ptr ds : [esi+0x60], 0xA
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        public_10003b40 : nop
        mov eax, esi
        call public_100032d0
        mov edx, dword ptr ds : [esi+0x40]
        push edx
        call public_1000a470
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        sub eax, ecx
        pop edi
        mov dword ptr ds : [esi+0x60], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x10003940)
    }
}

#undef public_100039c0
#undef public_100039e4
#undef public_100039f3
#undef public_100039fa
#undef public_10003a04
#undef public_10003a08
#undef public_10003a1a
#undef public_10003a28
#undef public_10003a36
#undef public_10003a41
#undef public_10003a52
#undef public_10003a93
#undef public_10003a98
#undef public_10003aa2
#undef public_10003acc
#undef public_10003af3
#undef public_10003af9
#undef public_10003b40
