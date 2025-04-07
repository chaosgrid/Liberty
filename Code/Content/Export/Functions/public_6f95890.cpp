#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95890);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f969c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1668);

#define public_6f958c3 _public_6f958c3
#define public_6f95980 _public_6f95980
#define public_6f959bb _public_6f959bb
#define public_6f959d5 _public_6f959d5
#define public_6f95a00 _public_6f95a00
#define public_6f95a0b _public_6f95a0b
#define public_6f95a0d _public_6f95a0d
#define public_6f95a39 _public_6f95a39
#define public_6f95a51 _public_6f95a51
#define public_6f95a6c _public_6f95a6c
#define public_6f95a94 _public_6f95a94
#define public_6f95ab1 _public_6f95ab1
#define public_6f95ad8 _public_6f95ad8
#define public_6f95b00 _public_6f95b00
#define public_6f95b37 _public_6f95b37
#define public_6f95b43 _public_6f95b43
#define public_6f95b45 _public_6f95b45
#define public_6f95b87 _public_6f95b87
#define public_6f95ba4 _public_6f95ba4
#define public_6f95c02 _public_6f95c02
#define public_6f95c1c _public_6f95c1c
#define public_6f95c4e _public_6f95c4e
#define public_6f95c60 _public_6f95c60
#define public_6f95c70 _public_6f95c70
#define public_6f95c83 _public_6f95c83

PROC_DECLARE(0x6f95890, internal_6f95890, public_6f95890);
extern "C" NAKED register_t __cdecl internal_6f95890()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1668 @0x6f95898*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1668
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f95c83
        push ebx
        push ebp
        push edi
/*FIXUP public_6f958c3 : nop
        push offset public_6fbcb64 @0x6f958c3*/
  FIXUP public_6f958c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb64
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f95c70
        lea eax, ss:[esp+0x12]
        xor edi, edi
        push eax
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x60], edi
        call public_6ead6a0
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x94], edi
        mov byte ptr ss : [esp+0x78], 0
        call public_6ead6a0
        mov eax, dword ptr ds : [public_6fd3c18]
        lea edx, ss:[esp+0x54]
        push edx
        push 1
        push eax
        mov ecx, offset public_6fd3c10
        mov dword ptr ss : [esp+0x9C], 1
        call public_6f969c0
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x90], 2
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call public_6fa8fe0
        mov edx, dword ptr ds : [public_6fd3c18]
        lea ebx, ds:[edx-0x34]
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [esp+0x68], edi
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x70], edi
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f95c70
        lea ecx, ds:[ecx]
        public_6f95980 : nop
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb44fc @0x6f95986*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f95a6c
/*FIXUP push offset public_6fb5ca0 @0x6f95999*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f959bb
        mov byte ptr ds : [ebx+0x20], 1
        jmp public_6f95c60
        public_6f959bb : nop
        xor ebp, ebp
        push ebp
        mov ecx, esi
        mov byte ptr ds : [ebx+0x20], 0
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f95c60
        lea edi, ds:[ebx+0x24]
        public_6f959d5 : nop
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb361c]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        cmp eax, ecx
        je public_6f95a0b
        mov edx, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6f95a00 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f95a0d
        add eax, 4
        cmp eax, ecx
        jne public_6f95a00
        public_6f95a0b : nop
        mov eax, ecx
        public_6f95a0d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f95a39
        lea edx, ss:[esp+0x14]
        push edx
        push ecx
        mov ecx, edi
        call public_6eb5770
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6eb5f30
        mov dword ptr ss : [esp+0x34], eax
        mov byte ptr ss : [esp+0x38], 1
        jmp public_6f95a51
        public_6f95a39 : nop
        lea ecx, ss:[esp+0x11]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x19], 0
        call public_6fa6e80
        public_6f95a51 : nop
        inc ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f959d5
        mov ebx, dword ptr ss : [esp+0x20]
        jmp public_6f95c60
/*FIXUP public_6f95a6c : nop
        push offset public_6fb8be4 @0x6f95a6c*/
  FIXUP public_6f95a6c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8be4
        call edi
        test al, al
        mov ecx, esi
        je public_6f95a94
        push 0
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ds:[ebx+0xC]
        push eax
        call dword ptr ds : [public_6fb3690]
        add esp, 8
        jmp public_6f95c60
/*FIXUP public_6f95a94 : nop
        push offset public_6fb8918 @0x6f95a94*/
  FIXUP public_6f95a94 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8918
        call edi
        test al, al
        mov ecx, esi
        je public_6f95ab1
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+8], eax
        jmp public_6f95c60
/*FIXUP public_6f95ab1 : nop
        push offset public_6fbcb58 @0x6f95ab1*/
  FIXUP public_6f95ab1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb58
        call edi
        test al, al
        mov ecx, esi
        je public_6f95ad8
        mov edi, dword ptr ds : [public_6fb3020]
        push 0
        call edi
        push 1
        mov ecx, esi
        mov dword ptr ds : [ebx], eax
        call edi
        mov dword ptr ds : [ebx+4], eax
        jmp public_6f95c60
/*FIXUP public_6f95ad8 : nop
        push offset public_6fb8d70 @0x6f95ad8*/
  FIXUP public_6f95ad8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d70
        call edi
        test al, al
        je public_6f95c60
        xor ebp, ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f95c60
        lea ebx, ds:[ebx]
/*FIXUP public_6f95b00 : nop
        push offset public_6fbcb50 @0x6f95b00*/
  FIXUP public_6f95b00 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb50
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov edi, dword ptr ds : [public_6fb3294]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f95ba4
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x18]
        cmp eax, ecx
        lea edi, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x18], 1
        je public_6f95b43
        public_6f95b37 : nop
        cmp dword ptr ds : [eax], 1
        je public_6f95b45
        add eax, 4
        cmp eax, ecx
        jne public_6f95b37
        public_6f95b43 : nop
        mov eax, ecx
        public_6f95b45 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jne public_6f95b87
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        mov ecx, edi
        call public_6eb5770
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x15], 1
        call public_6eb5f30
        lea ecx, ss:[esp+0x11]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x2C], eax
        call public_6fa6e80
        jmp public_6f95c4e
        public_6f95b87 : nop
        lea eax, ss:[esp+0x11]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x19], 0
        call public_6fa6e80
        jmp public_6f95c4e
/*FIXUP public_6f95ba4 : nop
        push offset public_6fbcb48 @0x6f95ba4*/
  FIXUP public_6f95ba4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb48
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f95c1c
        lea edx, ss:[esp+0x18]
        lea edi, ds:[ebx+0x10]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 2
        call public_6eb5f30
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6f95c02
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, edi
        call public_6eb5770
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6eb5f30
        mov dword ptr ss : [esp+0x3C], eax
        mov byte ptr ss : [esp+0x40], 1
        jmp public_6f95c4e
        public_6f95c02 : nop
        lea edx, ss:[esp+0x11]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x19], 0
        call public_6fa6e80
        jmp public_6f95c4e
/*FIXUP public_6f95c1c : nop
        push offset public_6fbcb40 @0x6f95c1c*/
  FIXUP public_6f95c1c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb40
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6f95c4e
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x38], 3
        call public_6f95e00
        public_6f95c4e : nop
        inc ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f95b00
        public_6f95c60 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f95980
        public_6f95c70 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f958c3
        pop edi
        pop ebp
        pop ebx
        public_6f95c83 : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 
        UNREACHABLE_TRAP(0x6f95890)
    }
}

#undef public_6f958c3
#undef public_6f95980
#undef public_6f959bb
#undef public_6f959d5
#undef public_6f95a00
#undef public_6f95a0b
#undef public_6f95a0d
#undef public_6f95a39
#undef public_6f95a51
#undef public_6f95a6c
#undef public_6f95a94
#undef public_6f95ab1
#undef public_6f95ad8
#undef public_6f95b00
#undef public_6f95b37
#undef public_6f95b43
#undef public_6f95b45
#undef public_6f95b87
#undef public_6f95ba4
#undef public_6f95c02
#undef public_6f95c1c
#undef public_6f95c4e
#undef public_6f95c60
#undef public_6f95c70
#undef public_6f95c83
