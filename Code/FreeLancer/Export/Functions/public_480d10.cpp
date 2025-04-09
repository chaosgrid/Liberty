#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_43bbe0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e90);
CLANG_FORWARD_PROC_SYMBOL(public_5a1080);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_480d3a _public_480d3a
#define public_480da0 _public_480da0
#define public_48115a _public_48115a
#define public_481350 _public_481350
#define public_48137d _public_48137d
#define public_481439 _public_481439
#define public_481440 _public_481440
#define public_48146a _public_48146a
#define public_48147d _public_48147d
#define public_4814a6 _public_4814a6
#define public_4814ab _public_4814ab
#define public_481504 _public_481504
#define public_481548 _public_481548
#define public_4815a3 _public_4815a3
#define public_4815aa _public_4815aa
#define public_4815bc _public_4815bc
#define public_481aeb _public_481aeb
#define public_481d4e _public_481d4e
#define public_482011 _public_482011
#define public_482027 _public_482027

PROC_DECLARE(0x480d10, internal_480d10, public_480d10);
extern "C" NAKED register_t __cdecl internal_480d10()
{
    __asm
    {
        sub esp, 0x534
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x978]
        mov ebx, 1
        cmp eax, ebx
        push edi
        mov dword ptr ss : [esp+0x2C], 0x3CCCCCCD
        jne public_480d3a
        mov dword ptr ss : [esp+0x2C], 0
        public_480d3a : nop
        push ebp
        push 0
        push 0
        push ebx
        push 0x2143
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3EC9BA5E
        push 0
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_5ce91c @0x480d5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
/*FIXUP push offset public_5d1564 @0x480d60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1564
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], 0x3F870A3E
        mov dword ptr ss : [esp+0x78], 0xBD1FBE77
        mov dword ptr ss : [esp+0x7C], 0
        call public_5a0e30
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_5d1cec]
        mov ebp, dword ptr ds : [public_5c71ec]
        xor edi, edi
        mov dword ptr ss : [esp+0x28], edi
        fstp dword ptr ss : [esp+0x54]
        mov edi, edi
        public_480da0 : nop
        inc edi
        push edi
        lea ecx, ss:[esp+0x148]
/*FIXUP push offset public_5d1544 @0x480da9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1544
        push ecx
        call ebp
        fild dword ptr ss : [esp+0x34]
        add esp, 0xC
        push 0
        fmul dword ptr ds : [public_5d1540]
        push 0
        push 0
        push 0
        push 0
        fst dword ptr ss : [esp+0x3C]
        fsub qword ptr ds : [public_5d1538]
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x88]
        push eax
        fst dword ptr ss : [esp+0x5C]
/*FIXUP push offset public_5d1528 @0x480de3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        fstp dword ptr ss : [esp+0x94]
        lea ecx, ss:[esp+0x164]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x6C], 0x3D0F5C29
        mov dword ptr ss : [esp+0x70], 0x3D09374C
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x94], 0x3F672B02
        mov dword ptr ss : [esp+0x9C], 0
        call public_5a0d00
        push edi
        lea edx, ss:[esp+0x148]
/*FIXUP push offset public_5d151c @0x480e34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d151c
        push edx
        call ebp
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0xA8]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        mov dword ptr ss : [esp+0x84], eax
/*FIXUP push offset public_5d1528 @0x480e61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        lea eax, ss:[esp+0x164]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xB8], 0x3E0D4FDF
        mov dword ptr ss : [esp+0xBC], 0x3D0B4396
        mov dword ptr ss : [esp+0xC0], 0
        mov dword ptr ss : [esp+0x88], 0x3F8AC083
        mov dword ptr ss : [esp+0x90], 0
        call public_5a0d00
        push edi
        lea ecx, ss:[esp+0x148]
/*FIXUP push offset public_5d1510 @0x480eb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1510
        push ecx
        call ebp
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], edx
        fld dword ptr ss : [esp+0x38]
        add esp, 0xC
        fsub dword ptr ds : [public_5d150c]
        lea eax, ss:[esp+0x7C]
        push eax
        mov dword ptr ss : [esp+0x80], 0
        fstp dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x5C], 0x3D1374BC
        mov dword ptr ss : [esp+0x60], 0x3D27EF9E
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0xA4], 0x3F672B02
        mov dword ptr ss : [esp+0xAC], 0
        push 0
        push 0
        push 0x50
        push ebx
        push ebx
        push ebx
        push ebx
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x84]
        push ecx
        push 0
        lea edx, ss:[esp+0xD4]
        push edx
/*FIXUP push offset public_5d14d8 @0x480f4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14d8
        lea eax, ss:[esp+0x180]
        push eax
        mov ecx, esi
        call public_5a0db0
        push edi
        lea ecx, ss:[esp+0x148]
/*FIXUP push offset public_5d14cc @0x480f6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14cc
        push ecx
        call ebp
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d14c8]
        add esp, 0xC
        push 0
        push 0
        push 0
        fstp dword ptr ss : [esp+0x98]
        push 0
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3E8A3D71
        push 0
        lea edx, ss:[esp+0xA8]
        push edx
/*FIXUP push offset public_5d010c @0x480fa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0x16C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xB4], 0x3F8BC6A8
        mov dword ptr ss : [esp+0xBC], 0
        call public_5a0e30
        push edi
        lea ecx, ss:[esp+0x148]
/*FIXUP push offset public_5d14b4 @0x480fd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14b4
        push ecx
        call ebp
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d14b0]
        add esp, 0xC
        push 0
        push 0xBCF
        push 0
        fst dword ptr ss : [esp+0x4C]
        push 0
        fstp dword ptr ss : [esp+0xCC]
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3DCCCCCD
        push 0
        lea edx, ss:[esp+0xD8]
        push edx
/*FIXUP push offset public_5d010c @0x48101d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea eax, ss:[esp+0x16C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0xE4], 0x3F8147AE
        mov dword ptr ss : [esp+0xEC], 0
        call public_5a0e30
        push edi
        lea ecx, ss:[esp+0x148]
/*FIXUP push offset public_5d1418 @0x48104f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1418
        push ecx
        call ebp
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x60]
        add esp, 0xC
        mov dword ptr ss : [esp+0xAC], edx
        fsub dword ptr ds : [public_5d1414]
        push 0
        push 0xBD4
        push 2
        push 0xBD4
        fstp dword ptr ss : [esp+0xC0]
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3DF5C28F
        push 0
        lea eax, ss:[esp+0xCC]
        push eax
/*FIXUP push offset public_5d010c @0x48109d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea ecx, ss:[esp+0x16C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0xE0], 0
        call public_5a0e30
        cmp dword ptr ds : [esi+0x978], ebx
        jne public_48115a
        push edi
        lea edx, ss:[esp+0x148]
/*FIXUP push offset public_5d1404 @0x4810d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1404
        push edx
        call ebp
        add esp, 0xC
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0
        push 0
        push 0
        push ebx
        push 0
        push 0
        push ebx
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x48]
        push edx
        push 0
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ss:[esp+0x44]
        push eax
/*FIXUP push offset public_5d0be4 @0x481106*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0be4
        lea ecx, ss:[esp+0x180]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x5C], 0x3C449BA6
        mov dword ptr ss : [esp+0x60], 0x3C449BA6
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x50], 0x3F99BA5E
        mov dword ptr ss : [esp+0x58], 0x38D1B717
        call public_5a0db0
        public_48115a : nop
        cmp edi, 5
        mov dword ptr ss : [esp+0x28], edi
        jl public_480da0
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        push 0x3E828F5C
        push 0x3F8B851F
/*FIXUP push offset public_5d13d8 @0x481177*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13d8
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3DB851EC
        mov dword ptr ss : [esp+0x28], 0xBF0978D5
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 0x3E87AE14
        push 0x3F000000
/*FIXUP push offset public_5d1cdc @0x4811ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1cdc
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3DB851EC
        mov dword ptr ss : [esp+0x28], 0xBF0978D5
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ds : [esi+0x398], eax
        mov dl, byte ptr ds : [eax+0x6C]
        push 0x3E87AE14
        push 0x3E947AE1
        and dl, 0xFC
/*FIXUP push offset public_5d1ccc @0x4811eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1ccc
        mov ecx, esi
        mov byte ptr ds : [eax+0x6C], dl
        mov dword ptr ss : [esp+0x24], 0x3F30A3D7
        mov dword ptr ss : [esp+0x28], 0xBF0978D5
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ds : [esi+0x39C], eax
        mov cl, byte ptr ds : [eax+0x6C]
        push 0x3E87AE14
        and cl, 0xFC
        push 0x3E2E147B
        mov byte ptr ds : [eax+0x6C], cl
/*FIXUP push offset public_5d1cbc @0x481231*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1cbc
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3F7D70A4
        mov dword ptr ss : [esp+0x28], 0xBF0978D5
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        xor edi, edi
        push edi
        push 5
        push 5
        mov dword ptr ds : [esi+0x3A0], eax
        mov dl, byte ptr ds : [eax+0x6C]
        push edi
        push 0x3EAB851F
        and dl, 0xFC
        mov byte ptr ds : [eax+0x6C], dl
        push 0x3C9BA5E3
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5d13bc @0x48127b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13bc
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0x3F9E1134
        mov dword ptr ss : [esp+0x34], 0xBDCAC083
        mov dword ptr ss : [esp+0x38], 0
        call public_5a17e0
        push edi
        push edi
        push 0x409
        mov dword ptr ss : [esp+0x1C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x20], 0x3CA3D70A
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], 0x3FA020C5
        mov dword ptr ss : [esp+0x2C], 0xBD23D70A
        mov dword ptr ss : [esp+0x30], edi
        push edi
        push edi
        push ebx
        push edi
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        push edi
/*FIXUP push offset public_5ced30 @0x4812de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push edi
/*FIXUP push offset public_5d01d0 @0x4812e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d1570 @0x4812e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1570
        mov ecx, esi
        call public_5a0c90
        push edi
        push edi
        push ebx
        push edi
        push 0x3FE66666
        push 0x3D75C28F
        push 0x3EBD70A4
        push edi
        mov dword ptr ds : [esi+0x4D8], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x481314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d1cb0 @0x481319*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1cb0
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F251EB8
        mov dword ptr ss : [esp+0x40], 0xBD4CCCCD
        mov dword ptr ss : [esp+0x44], edi
        call public_5a0e30
        mov dword ptr ds : [esi+0x994], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], bl
        je public_481350
        mov byte ptr ds : [eax+0x30], bl
        mov dword ptr ds : [eax+0x28], edi
        public_481350 : nop
        mov eax, dword ptr ds : [esi+0x978]
        fld dword ptr ds : [public_5d1cac]
        mov ebp, 2
        cmp eax, ebp
        mov dword ptr ss : [esp+0x28], 0xBE4CCCCD
        jne public_48137d
        fstp st(0)
        mov dword ptr ss : [esp+0x28], 0xBE0624DD
        fld dword ptr ds : [public_5d1ca8]
        public_48137d : nop
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+0x38]
        push ecx
        push edi
        push edi
        push edi
        push ebx
        push edi
        push edi
        push ebx
        push edi
        push edi
        push edi
        lea edx, ss:[esp+0x48]
        push edx
        push edi
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_5d1c78 @0x48139b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c78
/*FIXUP push offset public_5d1c6c @0x4813a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c6c
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x74], 0x3F249BA6
        mov dword ptr ss : [esp+0x7C], 0
        call public_5a0db0
        mov ecx, dword ptr ds : [esi+0x978]
        mov dword ptr ds : [esi+0x998], eax
        xor eax, eax
        dec ecx
        mov word ptr ss : [esp+0xC4], di
        je public_48147d
        dec ecx
        je public_481440
        dec ecx
        jne public_4814ab
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0xC8]
        push ecx
        push 0x48C
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_481439
        mov word ptr ss : [esp+0xC4], di
        public_481439 : nop
        mov eax, 0x47D
        jmp public_4814ab
        public_481440 : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0xC8]
        push eax
        push 0x486
        push ecx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_48146a
        mov word ptr ss : [esp+0xC4], di
        public_48146a : nop
        call public_4c3e10
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFFF0
        add eax, 0x499
        jmp public_4814ab
        public_48147d : nop
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea edx, ss:[esp+0xC8]
        push edx
        push 0x48B
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4814a6
        mov word ptr ss : [esp+0xC4], di
        public_4814a6 : nop
        mov eax, 0x478
        public_4814ab : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push edi
        push edi
        push edi
        push eax
        push 0x3FB33333
        push 0x3D75C28F
        push 0x3EB33333
        push edi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0608 @0x4814c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        mov dword ptr ss : [esp+0x3C], ecx
/*FIXUP push offset public_5d1c60 @0x4814d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c60
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F283127
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x99C], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], bl
        je public_481504
        mov byte ptr ds : [eax+0x30], bl
        mov dword ptr ds : [eax+0x28], edi
        public_481504 : nop
        mov ecx, offset public_668708
        call public_43bbe0
        cmp eax, edi
        je public_4815bc
        cmp dword ptr ds : [esi+0x978], ebp
        je public_4815a3
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x248]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_481548
        mov word ptr ss : [esp+0x244], di
        public_481548 : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x3F
        lea eax, ss:[esp+0x2C8]
        push eax
        push 0x477
        push ecx
        call public_4347e0
        lea edx, ss:[esp+0xD4]
        push edx
        lea eax, ss:[esp+0x258]
        push eax
        lea ecx, ss:[esp+0x2DC]
        push ecx
        lea edx, ss:[esp+0x360]
        push edx
        call dword ptr ds : [public_5c70ec]
        add esp, 0x20
        lea eax, ss:[esp+0x344]
        push eax
        call dword ptr ds : [public_616420]
        lea eax, ss:[esp+0x344]
        jmp public_4815aa
        public_4815a3 : nop
        lea eax, ss:[esp+0xC4]
        public_4815aa : nop
        mov ecx, dword ptr ds : [esi+0x994]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_4815bc : nop
        push edi
        push edi
        push ebx
        push 0xBC8
        push 0x40000000
        push 0x3D75C28F
        push 0x3E27EF9E
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0410 @0x4815d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d1c58 @0x4815de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c58
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F2ED917
        mov dword ptr ss : [esp+0x40], 0xBDA5E354
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        push edi
        push edi
        push ebx
        push edi
        push edi
        push ebx
        push edi
        push edi
        push edi
        mov dword ptr ds : [esi+0x9A0], eax
        lea eax, ss:[esp+0x48]
        push eax
        push edi
        lea ecx, ss:[esp+0x68]
        push ecx
/*FIXUP push offset public_5d1c28 @0x481622*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c28
/*FIXUP push offset public_5d1c1c @0x481627*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c1c
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x74], 0x3F1020C5
        mov dword ptr ss : [esp+0x78], 0xBD978D50
        mov dword ptr ss : [esp+0x7C], 0
        call public_5a0db0
        push edi
        push edi
        push ebx
        push 0xBC9
        push 0x40000000
        push 0x3D75C28F
        push 0x3E27EF9E
        push edi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0410 @0x481698*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d1c10 @0x48169d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1c10
        mov ecx, esi
        mov dword ptr ds : [esi+0x9A4], eax
        mov dword ptr ss : [esp+0x3C], 0x3F19DB23
        mov dword ptr ss : [esp+0x40], 0xBDA5E354
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x9A8], eax
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        push edi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x40], 0x3F39DB23
        mov dword ptr ss : [esp+0x44], 0xBD958106
        mov dword ptr ss : [esp+0x48], 0
        push edi
        push ebx
        push edi
        push edi
        push ebx
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x48]
        push ecx
        push edi
        lea edx, ss:[esp+0x68]
        push edx
/*FIXUP push offset public_5d1be0 @0x48172f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1be0
/*FIXUP push offset public_5d1bd4 @0x481734*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1bd4
        mov ecx, esi
        call public_5a0db0
        push edi
        push edi
        push 0xBC8
        push edi
        push edi
        mov dword ptr ds : [esi+0x9AC], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_5d1528 @0x481759*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
/*FIXUP push offset public_5d1bc0 @0x48175e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1bc0
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x3E09374C
        mov dword ptr ss : [esp+0x38], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0x3F251EB8
        mov dword ptr ss : [esp+0x44], 0xBD958106
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0d00
        push edi
        push edi
        push edi
        push edi
        lea edx, ss:[esp+0x20]
        mov dword ptr ds : [esi+0x9B0], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d1bac @0x4817ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1bac
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0x3D0F5C29
        mov dword ptr ss : [esp+0x30], 0x3D09374C
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0x3F008312
        mov dword ptr ss : [esp+0x3C], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x40], 0
        call public_5a0d60
        push edi
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d1b98 @0x4817f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b98
        mov ecx, esi
        mov dword ptr ds : [esi+0x364], eax
        mov dword ptr ss : [esp+0x2C], 0x3E0D4FDF
        mov dword ptr ss : [esp+0x30], 0x3D0B4396
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0x3F2ED917
        mov dword ptr ss : [esp+0x3C], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x40], 0
        call public_5a0d60
        mov dword ptr ds : [esi+0x368], eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0x3D1374BC
        mov dword ptr ss : [esp+0x20], 0x3D27EF9E
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x34], 0x3F008312
        mov dword ptr ss : [esp+0x38], 0xBE2F1AA0
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        push edi
        push 0x50
        push ebx
        push ebx
        push ebx
        push ebx
        push edi
        push edi
        push edi
        lea ecx, ss:[esp+0x48]
        push ecx
        push edi
        lea edx, ss:[esp+0x68]
        push edx
/*FIXUP push offset public_5d14d8 @0x48189b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14d8
/*FIXUP push offset public_5d1b84 @0x4818a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b84
        mov ecx, esi
        mov dword ptr ss : [esp+0x7C], 0
        call public_5a0db0
        push edi
        push edi
        push edi
        push edi
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3E8A3D71
        push edi
        mov dword ptr ds : [esi+0x36C], eax
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d010c @0x4818d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d1b70 @0x4818d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b70
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F30E560
        mov dword ptr ss : [esp+0x40], 0xBE21CAC0
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push 0xBCF
        push edi
        push edi
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3DCCCCCD
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d010c @0x481919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d1b58 @0x48191e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b58
        mov ecx, esi
        mov dword ptr ds : [esi+0x370], eax
        mov dword ptr ss : [esp+0x3C], 0x3F1BE76C
        mov dword ptr ss : [esp+0x40], 0xBE408312
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x9D0], eax
        mov eax, dword ptr ds : [public_679bac]
        push eax
        push eax
        push 0x43C
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        lea eax, ss:[esp+0x34]
        push eax
/*FIXUP push offset public_5c865c @0x481966*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
/*FIXUP push offset public_5d1b44 @0x48196b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b44
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 0x3CF5C28F
        mov dword ptr ss : [esp+0x38], 0x3B449BA6
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0x3F008312
        mov dword ptr ss : [esp+0x44], 0xBE4AC084
        mov dword ptr ss : [esp+0x48], 0x3A83126F
        call public_5a1080
        mov dword ptr ds : [esi+0x374], eax
        mov edx, dword ptr ds : [eax]
        push edi
        push 0x10000
        push 0x19
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_5d1b40]
        push edi
        push 0xBD4
        push ebp
        push 0xBD4
        fstp dword ptr ss : [esp+0x20]
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3DF5C28F
        push edi
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d010c @0x4819ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
/*FIXUP push offset public_5d1b2c @0x4819f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b2c
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0xBE449BA6
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        push edi
        push edi
        push ebx
        push edi
        push edi
        push ebx
        push edi
        push edi
        push edi
        lea edx, ss:[esp+0x48]
        push edx
        push edi
        mov dword ptr ds : [esi+0x378], eax
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_5d0be4 @0x481a2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0be4
/*FIXUP push offset public_5d1b14 @0x481a34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1b14
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0x3C449BA6
        mov dword ptr ss : [esp+0x60], 0x3C449BA6
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x74], 0x3F4CCCCD
        mov dword ptr ss : [esp+0x78], 0xBE408312
        mov dword ptr ss : [esp+0x7C], 0x3A83126F
        call public_5a0db0
        fld dword ptr ds : [public_5d1b10]
        mov dword ptr ds : [esi+0x37C], eax
        mov dword ptr ds : [eax+0x74], 0x64
        cmp dword ptr ds : [esi+0x978], ebp
        mov dword ptr ss : [esp+0x2C], 0xBEEC0831
        mov dword ptr ss : [esp+0x28], 0xBEB7CED9
        mov dword ptr ss : [esp+0x40], 0xBE8F5C29
        mov dword ptr ss : [esp+0x30], 0xBED1EB85
        jne public_481aeb
        fstp st(0)
        mov dword ptr ss : [esp+0x2C], 0xBED91687
        fld dword ptr ds : [public_5d1b0c]
        mov dword ptr ss : [esp+0x28], 0xBEAC8B44
        mov dword ptr ss : [esp+0x40], 0xBE86A7F0
        mov dword ptr ss : [esp+0x30], 0xBEC39581
        public_481aeb : nop
        push edi
        fstp dword ptr ss : [esp+0x18]
        push edi
        push ebx
        push 0x479
        push 0x3FE66666
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x481b0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1afc @0x481b11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1afc
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F25E354
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov edx, dword ptr ss : [esp+0x40]
        push ebx
        push ebx
        push 5
        push edi
        push 0x3C9BA5E3
        mov dword ptr ds : [esi+0x9B4], eax
        push 0x3EA0C49C
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_5d1aec @0x481b4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1aec
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0x3EFCED91
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], 0
        call public_5a17e0
        mov ecx, dword ptr ss : [esp+0x28]
        push edi
        push edi
        push edi
        push 0x47A
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0608 @0x481b8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        mov dword ptr ds : [esi+0x9B8], eax
        mov dword ptr ss : [esp+0x3C], ecx
/*FIXUP push offset public_5d1adc @0x481b9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1adc
        mov ecx, esi
        mov byte ptr ds : [eax+0x3B4], bl
        mov dword ptr ds : [eax+0x3CC], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F34BC6A
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push edi
        push edi
        push 0x47B
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov dword ptr ds : [esi+0x9BC], eax
        mov eax, dword ptr ss : [esp+0x54]
/*FIXUP push offset public_5d0608 @0x481bee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1acc @0x481bf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1acc
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F34BC6A
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov edx, dword ptr ss : [esp+0x2C]
        push edi
        push edi
        mov dword ptr ds : [esi+0x9C0], eax
        mov dword ptr ss : [esp+0x18], 0x3F34BC6A
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], 0
        push edi
        push 0x47C
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d0608 @0x481c4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1abc @0x481c53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1abc
        mov ecx, esi
        call public_5a0e30
        mov ecx, dword ptr ss : [esp+0x30]
        push edi
        push edi
        push edi
        push edi
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0608 @0x481c7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        mov dword ptr ss : [esp+0x3C], ecx
/*FIXUP push offset public_5d1aa8 @0x481c85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1aa8
        mov ecx, esi
        mov dword ptr ds : [esi+0x9C4], eax
        mov dword ptr ss : [esp+0x3C], 0x3F5D2F1B
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push edi
        push edi
        push edi
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov dword ptr ds : [esi+0x380], eax
        mov eax, dword ptr ss : [esp+0x50]
/*FIXUP push offset public_5d0608 @0x481cca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1a94 @0x481ccf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a94
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F5D2F1B
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        push edi
        push edi
        push edi
        push edi
        push 0x3FB33333
        push 0x3D75C28F
        push 0x3EB43958
        push edi
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0608 @0x481d08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1a88 @0x481d0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a88
        mov ecx, esi
        mov dword ptr ds : [esi+0x9C8], eax
        mov dword ptr ss : [esp+0x3C], 0x3F251EB8
        mov dword ptr ss : [esp+0x40], 0xBD9374BC
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x9D4], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], bl
        je public_481d4e
        mov byte ptr ds : [eax+0x30], bl
        mov dword ptr ds : [eax+0x28], edi
        public_481d4e : nop
        mov ecx, dword ptr ds : [esi+0x9D4]
        mov al, 0xFF
        push ebx
        lea edx, ss:[esp+0x48]
        push edx
        mov byte ptr ss : [esp+0x4C], al
        mov byte ptr ss : [esp+0x4D], al
        mov byte ptr ss : [esp+0x4E], al
        mov byte ptr ss : [esp+0x4F], al
        mov eax, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x2C]
        push edi
        push edi
        push edi
        push 0x481
        push 0x3FE66666
        push 0x3D75C28F
        push 0x3D4CCCCD
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d0608 @0x481d97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1a7c @0x481d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a7c
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3F2D4FDF
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov edx, dword ptr ss : [esp+0x28]
        push edi
        push edi
        push edi
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EC49BA6
        push edi
        mov dword ptr ds : [esi+0x9D8], eax
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0608 @0x481dde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d1a6c @0x481de3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a6c
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0x3F5D2F1B
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x40], 0
        call public_5a0e90
        push 8
        push ebx
        mov dword ptr ds : [esi+0x9CC], eax
        mov edx, dword ptr ds : [eax]
        push 0x43
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        push 0x44
        call dword ptr ds : [eax+0xA8]
        cmp dword ptr ds : [esi+0x978], ebp
        mov dword ptr ds : [esi+0x9E0], edi
        mov dword ptr ds : [esi+0x9E4], edi
        mov dword ptr ds : [esi+0x9E8], edi
        mov dword ptr ds : [esi+0x9EC], edi
        pop ebp
        jne public_482027
        push edi
        push edi
        push 0x32C
        push edi
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d1528 @0x481e62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
/*FIXUP push offset public_5d1a5c @0x481e67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a5c
        mov ecx, esi
        mov byte ptr ds : [esi+0x98C], bl
        mov dword ptr ss : [esp+0x30], 0x3E09374C
        mov dword ptr ss : [esp+0x34], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0x3F251EB8
        mov dword ptr ss : [esp+0x40], 0xBEF22D0E
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0d00
        push edi
        push edi
        push ebx
        push 0x48E
        push 0x3FE66666
        push 0x3D75C28F
        push 0x3E87AE14
        push edi
        mov dword ptr ds : [esi+0x9E0], eax
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d0410 @0x481ecc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d1a4c @0x481ed1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a4c
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0x3F249BA6
        mov dword ptr ss : [esp+0x3C], 0xBEF69446
        mov dword ptr ss : [esp+0x40], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x9E4], eax
        call public_4c3e10
        test eax, eax
        je public_482027
        push edi
        push edi
        push 0x39F
        push edi
        push edi
        push ebx
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        lea edx, ss:[esp+0x3C]
        push edx
        push edi
/*FIXUP push offset public_5ced30 @0x481f1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push edi
/*FIXUP push offset public_5d1a20 @0x481f25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a20
/*FIXUP push offset public_5d1a0c @0x481f2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1a0c
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], 0x3CA3D70A
        mov dword ptr ss : [esp+0x4C], 0x3CA3D70A
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x3F9AE148
        mov dword ptr ss : [esp+0x58], 0xBD23D70A
        mov dword ptr ss : [esp+0x5C], 0
        call public_5a0c90
        push edi
        push edi
        push ebx
        push 0x3C9
        push 0x3FB33333
        push 0x3CF5C28F
        push 0x3ECE5604
        push edi
        mov dword ptr ds : [esi+0x9EC], eax
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_5d01a8 @0x481f89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d19f8 @0x481f8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d19f8
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0x3F86872B
        mov dword ptr ss : [esp+0x3C], 0xBD9374BC
        mov dword ptr ss : [esp+0x40], 0
        call public_5a0e30
        push ebx
        push edi
        push edi
        push edi
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3EB851EC
        push edi
        lea ecx, ss:[esp+0x2C]
        push ecx
/*FIXUP push offset public_5d01a8 @0x481fcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d19e8 @0x481fd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d19e8
        mov ecx, esi
        mov dword ptr ds : [esi+0x9F0], eax
        mov dword ptr ss : [esp+0x38], 0x3EF2B021
        mov dword ptr ss : [esp+0x3C], 0xBEDCAC08
        mov dword ptr ss : [esp+0x40], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x9E8], eax
        mov eax, dword ptr ds : [eax+0x334]
        cmp byte ptr ds : [eax+0x30], bl
        je public_482011
        mov byte ptr ds : [eax+0x30], bl
        mov dword ptr ds : [eax+0x28], edi
        public_482011 : nop
        mov ecx, dword ptr ds : [esi+0x9E8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        public_482027 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x534
        ret 
        UNREACHABLE_TRAP(0x480d10)
    }
}

#undef public_480d3a
#undef public_480da0
#undef public_48115a
#undef public_481350
#undef public_48137d
#undef public_481439
#undef public_481440
#undef public_48146a
#undef public_48147d
#undef public_4814a6
#undef public_4814ab
#undef public_481504
#undef public_481548
#undef public_4815a3
#undef public_4815aa
#undef public_4815bc
#undef public_481aeb
#undef public_481d4e
#undef public_482011
#undef public_482027
