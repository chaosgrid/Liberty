#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0d00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e30);
CLANG_FORWARD_PROC_SYMBOL(public_5a0e90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1020);
CLANG_FORWARD_PROC_SYMBOL(public_5a1080);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5a17e0);

#define public_4781f9 _public_4781f9
#define public_47820c _public_47820c
#define public_47831b _public_47831b
#define public_478338 _public_478338
#define public_47837e _public_47837e
#define public_4783c6 _public_4783c6
#define public_478460 _public_478460
#define public_478a07 _public_478a07
#define public_478ac8 _public_478ac8
#define public_478cdf _public_478cdf
#define public_478d62 _public_478d62
#define public_478e40 _public_478e40
#define public_47907a _public_47907a
#define public_4791a3 _public_4791a3
#define public_47921d _public_47921d
#define public_4795da _public_4795da

PROC_DECLARE(0x478100, internal_478100, public_478100);
extern "C" NAKED register_t __cdecl internal_478100()
{
    __asm
    {
        sub esp, 0x228
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        mov byte ptr ss : [esp+0x27], 1
        mov byte ptr ss : [esp+0x1F], 1
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov byte ptr ss : [esp+0x1E], 0
        mov dword ptr ss : [esp+0x20], 0x3CCCCCCD
        je public_47820c
        mov eax, dword ptr ds : [esi]
        push 0
/*FIXUP push offset public_5d1580 @0x478162*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1580
        call dword ptr ds : [eax+0x98]
        mov dword ptr ss : [esp+0x34], 0x3F28F5C3
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[esi+0xB4]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x38], 0x3ECB4396
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x3C], 0
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0x34], 0x3F23D70A
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ds:[esi+0xC0]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x38], 0xBECBC6A8
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ss : [esp+0x3C], 0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [edx+0x978]
        cmp eax, 1
        jne public_4781f9
        mov byte ptr ss : [esp+0x27], 0
        mov byte ptr ss : [esp+0x1F], 0
        mov dword ptr ss : [esp+0x20], 0
        jmp public_47831b
        public_4781f9 : nop
        cmp eax, 3
        jne public_47831b
        mov byte ptr ss : [esp+0x1F], 0
        jmp public_47831b
        public_47820c : nop
        mov al, byte ptr ds : [esi+0x35C]
        test al, al
        jne public_47831b
        mov eax, dword ptr ds : [esi]
        push 0
/*FIXUP push offset public_5ce994 @0x47821e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce994
        mov ecx, esi
        call dword ptr ds : [eax+0x98]
        push 0
        push 0
        push 0x409
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0
        lea edx, ss:[esp+0x80]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x47824d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d01d0 @0x478254*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01d0
/*FIXUP push offset public_5d1570 @0x478259*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1570
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], 0x3CA3D70A
        mov dword ptr ss : [esp+0x74], 0x3CA3D70A
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x98], 0x3ECD4FDF
        mov dword ptr ss : [esp+0x9C], 0x3E72B021
        mov dword ptr ss : [esp+0xA0], 0
        call public_5a0c90
        mov dword ptr ds : [esi+0x4D8], eax
        lea eax, ds:[esi+0x80]
        push eax
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        mov dword ptr ss : [esp+0x34], 0xBEDC28F6
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], 0x3E841893
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x34], 0xBEDC28F6
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], 0x3E79DB23
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], eax
        mov byte ptr ss : [esp+0x1E], 1
        public_47831b : nop
        call public_4c3e10
        test eax, eax
        jne public_478338
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        jne public_478338
        mov byte ptr ss : [esp+0x27], 0
        mov byte ptr ss : [esp+0x1F], 0
        public_478338 : nop
        mov al, byte ptr ss : [esp+0x1E]
        test al, al
        mov dword ptr ss : [esp+0x64], 0
        je public_47837e
        push 1
        push 0
        push 1
        push 0x213F
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3F56C8B4
        push 0
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x7C], 0xBED70A3D
        mov dword ptr ss : [esp+0x80], 0x3E85A1CB
        push ecx
        jmp public_4783c6
        public_47837e : nop
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x68], 0x3E604189
        mov dword ptr ss : [esp+0x6C], 0xBD1FBE77
        call public_423b30
        add esp, 0xC
        push 0
        push 0
        push 1
        push 0x213F
        push 0x3FD33333
        push 0x3CF5C28F
        push 0x3EC9BA5E
        push 0
        lea edx, ss:[esp+0x24]
        push edx
/*FIXUP public_4783c6 : nop
        push offset public_5ce91c @0x4783c6*/
  FIXUP public_4783c6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce91c
        mov ecx, esi
/*FIXUP push offset public_5d1564 @0x4783cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1564
        call public_5a0e30
        push ebx
        push ebp
        push edi
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x74], 0x3E604189
        mov dword ptr ss : [esp+0x78], 0xBD9374BC
        mov dword ptr ss : [esp+0x7C], 0
        call public_423b30
        add esp, 0xC
        push 0
        push 0
        push 1
        push 0
        push 0x3FB33333
        push 0x3CF5C28F
        push 0x3EC9BA5E
        push 0
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_5d01a8 @0x478427*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d1558 @0x47842c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1558
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [public_5d1554]
        mov ebp, dword ptr ds : [public_5c71ec]
        xor edi, edi
        mov dword ptr ss : [esp+0x58], edi
        fstp dword ptr ss : [esp+0xD8]
        lea ebx, ds:[esi+0x49C]
        nop 
        lea esp, ss:[esp]
        public_478460 : nop
        inc edi
        push edi
        lea ecx, ss:[esp+0x13C]
/*FIXUP push offset public_5d1544 @0x478469*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1544
        push ecx
        call ebp
        fild dword ptr ss : [esp+0x64]
        lea edx, ss:[esp+0x74]
        push edx
        fmul dword ptr ds : [public_5d1540]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x128]
        fst dword ptr ss : [esp+0x40]
        push ecx
        fsub qword ptr ds : [public_5d1538]
        mov dword ptr ss : [esp+0x58], 0x3D0F5C29
        mov dword ptr ss : [esp+0x5C], 0x3D09374C
        mov dword ptr ss : [esp+0x60], 0
        fst dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x80], 0x3D89374C
        fstp dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x88], 0
        call public_423b30
        add esp, 0x18
        push 0
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x12C]
        push eax
/*FIXUP push offset public_5d1528 @0x4784ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        lea ecx, ss:[esp+0x158]
        push ecx
        mov ecx, esi
        call public_5a0d00
        push edi
        lea edx, ss:[esp+0x13C]
/*FIXUP push offset public_5d151c @0x47850b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d151c
        push edx
        call ebp
        mov eax, dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0xB4]
        push ecx
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xBC], eax
        push edx
        lea eax, ss:[esp+0x134]
        push eax
        mov dword ptr ss : [esp+0xCC], 0x3E0D4FDF
        mov dword ptr ss : [esp+0xD0], 0x3D0B4396
        mov dword ptr ss : [esp+0xD4], 0
        mov dword ptr ss : [esp+0xC0], 0x3E7DF3B6
        mov dword ptr ss : [esp+0xC8], 0
        call public_423b30
        add esp, 0x18
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0x138]
        push edx
/*FIXUP push offset public_5d1528 @0x47858c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        lea eax, ss:[esp+0x158]
        push eax
        mov ecx, esi
        call public_5a0d00
        push edi
        lea ecx, ss:[esp+0x13C]
/*FIXUP push offset public_5d1510 @0x4785a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1510
        push ecx
        call ebp
        add esp, 0xC
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x94], 0
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [public_5d150c]
        push edx
        sub esp, 8
        lea ecx, ss:[esp+0x138]
        fst dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0xA4], 0
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xA8], 0x3D1374BC
        fadd st, st(1)
        mov dword ptr ss : [esp+0xAC], 0x3D27EF9E
        mov dword ptr ss : [esp+0xB0], 0
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d1508]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea eax, ss:[esp+0x90]
        push eax
        push 0
        push 0
        push 0x50
        push 1
        push 1
        push 1
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0xC8]
        push ecx
        push 0
        lea edx, ss:[esp+0x160]
        push edx
/*FIXUP push offset public_5d14d8 @0x478661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14d8
        lea eax, ss:[esp+0x174]
        push eax
        mov ecx, esi
        call public_5a0db0
        push edi
        lea ecx, ss:[esp+0x13C]
/*FIXUP push offset public_5d14cc @0x47867d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14cc
        push ecx
        call ebp
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d14c8]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 0xC
        push edx
        fadd dword ptr ss : [esp+0x24]
        sub esp, 8
        lea ecx, ss:[esp+0xF0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d14c4]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0
        push 0
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3E8A3D71
        push 0
        lea eax, ss:[esp+0x104]
        push eax
/*FIXUP push offset public_5d010c @0x4786dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea ecx, ss:[esp+0x160]
        push ecx
        mov ecx, esi
        call public_5a0e30
        push edi
        lea edx, ss:[esp+0x13C]
/*FIXUP push offset public_5d14b4 @0x4786f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d14b4
        push edx
        call ebp
        fld dword ptr ss : [esp+0x38]
        add esp, 0xC
        fsub dword ptr ds : [public_5d14b0]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        sub esp, 8
        fst dword ptr ss : [esp+0x64]
        lea ecx, ss:[esp+0xCC]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d14ac]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0xBCF
        push 0
        push 0
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3DCCCCCD
        push 0
        lea ecx, ss:[esp+0xE0]
        push ecx
/*FIXUP push offset public_5d010c @0x47875e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0x160]
        push edx
        mov ecx, esi
        call public_5a0e30
        push edi
        lea eax, ss:[esp+0x13C]
/*FIXUP push offset public_5d149c @0x47877a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d149c
        push eax
        call ebp
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d1498]
        lea ecx, ss:[esp+0x108]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x90], 0x3C449BA6
        fadd dword ptr ds : [public_5d1494]
        mov dword ptr ss : [esp+0x94], 0x3C449BA6
        mov dword ptr ss : [esp+0x98], 0
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d1490]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0x425
        push 0x426
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x9C]
        push ecx
        push 0
        lea edx, ss:[esp+0x11C]
        push edx
        push 0
        push 0
/*FIXUP push offset public_5d1468 @0x478804*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1468
/*FIXUP push offset public_5d143c @0x478809*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d143c
        lea eax, ss:[esp+0x16C]
        push eax
        mov ecx, esi
        call public_5a0fb0
        push edi
        lea ecx, ss:[esp+0x13C]
/*FIXUP push offset public_5d142c @0x478825*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d142c
        push ecx
        call ebp
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d1428]
        mov dword ptr ss : [esp+0x84], 0x3CF5C28F
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x88], 0x3B449BA6
        fadd dword ptr ds : [public_5d1494]
        mov dword ptr ss : [esp+0x8C], 0
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0xD8]
        fadd dword ptr ds : [public_5d1508]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_679bac]
        push eax
        push eax
        push 0x43C
        push 1
        lea edx, ss:[esp+0x88]
        push edx
        push 0
        lea eax, ss:[esp+0xE4]
        push eax
/*FIXUP push offset public_5c865c @0x4788a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x158]
        push ecx
        mov ecx, esi
        call public_5a1080
        push edi
        lea edx, ss:[esp+0x13C]
/*FIXUP push offset public_5d1418 @0x4788c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1418
        push edx
        call ebp
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [public_5d1414]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0xC
        push eax
        fadd dword ptr ss : [esp+0x24]
        sub esp, 8
        lea ecx, ss:[esp+0xFC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xE4]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0xBD4
        push 2
        push 0xBD4
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3DF5C28F
        push 0
        lea ecx, ss:[esp+0x110]
        push ecx
/*FIXUP push offset public_5d010c @0x478929*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0x160]
        push edx
        mov ecx, esi
        call public_5a0e30
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_478a07
        cmp dword ptr ds : [eax+0x978], 1
        jne public_478a07
        push edi
        lea eax, ss:[esp+0x13C]
/*FIXUP push offset public_5d1404 @0x478960*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1404
        push eax
        call ebp
        fld dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x114]
        fadd dword ptr ds : [public_5d1494]
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x1C], 0x3C449BA6
        mov dword ptr ss : [esp+0x20], 0x3C449BA6
        fadd dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d1400]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea ecx, ss:[esp+0x34]
        push ecx
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
        lea edx, ss:[esp+0x3C]
        push edx
        push 0
        lea eax, ss:[esp+0x13C]
        push eax
/*FIXUP push offset public_5d0be4 @0x4789f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0be4
        lea ecx, ss:[esp+0x174]
        push ecx
        mov ecx, esi
        call public_5a0db0
        public_478a07 : nop
        push edi
        lea edx, ss:[esp+0x13C]
/*FIXUP push offset public_5d13ec @0x478a0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13ec
        push edx
        call ebp
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0xC
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x58]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d13e8]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 1
        push 0
        push 2
        push 0
        push 0x3FC00000
        push 0x3D23D70A
        push 0x3E2E147B
        push 0
        lea ecx, ss:[esp+0x6C]
        push ecx
/*FIXUP push offset public_5d010c @0x478a65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d010c
        lea edx, ss:[esp+0x160]
        push edx
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [ebx], eax
        add ebx, 4
        cmp edi, 5
        mov dword ptr ss : [esp+0x58], edi
        jl public_478460
        mov bl, byte ptr ss : [esp+0x2A]
        test bl, bl
        je public_478ac8
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        push 0x3E9EB852
        push 0x3EB851EC
/*FIXUP push offset public_5d13d8 @0x478aa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13d8
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0x3CDD2F1B
        mov dword ptr ss : [esp+0x28], 0x3E1A9FBE
        mov dword ptr ss : [esp+0x2C], 0
        call public_5a10e0
        public_478ac8 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d13d4]
        push ecx
        sub esp, 8
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d13d0]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 5
        push 5
        push 0
        push 0x3EAB851F
        push 0x3C9BA5E3
        lea edx, ss:[esp+0x64]
        push edx
/*FIXUP push offset public_5d13bc @0x478b0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13bc
        mov ecx, esi
        call public_5a17e0
        mov al, byte ptr ss : [esp+0x33]
        test al, al
        je public_478cdf
        fld dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        fsub dword ptr ds : [public_5d13b8]
        mov edi, eax
        push edi
        mov dword ptr ss : [esp+0x14], 0x3C8B4396
        fstp dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x18], 0x3C8B4396
        mov ebp, dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ds : [public_5d13b4]
        push ebp
        push ecx
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x38], eax
        call public_422b80
        push 0
        push 0
        push 0x2135
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x70]
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x478b8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d1370 @0x478b96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1370
/*FIXUP push offset public_5d1360 @0x478b9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1360
        mov ecx, esi
        call public_5a0c90
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [public_5d135c]
        push edi
        push ebp
        push ecx
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x1C], 0x3C8B4396
        mov dword ptr ss : [esp+0x20], 0x3C8B4396
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        push 0
        push 0
        push 0x214A
        push 0
        push 0
        push 1
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        lea ecx, ss:[esp+0x70]
        push ecx
        push 0
/*FIXUP push offset public_5d13a0 @0x478bf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d1334 @0x478bfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1334
/*FIXUP push offset public_5d1328 @0x478c03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1328
        mov ecx, esi
        call public_5a0c90
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [public_5d1324]
        push edi
        push ebp
        push ecx
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x1C], 0x3C8B4396
        mov dword ptr ss : [esp+0x20], 0x3C8B4396
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        push 0
        push 0
        push 0x2142
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        lea eax, ss:[esp+0x70]
        push eax
        push 0
/*FIXUP push offset public_5d13a0 @0x478c5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d12f4 @0x478c66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d12f4
/*FIXUP push offset public_5d12e0 @0x478c6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d12e0
        mov ecx, esi
        call public_5a0c90
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [public_5d12dc]
        push edi
        push ebp
        push ecx
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x1C], 0x3C8B4396
        mov dword ptr ss : [esp+0x20], 0x3C8B4396
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        push 0
        push 0
        push 0x2141
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x70]
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x478cc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d12b0 @0x478cce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d12b0
/*FIXUP push offset public_5d12a0 @0x478cd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d12a0
        mov ecx, esi
        call public_5a0c90
        public_478cdf : nop
        mov al, byte ptr ss : [esp+0x2B]
        test al, al
        je public_478d62
        mov eax, dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x60]
        fsub dword ptr ds : [public_5d13b8]
        push eax
        sub esp, 8
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x1C], 0x3C8B4396
        fld dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x20], 0x3C8B4396
        fadd dword ptr ds : [public_5d129c]
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0x2138
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0
        lea edx, ss:[esp+0x70]
        push edx
        push 0
/*FIXUP push offset public_5d13a0 @0x478d4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d13a0
        push 0
/*FIXUP push offset public_5d126c @0x478d51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d126c
/*FIXUP push offset public_5d1258 @0x478d56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1258
        mov ecx, esi
        call public_5a0c90
        public_478d62 : nop
        test bl, bl
        je public_478e40
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d1254]
        push eax
        sub esp, 8
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x1C], 0x3E158106
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], 0x3CD4FDF4
        fadd dword ptr ds : [public_5d1250]
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0x3D4
        push 0
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
/*FIXUP push offset public_5d1528 @0x478dc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
/*FIXUP push offset public_5d123c @0x478dca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d123c
        mov ecx, esi
        call public_5a0d00
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d1238]
        mov dword ptr ds : [esi+0x970], eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x58]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [public_5d1234]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 1
        push 0
        push 1
        push 0x3DC
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3E4DD2F2
        push 0
        lea ecx, ss:[esp+0x6C]
        push ecx
/*FIXUP push offset public_5d0410 @0x478e29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d1224 @0x478e2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1224
        mov ecx, esi
        call public_5a0e30
        mov dword ptr ds : [esi+0x96C], eax
        public_478e40 : nop
        call public_4c3e10
        test eax, eax
        je public_47907a
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        fsub dword ptr ds : [public_5d1220]
        mov edi, edx
        push edi
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x14], 0
        fld dword ptr ss : [esp+0x60]
        mov ebp, dword ptr ss : [esp+0x78]
        fadd dword ptr ds : [public_5d121c]
        push ebp
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x3C], 0x3D75C28F
        mov ebx, dword ptr ss : [esp+0x60]
        push ebx
        mov dword ptr ss : [esp+0x44], 0x3C656042
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x38], edx
        call public_422b80
        lea eax, ss:[esp+0x10]
        push eax
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
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        lea edx, ss:[esp+0x80]
        push edx
/*FIXUP push offset public_5d11f0 @0x478edf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d11f0
/*FIXUP push offset public_5d11e0 @0x478ee4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d11e0
        mov ecx, esi
        call public_5a0db0
        push edi
        push ebp
        mov dword ptr ds : [esi+0x4D0], eax
        push ebx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ds : [eax+0xCC], 0x43B
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_422b80
        lea eax, ss:[esp+0x10]
        push eax
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
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        lea edx, ss:[esp+0x80]
        push edx
/*FIXUP push offset public_5d11b4 @0x478f64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d11b4
/*FIXUP push offset public_5d11a4 @0x478f69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d11a4
        mov ecx, esi
        call public_5a0db0
        push 0
        mov dword ptr ds : [esi+0x4CC], eax
        mov edx, dword ptr ds : [eax]
        push 1
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        push edi
        push ebp
        push ebx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_422b80
        lea eax, ss:[esp+0x10]
        push eax
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
        lea ecx, ss:[esp+0x60]
        push ecx
        push 0
        lea edx, ss:[esp+0x80]
        push edx
/*FIXUP push offset public_5d1174 @0x478fef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1174
/*FIXUP push offset public_5d1160 @0x478ff4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1160
        mov ecx, esi
        call public_5a0db0
        push 0
        push 1
        mov dword ptr ds : [esi+0x4D4], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x60]
        fsub dword ptr ds : [public_5d115c]
        push edi
        sub esp, 8
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [public_5d1158]
        fstp dword ptr ss : [esp]
        call public_422b80
        push 0
        push 0
        push 0
        push 0x43B
        push 0x3FC00000
        push 0x3D75C28F
        push 0x3E851EB8
        push 0
        lea eax, ss:[esp+0x6C]
        push eax
/*FIXUP push offset public_5d0608 @0x47905f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
/*FIXUP push offset public_5d114c @0x479064*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d114c
        mov ecx, esi
        call public_5a0e30
        mov bl, byte ptr ss : [esp+0x2A]
        mov dword ptr ds : [esi+0x4DC], eax
        public_47907a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d1148]
        push ecx
        sub esp, 8
        mov al, 0xFF
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x58]
        fld dword ptr ss : [esp+0x28]
        mov byte ptr ss : [esp+0x38], al
        fadd dword ptr ds : [public_5c94f8]
        mov byte ptr ss : [esp+0x39], al
        mov byte ptr ss : [esp+0x3A], al
        mov byte ptr ss : [esp+0x3B], al
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x1C], 0x3E051EB8
        mov dword ptr ss : [esp+0x20], 0xBE16872B
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_422b80
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_679bb4 @0x4790ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x98]
        push eax
/*FIXUP push offset public_5d1134 @0x47910f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1134
        mov ecx, esi
        mov dword ptr ss : [esp+0xA0], 0
        mov dword ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xA8], 0
        call public_5a1020
        and byte ptr ds : [eax+0x6C], 0xFC
        call public_4c3e10
        test eax, eax
        je public_47921d
        test bl, bl
        je public_4791a3
        push 1
        push 0
        push 1
        push 0x387
        push 0x3FB33333
        push 0x3C83126F
        push 0x3EBA5E35
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_5d01a8 @0x479172*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
/*FIXUP push offset public_5d1124 @0x479177*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1124
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0x3CDD2F1B
        mov dword ptr ss : [esp+0x40], 0x3E4ED917
        mov dword ptr ss : [esp+0x44], 0
        call public_5a0e30
        mov dword ptr ds : [esi+0x944], eax
        jmp public_47921d
        public_4791a3 : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47921d
        cmp dword ptr ds : [eax+0x978], 1
        je public_47921d
        push 0
        push 0
        push 0xBC4
        push 0
        push 0
        push 1
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        push 0
        lea eax, ss:[esp+0x58]
        push eax
        push 0
/*FIXUP push offset public_5d1110 @0x4791d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1110
        push 0
/*FIXUP push offset public_5d10e4 @0x4791dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d10e4
/*FIXUP push offset public_5d10d4 @0x4791e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d10d4
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], 0x3C449BA6
        mov dword ptr ss : [esp+0x50], 0x3C449BA6
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x70], 0x3EF4BC6A
        mov dword ptr ss : [esp+0x74], 0xBED91687
        mov dword ptr ss : [esp+0x78], 0x3EC6A7F0
        call public_5a0c90
        public_47921d : nop
        mov eax, dword ptr ds : [public_66873c]
        test eax, eax
        pop edi
        pop ebp
        pop ebx
        jne public_4795da
        fld dword ptr ss : [esp+0x10]
        push 0
        fadd dword ptr ds : [public_5d10d0]
        push 0
        push 0xBC6
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x3C]
        push 0
        fsub dword ptr ds : [public_5d10cc]
/*FIXUP push offset public_5d1528 @0x479264*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        push 0
/*FIXUP push offset public_5d10a0 @0x47926b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d10a0
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x50]
/*FIXUP push offset public_5d1090 @0x479278*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1090
        fstp dword ptr ss : [esp+0x6C]
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], 0x3C656042
        mov dword ptr ss : [esp+0x44], 0x3C656042
        mov dword ptr ss : [esp+0x48], 0
        call public_5a0c90
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d108c]
        push 0
        push 0
        push 1
        push 0x638
        push 0x3FB33333
        push 0x3C83126F
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        push 0x3E851EB8
        fsub dword ptr ds : [public_5d1088]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5d01a8 @0x4792e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01a8
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d1074 @0x4792ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1074
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d1070]
        push 1
        push 1
        push 5
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        push 0
        fsub dword ptr ds : [public_5d106c]
        push 0x3C9BA5E3
        push 0x3E818937
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x28]
/*FIXUP push offset public_5d1054 @0x479331*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1054
        mov ecx, esi
        mov dword ptr ds : [esi+0x91C], eax
        call public_5a17e0
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi+0x920], eax
        mov byte ptr ds : [eax+0x3B4], 1
        mov dword ptr ds : [eax+0x3CC], 0x3F800000
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5d1050]
        push 0x47A
        push 0x3FCCCCCD
        push 0x3D75C28F
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        push 0x3EC49BA6
        fsub dword ptr ds : [public_5d104c]
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5d0608 @0x47939b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d1034 @0x4793a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1034
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d1030]
        push 0
        push 0
        push 0
        push 0x3FCCCCCD
        push 0x3D75C28F
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        push 0x3EC49BA6
        fsub dword ptr ds : [public_5d104c]
        push 0
        mov dword ptr ds : [esi+0x924], eax
        lea eax, ss:[esp+0x20]
        push eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
/*FIXUP push offset public_5d0608 @0x4793f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        fstp dword ptr ss : [esp+0x30]
/*FIXUP push offset public_5d1018 @0x4793fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1018
        mov ecx, esi
        call public_5a0e90
        push 8
        push 1
        mov dword ptr ds : [esi+0x928], eax
        mov edx, dword ptr ds : [eax]
        push 0x43
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x928]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x44
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d1014]
        mov dword ptr ss : [esp+4], 0x3DD4FDF4
        mov dword ptr ss : [esp+8], 0x3CD4FDF4
        mov dword ptr ss : [esp+0xC], 0
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        push 0
        fsub dword ptr ds : [public_5d1010]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x34]
        push 0
        push 0x639
        push 0
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
/*FIXUP push offset public_5d1528 @0x479484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
/*FIXUP push offset public_5d0ff8 @0x479489*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ff8
        mov ecx, esi
        call public_5a0d00
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d0ff4]
        push 1
        push 0
        push 1
        push 0x2148
        push 0x3FCCCCCD
        push 0x3D75C28F
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        push 0x3E4DD2F2
        fsub dword ptr ds : [public_5d0ff0]
        push 0
        mov dword ptr ds : [esi+0x92C], eax
        lea eax, ss:[esp+0x24]
        push eax
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x3C]
/*FIXUP push offset public_5d0410 @0x4794dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d0fdc @0x4794e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0fdc
        mov ecx, esi
        call public_5a0e30
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d1014]
        push 0
        push 0
        push 0x63A
        push 0
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x24]
        push 0
        fsub dword ptr ds : [public_5d0fd8]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x34]
/*FIXUP push offset public_5d1528 @0x479528*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1528
        fstp dword ptr ss : [esp+0x50]
/*FIXUP push offset public_5d0fc0 @0x479531*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0fc0
        mov ecx, esi
        mov dword ptr ds : [esi+0x930], eax
        mov dword ptr ss : [esp+0x28], 0x3DD4FDF4
        mov dword ptr ss : [esp+0x2C], 0x3CD4FDF4
        mov dword ptr ss : [esp+0x30], 0
        call public_5a0d00
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5d0ff4]
        push 1
        push 0
        mov dword ptr ds : [esi+0x934], eax
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        push 1
        fsub dword ptr ds : [public_5d0fbc]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x18]
        push 0x2146
        push 0x3FCCCCCD
        push 0x3D75C28F
        push 0x3E4DD2F2
        push 0
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_5d0410 @0x4795a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0410
/*FIXUP push offset public_5d0fa8 @0x4795ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0fa8
        mov ecx, esi
        call public_5a0e30
        push 0
        mov ecx, esi
        mov dword ptr ds : [esi+0x938], eax
        mov dword ptr ds : [esi+0x93C], 1
        mov dword ptr ds : [esi+0x940], 0x64
        call public_4795f0
        public_4795da : nop
        pop esi
        add esp, 0x228
        ret 
        UNREACHABLE_TRAP(0x478100)
    }
}

#undef public_4781f9
#undef public_47820c
#undef public_47831b
#undef public_478338
#undef public_47837e
#undef public_4783c6
#undef public_478460
#undef public_478a07
#undef public_478ac8
#undef public_478cdf
#undef public_478d62
#undef public_478e40
#undef public_47907a
#undef public_4791a3
#undef public_47921d
#undef public_4795da
