#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49780);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a140);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f497d7 _public_6f497d7
#define public_6f4981a _public_6f4981a
#define public_6f4985d _public_6f4985d
#define public_6f498a0 _public_6f498a0
#define public_6f498c2 _public_6f498c2
#define public_6f498e4 _public_6f498e4
#define public_6f49910 _public_6f49910
#define public_6f4991b _public_6f4991b
#define public_6f4991d _public_6f4991d
#define public_6f49948 _public_6f49948
#define public_6f4996a _public_6f4996a
#define public_6f499bc _public_6f499bc
#define public_6f499e7 _public_6f499e7

PROC_DECLARE(0x6f49780, internal_6f49780, public_6f49780);
extern "C" NAKED register_t __cdecl internal_6f49780()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        mov edi, ecx
/*FIXUP push offset public_6fbb1e8 @0x6f49793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb1e8
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f497d7
        mov ebx, dword ptr ds : [public_6fb3020]
        push 1
        call ebx
        push 0
        mov ecx, esi
        mov ebp, eax
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebp
        call public_6f003e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f497d7 : nop
        push offset public_6fbb1d8 @0x6f497d7*/
  FIXUP public_6f497d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb1d8
        call ebx
        test al, al
        mov ecx, esi
        je public_6f4981a
        mov ebx, dword ptr ds : [public_6fb3020]
        push 1
        call ebx
        push 0
        mov ecx, esi
        mov ebp, eax
        call ebx
        lea edx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x24], ebp
        call public_6f4a140
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f4981a : nop
        push offset public_6fbb1cc @0x6f4981a*/
  FIXUP public_6f4981a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb1cc
        call ebx
        test al, al
        mov ecx, esi
        je public_6f4985d
        mov ebx, dword ptr ds : [public_6fb3020]
        push 1
        call ebx
        push 0
        mov ecx, esi
        mov ebp, eax
        call ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[edi+0x28]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], ebp
        call public_6f4a140
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f4985d : nop
        push offset public_6fbb1c0 @0x6f4985d*/
  FIXUP public_6f4985d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb1c0
        call ebx
        test al, al
        mov ecx, esi
        je public_6f498a0
        mov ebx, dword ptr ds : [public_6fb3020]
        push 1
        call ebx
        push 0
        mov ecx, esi
        mov ebp, eax
        call ebx
        mov byte ptr ss : [esp+0x18], al
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[edi+0x3C]
        mov dword ptr ss : [esp+0x24], ebp
        call public_6f4a140
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f498a0 : nop
        push offset public_6fbb1ac @0x6f498a0*/
  FIXUP public_6f498a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb1ac
        call ebx
        test al, al
        mov ecx, esi
        je public_6f498c2
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x50]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f498c2 : nop
        push offset public_6fbb198 @0x6f498c2*/
  FIXUP public_6f498c2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb198
        call ebx
        test al, al
        mov ecx, esi
        je public_6f498e4
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x54]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f498e4 : nop
        push offset public_6fbb18c @0x6f498e4*/
  FIXUP public_6f498e4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb18c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f4996a
        push 0
        call dword ptr ds : [public_6fb3020]
        mov ecx, dword ptr ds : [edi+0x5C]
        mov edx, dword ptr ds : [edi+0x60]
        cmp ecx, edx
        lea esi, ds:[edi+0x58]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f4991b
        lea ebx, ds:[ebx]
        public_6f49910 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6f4991d
        add ecx, 4
        cmp ecx, edx
        jne public_6f49910
        public_6f4991b : nop
        mov ecx, edx
        public_6f4991d : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f49948
        lea eax, ss:[esp+0x10]
        push eax
        push edx
        mov ecx, esi
        call public_6eb5770
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6eb5f30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        public_6f49948 : nop
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x34], 0
        call public_6fa6e80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f4996a : nop
        push offset public_6fbb17c @0x6f4996a*/
  FIXUP public_6f4996a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb17c
        call ebx
        test al, al
        mov ecx, esi
        je public_6f499bc
        push 0
        call dword ptr ds : [public_6fb3020]
        lea ecx, ss:[esp+0x2C]
        lea esi, ds:[edi+0x68]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], eax
        call public_6eb5f30
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6f499e7
        lea edx, ss:[esp+0x2C]
        push edx
        push ecx
        mov ecx, esi
        call public_6eb5770
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call public_6eb5f30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
/*FIXUP public_6f499bc : nop
        push offset public_6fbb16c @0x6f499bc*/
  FIXUP public_6f499bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb16c
        call ebx
        test al, al
        je public_6f499e7
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[edi+0x78]
        mov dword ptr ss : [esp+0x34], eax
        call public_6f95e00
        public_6f499e7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f49780)
    }
}

#undef public_6f497d7
#undef public_6f4981a
#undef public_6f4985d
#undef public_6f498a0
#undef public_6f498c2
#undef public_6f498e4
#undef public_6f49910
#undef public_6f4991b
#undef public_6f4991d
#undef public_6f49948
#undef public_6f4996a
#undef public_6f499bc
#undef public_6f499e7
