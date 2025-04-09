#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c850);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_48c770);
CLANG_FORWARD_PROC_SYMBOL(public_48c8a0);
CLANG_FORWARD_PROC_SYMBOL(public_48cce0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_576360);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_48b900 _public_48b900
#define public_48b922 _public_48b922
#define public_48b93b _public_48b93b
#define public_48b94c _public_48b94c
#define public_48b953 _public_48b953
#define public_48b95a _public_48b95a
#define public_48b961 _public_48b961
#define public_48b966 _public_48b966
#define public_48b9d0 _public_48b9d0
#define public_48bd21 _public_48bd21
#define public_48c40e _public_48c40e
#define public_48c42b _public_48c42b

PROC_DECLARE(0x48b6e0, internal_48b6e0, public_48b6e0);
extern "C" NAKED register_t __cdecl internal_48b6e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x198
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], 0x3EDC28F6
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3E99999A
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3D072B02
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0xC0]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        push edi
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        lea edi, ds:[esi+0x330]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0xBDCCCCCD
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x18], 0xBFBFBE77
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        call public_422b80
        xor ebp, ebp
        lea eax, ss:[esp+0x10]
        push eax
        push ebp
        push ebp
        push ebp
        push 1
        push ebp
        push 1
        push 1
        push ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x58]
        push ecx
        push ebp
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5cb6d8 @0x48b7e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6d8
/*FIXUP push offset public_5d2cc4 @0x48b7ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2cc4
        mov ecx, esi
        call public_5a0db0
        mov dword ptr ds : [esi+0x454], eax
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d1254]
        push eax
        mov dword ptr ss : [esp+0x30], 0x3CCCCCCD
        mov dword ptr ss : [esp+0x34], 0x3CCCCCCD
        mov dword ptr ss : [esp+0x38], ebp
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_5d2cc0]
        fstp dword ptr ss : [esp]
        call public_422b80
        push ebp
        push ebp
        push 0x72E
        push ebp
        push ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x48]
        push ecx
        push ebp
        lea edx, ss:[esp+0x40]
        push edx
        push ebp
/*FIXUP push offset public_5ced30 @0x48b851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebp
/*FIXUP push offset public_5d01d0 @0x48b857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d2ca4 @0x48b85c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2ca4
        mov ecx, esi
        call public_5a0c90
        mov dword ptr ds : [esi+0x3A8], eax
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d2ca0]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d2c9c]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 1
        push ebp
        push 1
        push 0x72B
        push 0x40000000
        push 0x3CF5C28F
        push 0x3F99999A
        push ebp
        lea ecx, ss:[esp+0x3C]
        push ecx
/*FIXUP push offset public_5ce91c @0x48b8b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d2c88 @0x48b8ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2c88
        mov ecx, esi
        call public_5a0e30
        mov ecx, offset public_668708
        mov dword ptr ds : [esi+0x3AC], eax
        call public_43a460
        mov eax, dword ptr ds : [eax+0x34]
        push eax
        mov ecx, offset public_668708
        call public_43a8d0
        mov ebx, eax
        push 1
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x40], ebp
        call public_43ce90
        test al, al
        je public_48b922
        public_48b900 : nop
        inc dword ptr ss : [esp+0x28]
        push 1
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, ebx
        call public_43ce90
        test al, al
        jne public_48b900
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_48b9d0
        public_48b922 : nop
        mov byte ptr ds : [esi+0x458], 1
        xor edi, edi
        call public_4c3e10
        test eax, eax
        jne public_48b93b
        mov edi, 0x3B0
        jmp public_48b966
        public_48b93b : nop
        mov eax, dword ptr ds : [public_672038]
        cmp eax, 4
        ja public_48b966
/*FIXUP jmp dword ptr ds : [eax*4+public_48c444] @0x48b945*/
  JMPTB cmp eax, 0
  JMPTB je public_48b961
  JMPTB cmp eax, 1
  JMPTB je public_48b94c
  JMPTB cmp eax, 2
  JMPTB je public_48b953
  JMPTB cmp eax, 3
  JMPTB je public_48b95a
  JMPTB cmp eax, 4
  JMPTB je public_48b961
  JMPTB int 3
        public_48b94c : nop
        mov edi, 0x384
        jmp public_48b966
        public_48b953 : nop
        mov edi, 0x385
        jmp public_48b966
        public_48b95a : nop
        mov edi, 0x386
        jmp public_48b966
        public_48b961 : nop
        mov edi, 0x3D0
        public_48b966 : nop
        fld dword ptr ds : [esi+0x338]
        push 1
        push 0
        push 1
        push edi
        push 0x40000000
        push 0x3CF5C28F
        push 0x3F870A3D
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
/*FIXUP push offset public_5d01a8 @0x48b989*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        fstp dword ptr ss : [esp+0x5C]
/*FIXUP push offset public_5d2c70 @0x48b992*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2c70
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], 0xBF0A3D71
        mov dword ptr ss : [esp+0x5C], 0xBC23D70A
        call public_5a0e30
        push 0
        lea ecx, ds:[esi+0x32C]
        call public_576360
        mov edx, dword ptr ss : [esp+0x1B0]
        mov eax, dword ptr ss : [esp+0x1AC]
        push edx
        push eax
        jmp public_48c42b
        public_48b9d0 : nop
        mov ecx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [public_5d2c6c]
        push ecx
        sub esp, 8
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x38], 0
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x3C], 0
        fsub dword ptr ds : [public_5d2c68]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5d2c30 @0x48ba4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2c30
/*FIXUP push offset public_5d2c14 @0x48ba52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2c14
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fsub dword ptr ds : [public_5d2c10]
        push edx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0
        fsub dword ptr ds : [public_5d2c0c]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x1C], 0
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d2bd8 @0x48badb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2bd8
/*FIXUP push offset public_5d2bc0 @0x48bae0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2bc0
        mov ecx, esi
        call public_5a0db0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [public_5d2bbc]
        push eax
        sub esp, 8
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x24], 0
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_5d129c]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea eax, ss:[esp+0x50]
        push eax
/*FIXUP push offset public_5d2b88 @0x48bb69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b88
/*FIXUP push offset public_5d2b70 @0x48bb6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b70
        mov ecx, esi
        call public_5a0db0
/*FIXUP push offset public_5d2b3c @0x48bb7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b3c
        call public_41c850
        mov dword ptr ds : [esi+0x348], eax
        fld dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d2bbc]
        add esp, 4
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0
        fadd dword ptr ds : [public_5d129c]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x1C], 0
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 1
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_5d2b3c @0x48bc0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b3c
/*FIXUP push offset public_5d2b20 @0x48bc0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b20
        mov ecx, esi
        call public_5a0db0
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d2b1c]
        push edx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ds : [public_5d2b18]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 1
        push 0
        push 1
        push 0x3E9
        push 0x40000000
        push 0x3CF5C28F
        push 0x3E8DD2F2
        push 0
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_5d0410 @0x48bc64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d2b00 @0x48bc69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2b00
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d2afc]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0x3E083127
        fadd dword ptr ds : [public_5d2af8]
        mov dword ptr ss : [esp+0x3C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x40], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0x331
        push 0
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_5d2ae0 @0x48bccc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2ae0
/*FIXUP push offset public_5d2ac4 @0x48bcd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2ac4
        mov ecx, esi
        call public_5a0d00
        mov dword ptr ds : [esi+0x3A4], eax
        fld dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        fadd dword ptr ds : [public_5d2ac0]
        push ecx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x60]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d2abc]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ebp, dword ptr ds : [public_5c71ec]
        xor ebx, ebx
        lea edx, ds:[esi+0x3C4]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x28], edx
        public_48bd21 : nop
        fild dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        push ecx
        fmul dword ptr ds : [public_5d2ab8]
        mov ecx, dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x60]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x1C]
        fstp st(0)
        call public_422b80
        push ebx
        lea edx, ss:[esp+0xAC]
/*FIXUP push offset public_5d2a9c @0x48bd52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a9c
        push edx
        call ebp
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d2a98]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push ecx
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        call public_422b80
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x68]
        push eax
        push 0
        lea ecx, ss:[esp+0x94]
        push ecx
/*FIXUP push offset public_5d2a64 @0x48bdd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a64
        lea edx, ss:[esp+0xE4]
        push edx
        mov ecx, esi
        call public_5a0db0
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        lea edx, ss:[esp+0xAC]
/*FIXUP push offset public_5d2a48 @0x48bdf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a48
        push edx
        mov dword ptr ds : [ecx-0x14], eax
        call ebp
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d2a98]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push ecx
        lea ecx, ss:[esp+0xA8]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x54], 0x3CF5C28F
        mov dword ptr ss : [esp+0x58], 0x3CF5C28F
        mov dword ptr ss : [esp+0x5C], 0
        call public_422b80
        push 0
        push 0
        push 0x72C
        push 0
        push 0
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0xB4]
        push eax
/*FIXUP push offset public_5ced30 @0x48be5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov ecx, esi
        call public_5a0d00
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        mov dword ptr ds : [edx], eax
        lea eax, ss:[esp+0xAC]
/*FIXUP push offset public_5d2a2c @0x48be7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a2c
        push eax
        call ebp
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5d2a28]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push ecx
        push edx
        push ecx
        lea ecx, ss:[esp+0x90]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x28], 0x3E7AE148
        mov dword ptr ss : [esp+0x2C], 0x3CFDF3B6
        mov dword ptr ss : [esp+0x30], 0
        call public_422b80
        push 0
        push 0
        push 0x72C
        push 0
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        push 0
        lea edx, ss:[esp+0xC8]
        push edx
        mov ecx, esi
        call public_5a0d00
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        lea edx, ss:[esp+0xAC]
/*FIXUP push offset public_5d2a0c @0x48befa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a0c
        push edx
        mov dword ptr ds : [ecx+0x14], eax
        call ebp
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5d2a08]
        add esp, 0xC
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x78]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5d2a04]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3EFAE148
        push 0
        lea ecx, ss:[esp+0x8C]
        push ecx
/*FIXUP push offset public_5d29f8 @0x48bf55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea edx, ss:[esp+0xD0]
        push edx
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        lea edx, ss:[esp+0xAC]
/*FIXUP push offset public_5d29dc @0x48bf75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29dc
        push edx
        mov dword ptr ds : [ecx+0x28], eax
        call ebp
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d29d8]
        add esp, 0xC
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x84]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5d2a04]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3EFAE148
        push 0
        lea ecx, ss:[esp+0x98]
        push ecx
/*FIXUP push offset public_5d29f8 @0x48bfd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea edx, ss:[esp+0xD0]
        push edx
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        lea edx, ss:[esp+0xAC]
/*FIXUP push offset public_5d29b8 @0x48bff3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29b8
        push edx
        mov dword ptr ds : [ecx+0x3C], eax
        call ebp
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5d29b4]
        add esp, 0xC
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x9C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5d1554]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 2
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        push 0x3E8A3D71
        push 0
        lea ecx, ss:[esp+0xB0]
        push ecx
/*FIXUP push offset public_5d29f8 @0x48c051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea edx, ss:[esp+0xD0]
        push edx
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x28]
        inc ebx
        mov dword ptr ds : [ecx+0x50], eax
        add ecx, 4
        cmp ebx, 5
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x28], ecx
        jl public_48bd21
        fld dword ptr ds : [edi]
        push 0
        fadd dword ptr ds : [public_5d29b0]
        push 5
        push 5
        push 0
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+4]
        push 0x3EA24DD3
        fadd dword ptr ds : [public_5d29ac]
        push 0x3C9BA5E3
        lea eax, ss:[esp+0x34]
        push eax
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi+8]
/*FIXUP push offset public_5d2990 @0x48c0b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2990
        fstp dword ptr ss : [esp+0x44]
        mov ecx, esi
        call public_5a17e0
        lea ecx, ss:[esp+0xA8]
/*FIXUP push offset public_5d2974 @0x48c0cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2974
        push ecx
        mov dword ptr ds : [esi+0x428], eax
        call ebp
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d2970]
        add esp, 8
        push 1
        push 0
        push 0
        push 0x72F
        push 0x3FE66666
        push 0x3CF5C28F
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+4]
        push 0x3F333333
        fadd dword ptr ds : [public_5d296c]
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+8]
/*FIXUP push offset public_5d0608 @0x48c119*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        lea eax, ss:[esp+0xD0]
        fstp dword ptr ss : [esp+0x4C]
        push eax
        mov ecx, esi
        call public_5a0e30
        lea ecx, ss:[esp+0xA8]
/*FIXUP push offset public_5d2950 @0x48c138*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2950
        push ecx
        mov dword ptr ds : [esi+0x440], eax
        call ebp
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d1070]
        add esp, 8
        push 1
        push 0
        push 0
        push 0
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+4]
        push 0x3FC00000
        fadd dword ptr ds : [public_5d294c]
        push 0x3CF5C28F
        push 0x3F333333
        push 0
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x44]
        push edx
/*FIXUP push offset public_5d29f8 @0x48c187*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea eax, ss:[esp+0xD0]
        push eax
        mov ecx, esi
        call public_5a0e30
        lea ecx, ss:[esp+0xA8]
/*FIXUP push offset public_5d2930 @0x48c1a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2930
        push ecx
        mov dword ptr ds : [esi+0x42C], eax
        call ebp
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d1070]
        add esp, 8
        push 1
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+4]
        push 0x3F333333
        fsub dword ptr ds : [public_5d2c0c]
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+8]
/*FIXUP push offset public_5d29f8 @0x48c1ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea eax, ss:[esp+0xD0]
        fstp dword ptr ss : [esp+0x4C]
        push eax
        mov ecx, esi
        call public_5a0e30
        lea ecx, ss:[esp+0xA8]
/*FIXUP push offset public_5d2914 @0x48c20c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2914
        push ecx
        mov dword ptr ds : [esi+0x430], eax
        call ebp
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_5d2910]
        add esp, 8
        push 1
        push 0
        push 2
        push 0
        push 0x3FC00000
        push 0x3CF5C28F
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+4]
        push 0x3E4CCCCD
        fadd dword ptr ds : [public_5d29d8]
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [edi+8]
/*FIXUP push offset public_5d29f8 @0x48c257*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d29f8
        lea eax, ss:[esp+0xD0]
        fstp dword ptr ss : [esp+0x4C]
        push eax
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x434], eax
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [public_5d290c]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [public_5d2908]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x24]
        push 1
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0x3E8A3D71
        push 0x3F8A3D71
/*FIXUP push offset public_5d28e8 @0x48c2a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d28e8
        mov ecx, esi
        call public_5a10e0
        fld dword ptr ds : [esi+0x338]
        lea edx, ss:[esp+0x1C]
        push edx
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi+0x438], eax
        lea eax, ss:[esp+0x74]
        push eax
        push 0
        lea ecx, ss:[esp+0x70]
        push ecx
/*FIXUP push offset public_5d2a64 @0x48c2e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2a64
        fstp dword ptr ss : [esp+0x80]
/*FIXUP push offset public_5d28d4 @0x48c2ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d28d4
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x88], 0x3CF5C28F
        mov dword ptr ss : [esp+0x8C], 0x3CF5C28F
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x7C], 0xBF08F5C3
        mov dword ptr ss : [esp+0x80], 0xBDE353F8
        call public_5a0db0
        push 0x1C
        mov dword ptr ds : [esi+0x450], eax
        mov dword ptr ds : [esi+0x70], 0x64
        mov dword ptr ds : [esi+0x3A0], 7
        call public_5b7e84
        mov dword ptr ds : [esi+0x39C], eax
        mov dword ptr ds : [eax], offset public_5d2a64
        mov edx, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [edx+4], offset public_5d289c
        mov eax, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [eax+8], offset public_5d285c
        mov ecx, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [ecx+0xC], offset public_5d2820
        mov edx, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [edx+0x10], offset public_5d27e0
        mov eax, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [eax+0x14], offset public_5d27a8
        mov ecx, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [ecx+0x18], offset public_5d2770
        add esp, 4
        mov ecx, esi
        call public_48c770
        mov ecx, esi
        call public_48c8a0
        mov ecx, esi
        call public_48cce0
        mov eax, dword ptr ds : [esi+0x378]
        cmp eax, 0xFFFFFFFF
        je public_48c40e
        mov ecx, dword ptr ds : [esi+0x394]
        lea edi, ds:[eax+eax*2]
        shl edi, 5
        add edi, ecx
        lea edx, ds:[edi+0x14]
        push edx
        call public_459950
        lea eax, ds:[edi+0x2C]
        push eax
        call public_459950
        add edi, 0x44
        push edi
        call public_459950
        add esp, 0xC
        public_48c40e : nop
        push 0
        lea ecx, ds:[esi+0x32C]
        call public_576360
        mov ecx, dword ptr ss : [esp+0x1B0]
        mov edx, dword ptr ss : [esp+0x1AC]
        push ecx
        push edx
        public_48c42b : nop
        mov ecx, esi
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x198
        ret 8
        UNREACHABLE_TRAP(0x48b6e0)
        ASM_EXPORT_ENTRY_SINGLE(0x48b961, public_48b961)
    }
}

#undef public_48b900
#undef public_48b922
#undef public_48b93b
#undef public_48b94c
#undef public_48b953
#undef public_48b95a
#undef public_48b961
#undef public_48b966
#undef public_48b9d0
#undef public_48bd21
#undef public_48c40e
#undef public_48c42b

#pragma init_seg(compiler)
extern "C" void const* const public_48b961 = __AsmFindLabelExport(&internal_48b6e0, 0x48b961);
