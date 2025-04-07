#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56160);
CLANG_FORWARD_PROC_SYMBOL(public_6f56780);
CLANG_FORWARD_PROC_SYMBOL(public_6f56840);
CLANG_FORWARD_PROC_SYMBOL(public_6f56900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf6e8);

#define public_6f561d1 _public_6f561d1
#define public_6f561fc _public_6f561fc
#define public_6f56230 _public_6f56230
#define public_6f5623f _public_6f5623f
#define public_6f56280 _public_6f56280
#define public_6f5628c _public_6f5628c
#define public_6f5628e _public_6f5628e
#define public_6f562da _public_6f562da
#define public_6f562fd _public_6f562fd
#define public_6f56310 _public_6f56310
#define public_6f56366 _public_6f56366
#define public_6f56384 _public_6f56384
#define public_6f56396 _public_6f56396
#define public_6f5639c _public_6f5639c
#define public_6f563ad _public_6f563ad
#define public_6f563c0 _public_6f563c0
#define public_6f56449 _public_6f56449
#define public_6f56464 _public_6f56464
#define public_6f56494 _public_6f56494

PROC_DECLARE(0x6f56160, internal_6f56160, public_6f56160);
extern "C" NAKED register_t __cdecl internal_6f56160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf6e8 @0x6f56162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf6e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        mov cl, byte ptr ss : [esp+0x74]
        xor eax, eax
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x6C], eax
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], eax
        mov esi, dword ptr ss : [esp+0x80]
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], eax
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f563ad
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        mov ebp, dword ptr ds : [public_6fb3020]
/*FIXUP public_6f561d1 : nop
        push offset public_6fb8be4 @0x6f561d1*/
  FIXUP public_6f561d1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8be4
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f561fc
        push 0
        call ebx
        push eax
        lea edx, ss:[esp+0x60]
        push edx
        call dword ptr ds : [public_6fb3690]
        add esp, 8
        jmp public_6f5639c
/*FIXUP public_6f561fc : nop
        push offset public_6fb8084 @0x6f561fc*/
  FIXUP public_6f561fc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8084
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f5623f
        push 0
        call ebp
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f56230
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x64], eax
        jmp public_6f5639c
        public_6f56230 : nop
        push 1
        mov ecx, esi
        call ebp
        mov dword ptr ss : [esp+0x64], eax
        jmp public_6f5639c
/*FIXUP public_6f5623f : nop
        push offset public_6fb44fc @0x6f5623f*/
  FIXUP public_6f5623f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f56464
/*FIXUP push offset public_6fb5ca0 @0x6f56254*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f562fd
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        cmp eax, ecx
        je public_6f5628c
        nop 
        lea esp, ss:[esp]
        public_6f56280 : nop
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6f5628e
        add eax, 4
        cmp eax, ecx
        jne public_6f56280
        public_6f5628c : nop
        mov eax, ecx
        public_6f5628e : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f562da
/*FIXUP push offset public_6fbb9b8 @0x6f56296*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9b8
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6eb5770
/*FIXUP push offset public_6fbb9b8 @0x6f562a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9b8
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x88], 1
        call public_6eb5f30
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6fa6e80
        jmp public_6f5639c
        public_6f562da : nop
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x8C], 0
        call public_6fa6e80
        jmp public_6f5639c
        public_6f562fd : nop
        xor edi, edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f56396
        public_6f56310 : nop
        push edi
        mov ecx, esi
        call ebx
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_6fb361c]
        add esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x40]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f56366
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6eb5770
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], 1
        jmp public_6f56384
        public_6f56366 : nop
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x8C], 0
        call public_6fa6e80
        public_6f56384 : nop
        inc edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f56310
        public_6f56396 : nop
        mov ebp, dword ptr ds : [public_6fb3020]
        public_6f5639c : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f561d1
        pop ebp
        public_6f563ad : nop
        mov esi, dword ptr ss : [esp+0x38]
        cmp esi, dword ptr ss : [esp+0x3C]
        je public_6f56449
        mov bl, 2
        lea ecx, ds:[ecx]
        public_6f563c0 : nop
        mov edi, dword ptr ds : [esi]
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6ead6a0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x7C], 1
        mov dword ptr ss : [esp+0x48], edi
        call public_6f56840
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, offset public_6fd0d2c
        mov byte ptr ss : [esp+0x80], bl
        call public_6f56780
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x78], 1
        call public_6eec8d0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x78], 0
        call public_6eec8d0
        mov eax, dword ptr ds : [edi+0x18]
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ds:[edi+0x10]
        push 1
        push eax
        call public_6f56900
        mov eax, dword ptr ss : [esp+0x3C]
        add esi, 4
        cmp esi, eax
        jne public_6f563c0
        mov esi, dword ptr ss : [esp+0x38]
        public_6f56449 : nop
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x74]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 
/*FIXUP public_6f56464 : nop
        push offset public_6fbb9dc @0x6f56464*/
  FIXUP public_6f56464 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9dc
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f56494
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x68]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x6C]
        jmp public_6f5639c
/*FIXUP public_6f56494 : nop
        push offset public_6fb44f4 @0x6f56494*/
  FIXUP public_6f56494 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44f4
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f5639c
        push 0
        mov ecx, esi
        call ebp
        mov dword ptr ss : [esp+0x84], eax
        fild dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0x70]
        jmp public_6f5639c
        UNREACHABLE_TRAP(0x6f56160)
    }
}

#undef public_6f561d1
#undef public_6f561fc
#undef public_6f56230
#undef public_6f5623f
#undef public_6f56280
#undef public_6f5628c
#undef public_6f5628e
#undef public_6f562da
#undef public_6f562fd
#undef public_6f56310
#undef public_6f56366
#undef public_6f56384
#undef public_6f56396
#undef public_6f5639c
#undef public_6f563ad
#undef public_6f563c0
#undef public_6f56449
#undef public_6f56464
#undef public_6f56494
