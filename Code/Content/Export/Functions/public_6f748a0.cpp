#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7260);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5590);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5720);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b8e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0121);

#define public_6f748d8 _public_6f748d8
#define public_6f74960 _public_6f74960
#define public_6f7497a _public_6f7497a
#define public_6f749ba _public_6f749ba
#define public_6f749bc _public_6f749bc
#define public_6f749bf _public_6f749bf
#define public_6f749ec _public_6f749ec
#define public_6f74a2e _public_6f74a2e
#define public_6f74a44 _public_6f74a44
#define public_6f74a60 _public_6f74a60
#define public_6f74a81 _public_6f74a81
#define public_6f74a89 _public_6f74a89
#define public_6f74a9b _public_6f74a9b

PROC_DECLARE(0x6f748a0, internal_6f748a0, public_6f748a0);
extern "C" NAKED register_t __cdecl internal_6f748a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0121 @0x6f748a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0121
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x9C0
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x9D8]
        mov ebp, ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f74a9b
        push ebx
        push edi
        public_6f748d8 : nop
        mov edi, dword ptr ds : [public_6fb301c]
/*FIXUP push offset public_6fbbf3c @0x6f748de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf3c
        mov ecx, esi
        call edi
        test al, al
        je public_6f74a44
        lea ecx, ss:[esp+0x60]
        call public_6eb7260
        mov eax, dword ptr ds : [public_6fb3064]
        xor edi, edi
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x9D8], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0xA4], ebx
        call dword ptr ds : [public_6fb309c]
        mov byte ptr ss : [esp+0x480], 0
        mov dword ptr ss : [esp+0x484], ebx
        mov dword ptr ss : [esp+0x18], offset public_6fbbf30
        mov ecx, esi
        mov dword ptr ss : [esp+0x9D8], 1
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f7497a
        nop 
        public_6f74960 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call public_6ed5590
        add esp, 8
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f74960
        public_6f7497a : nop
        mov eax, dword ptr ss : [esp+0x68]
        xor bl, bl
        cmp eax, edi
        mov eax, dword ptr ss : [esp+0x64]
        je public_6f749ba
        cmp eax, edi
        jne public_6f749bc
        lea edx, ss:[esp+0x6C]
        push edx
        call dword ptr ds : [public_6fb3684]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp eax, edi
        je public_6f749bf
        mov bl, 1
        jmp public_6f749bf
        public_6f749ba : nop
        cmp eax, edi
        public_6f749bc : nop
        setne bl
        public_6f749bf : nop
        cmp dword ptr ss : [esp+0x68], edi
        je public_6f74a2e
        mov ecx, dword ptr ss : [esp+0xA4]
        or eax, 0xFFFFFFFF
        cmp ecx, eax
        jne public_6f749ec
        cmp dword ptr ss : [esp+0x64], edi
        jne public_6f749ec
        test bl, bl
        jne public_6f749ec
        cmp dword ptr ss : [esp+0x484], eax
        jne public_6f749ec
        cmp dword ptr ss : [esp+0x1C], edi
        je public_6f74a2e
        public_6f749ec : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x48C]
        call public_6ed5720
        mov edx, dword ptr ss : [ebp+0x90]
        push eax
        lea ecx, ss:[ebp+0x88]
        push 1
        push edx
        mov byte ptr ss : [esp+0x9E4], 2
        call public_6f7b8e0
        lea ecx, ss:[esp+0x488]
        mov byte ptr ss : [esp+0x9D8], 1
        call public_6eb7230
        public_6f74a2e : nop
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x9D8], 0xFFFFFFFF
        call public_6f28e10
        jmp public_6f74a89
/*FIXUP public_6f74a44 : nop
        push offset public_6fbbf24 @0x6f74a44*/
  FIXUP public_6f74a44 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf24
        mov ecx, esi
        call edi
        test al, al
        je public_6f74a89
        mov edi, dword ptr ds : [public_6fb3018]
        mov ecx, esi
        call edi
        test al, al
        je public_6f74a89
        nop 
/*FIXUP public_6f74a60 : nop
        push offset public_6fbbf0c @0x6f74a60*/
  FIXUP public_6f74a60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbf0c
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f74a81
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [ebp+0x11C], al
        public_6f74a81 : nop
        mov ecx, esi
        call edi
        test al, al
        jne public_6f74a60
        public_6f74a89 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f748d8
        pop edi
        pop ebx
        public_6f74a9b : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3028]
        mov ecx, dword ptr ss : [esp+0x9C8]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x9CC
        ret 4
        UNREACHABLE_TRAP(0x6f748a0)
    }
}

#undef public_6f748d8
#undef public_6f74960
#undef public_6f7497a
#undef public_6f749ba
#undef public_6f749bc
#undef public_6f749bf
#undef public_6f749ec
#undef public_6f74a2e
#undef public_6f74a44
#undef public_6f74a60
#undef public_6f74a81
#undef public_6f74a89
#undef public_6f74a9b
