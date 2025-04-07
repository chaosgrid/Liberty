#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c560);
CLANG_FORWARD_PROC_SYMBOL(public_6f2c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d080);

#define public_6f2c5af _public_6f2c5af
#define public_6f2c5c9 _public_6f2c5c9
#define public_6f2c60a _public_6f2c60a
#define public_6f2c650 _public_6f2c650
#define public_6f2c696 _public_6f2c696
#define public_6f2c6db _public_6f2c6db
#define public_6f2c71f _public_6f2c71f
#define public_6f2c763 _public_6f2c763
#define public_6f2c7b2 _public_6f2c7b2
#define public_6f2c801 _public_6f2c801
#define public_6f2c851 _public_6f2c851
#define public_6f2c8b1 _public_6f2c8b1

PROC_DECLARE(0x6f2c560, internal_6f2c560, public_6f2c560);
extern "C" NAKED register_t __cdecl internal_6f2c560()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0x14]
        sub esp, 0xC
        test al, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        je public_6f2c5c9
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [public_6f5e168]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        mov eax, offset public_6f5e794
        jne public_6f2c5af
        mov eax, offset public_6f5e790
        public_6f2c5af : nop
        push eax
/*FIXUP push offset public_6f5f68c @0x6f2c5b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f68c
        mov ecx, esi
        call public_6f2cc90
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c5bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c5c9 : nop
        test byte ptr ss : [esp+0x30], 1
        je public_6f2c60a
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c5d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [public_6f5e158]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c5e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        push edi
/*FIXUP push offset public_6f5f67c @0x6f2c5f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f67c
        mov ecx, esi
        call public_6f2cec0
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c5fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c60a : nop
        mov eax, dword ptr ss : [esp+0x30]
        test ah, 8
        je public_6f2c650
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c614*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [public_6f5e184]
        push edx
/*FIXUP push offset public_6f5ee7c @0x6f2c627*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        lea eax, ds:[edi+0x2C]
        push eax
/*FIXUP push offset public_6f5f6b0 @0x6f2c637*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6b0
        mov ecx, esi
        call public_6f2d080
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c644*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c650 : nop
        mov eax, dword ptr ss : [esp+0x30]
        test ah, 2
        je public_6f2c696
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c65a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [public_6f5e17c]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c66d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        lea edx, ds:[edi+0x3C]
        push edx
/*FIXUP push offset public_6f5f6b0 @0x6f2c67d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6b0
        mov ecx, esi
        call public_6f2d080
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c68a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c696 : nop
        mov eax, dword ptr ss : [esp+0x30]
        test ah, 4
        je public_6f2c6db
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c6a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [public_6f5e180]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c6b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        lea ecx, ds:[edi+0x4C]
        push ecx
/*FIXUP push offset public_6f5f6b0 @0x6f2c6c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6b0
        mov ecx, esi
        call public_6f2d080
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c6cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c6db : nop
        test byte ptr ss : [esp+0x30], 2
        je public_6f2c71f
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c6e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [public_6f5e15c]
        push edx
/*FIXUP push offset public_6f5ee7c @0x6f2c6f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        lea eax, ds:[edi+0xC]
        push eax
/*FIXUP push offset public_6f5f6b0 @0x6f2c706*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6b0
        mov ecx, esi
        call public_6f2cf10
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c713*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c71f : nop
        test byte ptr ss : [esp+0x30], 4
        je public_6f2c763
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c727*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [public_6f5e160]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c73a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [edi+0x74]
        push edx
/*FIXUP push offset public_6f5f674 @0x6f2c74a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c757*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c763 : nop
        test byte ptr ss : [esp+0x30], 8
        je public_6f2c7b2
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c76b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [public_6f5e164]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c77d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        fld dword ptr ds : [edi+0x8C]
        fmul dword ptr ds : [public_6f5a240]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_6f5f674 @0x6f2c79b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        call public_6f2ce40
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c7a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c7b2 : nop
        mov eax, dword ptr ss : [esp+0x30]
        test ah, 1
        je public_6f2c801
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c7bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [public_6f5e178]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c7cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [edi+0x28]
        push edx
        call public_6f2c8c0
        add esp, 4
        push eax
/*FIXUP push offset public_6f5f68c @0x6f2c7e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f68c
        mov ecx, esi
        call public_6f2cc90
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c7f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c801 : nop
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        jns public_6f2c851
        push ebx
/*FIXUP push offset public_6f5f6c8 @0x6f2c80a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [public_6f5e174]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c81c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        fld dword ptr ds : [edi+0x88]
        fmul dword ptr ds : [public_6f5a240]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_6f5f674 @0x6f2c83a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        call public_6f2ce40
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c845*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c851 : nop
        test byte ptr ss : [esp+0x30], 0x40
        je public_6f2c8b1
        fld dword ptr ds : [edi+0x7C]
        push ebx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+0x80]
/*FIXUP push offset public_6f5f6c8 @0x6f2c866*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+0x84]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x20]
        call public_6f2cc90
        mov ecx, dword ptr ds : [public_6f5e170]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c887*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6f5f694 @0x6f2c898*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f694
        mov ecx, esi
        call public_6f2cf10
        push ebp
/*FIXUP push offset public_6f5f6c8 @0x6f2c8a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        mov ecx, esi
        call public_6f2cc90
        public_6f2c8b1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f2c560)
    }
}

#undef public_6f2c5af
#undef public_6f2c5c9
#undef public_6f2c60a
#undef public_6f2c650
#undef public_6f2c696
#undef public_6f2c6db
#undef public_6f2c71f
#undef public_6f2c763
#undef public_6f2c7b2
#undef public_6f2c801
#undef public_6f2c851
#undef public_6f2c8b1
