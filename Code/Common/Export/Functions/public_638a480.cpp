#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6380cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6383f50);
CLANG_FORWARD_PROC_SYMBOL(public_6385600);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_6386b00);
CLANG_FORWARD_PROC_SYMBOL(public_63872c0);
CLANG_FORWARD_PROC_SYMBOL(public_6388370);
CLANG_FORWARD_PROC_SYMBOL(public_6388720);
CLANG_FORWARD_PROC_SYMBOL(public_6388820);
CLANG_FORWARD_PROC_SYMBOL(public_63889b0);
CLANG_FORWARD_PROC_SYMBOL(public_638a480);
CLANG_FORWARD_PROC_SYMBOL(public_638b280);
CLANG_FORWARD_PROC_SYMBOL(public_638b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_638b940);
CLANG_FORWARD_PROC_SYMBOL(public_638bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_638bf80);

#define public_638a4c3 _public_638a4c3
#define public_638a4d0 _public_638a4d0
#define public_638a552 _public_638a552
#define public_638a590 _public_638a590
#define public_638a5c6 _public_638a5c6
#define public_638a5e2 _public_638a5e2
#define public_638a614 _public_638a614
#define public_638a652 _public_638a652
#define public_638a684 _public_638a684
#define public_638a6ea _public_638a6ea
#define public_638a7d6 _public_638a7d6
#define public_638a807 _public_638a807
#define public_638a834 _public_638a834
#define public_638a87d _public_638a87d
#define public_638a88c _public_638a88c
#define public_638a8a4 _public_638a8a4
#define public_638a8c1 _public_638a8c1
#define public_638a8db _public_638a8db
#define public_638a8df _public_638a8df
#define public_638a8f3 _public_638a8f3
#define public_638a908 _public_638a908
#define public_638a910 _public_638a910
#define public_638a91a _public_638a91a
#define public_638a91d _public_638a91d
#define public_638a92c _public_638a92c

PROC_DECLARE(0x638a480, internal_638a480, public_638a480);
extern "C" NAKED register_t __cdecl internal_638a480()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        test esi, esi
        je public_638a92c
        mov eax, dword ptr ds : [public_658b1a8]
        push ebx
        mov dword ptr ds : [public_658b948], eax
        mov eax, dword ptr ds : [public_658b038]
        test eax, eax
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [public_658b1a8], 0
        je public_638a4d0
        cmp edi, 4
        je public_638a4c3
        cmp edi, 0x12
        je public_638a4c3
        cmp edi, 0x10
        jne public_638a4d0
/*FIXUP public_638a4c3 : nop
        push offset public_63f87c0 @0x638a4c3*/
  FIXUP public_638a4c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f87c0
        call public_6356960
        add esp, 4
        public_638a4d0 : nop
        test edi, edi
        je public_638a91d
        cmp edi, 2
        jne public_638a552
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        call public_6386380
        push eax
        mov dword ptr ss : [esp+0x44], eax
        call public_6380cf0
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 0x10
        push ecx
/*FIXUP push offset public_63f87b8 @0x638a505*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f87b8
        push esi
        mov edi, eax
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ds : [public_658b24c]
        push 0xFFFFFFFF
        push edi
        push edx
        push 0
        push esi
        call public_638b280
        mov eax, dword ptr ds : [public_658b804]
        push eax
        push edi
        call public_6377fe0
        lea ecx, ss:[esp+0x5C]
        push ecx
        call public_636ecc0
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x2C
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a552 : nop
        cmp edi, 0x1B
        jne public_638a5e2
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_638a590
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        push ecx
        push esi
        call public_63889b0
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a590 : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        cmp eax, 2
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        push ecx
        push esi
        jne public_638a5c6
        call public_6388820
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a5c6 : nop
        call public_6388720
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a5e2 : nop
        cmp edi, 0x11
        jne public_638a614
/*FIXUP push offset public_658b468 @0x638a5e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b468
/*FIXUP push offset public_63f3260 @0x638a5ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3260
/*FIXUP push offset public_63f0970 @0x638a5f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0970
        push esi
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a614 : nop
        cmp edi, 0x14
        jne public_638a652
        mov eax, dword ptr ds : [public_658b228]
        test eax, eax
        jne public_638a8a4
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        push ecx
        push esi
        call public_638b3c0
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a652 : nop
        cmp edi, 0x15
        jne public_638a684
/*FIXUP push offset public_658b268 @0x638a657*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x638a65c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
/*FIXUP push offset public_63f87ac @0x638a661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f87ac
        push esi
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a684 : nop
        cmp edi, 0x16
        jne public_638a6ea
        mov edi, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63f87a4 @0x638a68f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f87a4
        push esi
        call edi
        mov edx, dword ptr ds : [public_658b8d4]
        mov eax, dword ptr ds : [public_658b8d0]
        add esp, 8
        push edx
        push eax
/*FIXUP push offset public_63f637c @0x638a6a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push esi
        call edi
        mov ecx, dword ptr ds : [public_658b8dc]
        mov edx, dword ptr ds : [public_658b8d8]
        add esp, 0x10
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x638a6c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push esi
        call edi
        add esp, 0x10
/*FIXUP push offset public_63edccc @0x638a6cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push esi
        call edi
        mov edx, dword ptr ds : [public_658b948]
        add esp, 8
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a6ea : nop
        cmp edi, 0x17
        jne public_638a7d6
        mov edi, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        push edi
        push ebx
        push ebp
        call public_6385600
        push edi
        push ebx
        push ebp
        call public_6386380
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 0x2C
        push edx
        push ecx
        push eax
        mov dword ptr ss : [esp+0x40], eax
        call public_636ec10
        mov edx, dword ptr ds : [public_658b844]
        mov ebx, dword ptr ds : [public_658b824]
        mov ecx, dword ptr ds : [public_658b8fc]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b848]
        sub edx, ebx
        push edx
        push eax
        push ecx
        call public_636ec10
        mov edi, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b24c]
        add esp, 4
        add eax, edi
        mov edi, dword ptr ds : [public_63991e8]
        push eax
        push edx
/*FIXUP push offset public_63f8788 @0x638a77d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8788
        push esi
        call edi
        lea eax, ss:[esp+0x58]
        push eax
        call public_636ecc0
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        push 0
        call public_6383f50
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x60]
        add esp, 0x34
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f8778 @0x638a7b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8778
        push esi
        call edi
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x18
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a7d6 : nop
        cmp edi, 0x1A
        jne public_638a807
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        push esi
        call public_638bcb0
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x10
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a807 : nop
        mov eax, dword ptr ds : [public_658b228]
        test eax, eax
        je public_638a8a4
        cmp edi, 0x10
        jne public_638a834
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        push edi
        push esi
        call public_638bf80
        jmp public_638a91a
        public_638a834 : nop
        cmp edi, 7
        jne public_638a87d
        mov edi, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ss : [esp+0x3C]
        push edi
        push ebx
        push ebp
        push 7
        push esi
        call public_63872c0
        push edi
        push ebx
        push ebp
        push 7
        push esi
        call public_638bf80
        push edi
        push ebx
        push ebp
        push 7
        push esi
        call public_6388370
        mov edx, dword ptr ds : [public_658b948]
        add esp, 0x3C
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [public_658b1a8], edx
        pop esi
        add esp, 0x20
        ret 
        public_638a87d : nop
        cmp edi, 0x19
        je public_638a88c
        cmp edi, 9
        je public_638a88c
        cmp edi, 0xC
        jne public_638a8a4
        public_638a88c : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        push edi
        push esi
        call public_638b940
        jmp public_638a91a
        public_638a8a4 : nop
        mov ebp, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x3C]
        push ebp
        push ecx
        push ebx
        push edi
        push esi
        call public_63872c0
        add esp, 0x14
        test ebx, ebx
        je public_638a8df
        public_638a8c1 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        je public_638a8db
        push ebp
        push ebx
        push edi
        push esi
        call public_6386b00
        mov ebx, dword ptr ds : [ebx+0x30]
        add esp, 0x10
        test ebx, ebx
        jne public_638a8c1
        public_638a8db : nop
        mov ebx, dword ptr ss : [esp+0x3C]
        public_638a8df : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_638a910
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ds : [ebx]
        add ebx, 4
        test eax, eax
        je public_638a908
        public_638a8f3 : nop
        push ebp
        push eax
        push edi
        push esi
        call public_6386b00
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        add ebx, 4
        test eax, eax
        jne public_638a8f3
        public_638a908 : nop
        mov ebx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        public_638a910 : nop
        push ebp
        push eax
        push ebx
        push edi
        push esi
        call public_6388370
        public_638a91a : nop
        add esp, 0x14
        public_638a91d : nop
        mov edx, dword ptr ds : [public_658b948]
        pop edi
        pop ebp
        mov dword ptr ds : [public_658b1a8], edx
        pop ebx
        public_638a92c : nop
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x638a480)
    }
}

#undef public_638a4c3
#undef public_638a4d0
#undef public_638a552
#undef public_638a590
#undef public_638a5c6
#undef public_638a5e2
#undef public_638a614
#undef public_638a652
#undef public_638a684
#undef public_638a6ea
#undef public_638a7d6
#undef public_638a807
#undef public_638a834
#undef public_638a87d
#undef public_638a88c
#undef public_638a8a4
#undef public_638a8c1
#undef public_638a8db
#undef public_638a8df
#undef public_638a8f3
#undef public_638a908
#undef public_638a910
#undef public_638a91a
#undef public_638a91d
#undef public_638a92c
