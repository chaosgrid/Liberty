#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0e50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1140);
CLANG_FORWARD_PROC_SYMBOL(public_6ec16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec1710);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3f50);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ec11b4 _public_6ec11b4
#define public_6ec11bb _public_6ec11bb
#define public_6ec11dd _public_6ec11dd
#define public_6ec11e1 _public_6ec11e1
#define public_6ec1201 _public_6ec1201
#define public_6ec1299 _public_6ec1299
#define public_6ec12ee _public_6ec12ee
#define public_6ec12f4 _public_6ec12f4
#define public_6ec1309 _public_6ec1309
#define public_6ec130e _public_6ec130e
#define public_6ec132b _public_6ec132b
#define public_6ec132f _public_6ec132f
#define public_6ec1337 _public_6ec1337
#define public_6ec133e _public_6ec133e
#define public_6ec1355 _public_6ec1355
#define public_6ec13b0 _public_6ec13b0
#define public_6ec13b7 _public_6ec13b7
#define public_6ec13d7 _public_6ec13d7
#define public_6ec13db _public_6ec13db
#define public_6ec1400 _public_6ec1400
#define public_6ec1425 _public_6ec1425
#define public_6ec142b _public_6ec142b
#define public_6ec1433 _public_6ec1433
#define public_6ec1468 _public_6ec1468
#define public_6ec148d _public_6ec148d
#define public_6ec148f _public_6ec148f
#define public_6ec1496 _public_6ec1496
#define public_6ec14c3 _public_6ec14c3
#define public_6ec14e4 _public_6ec14e4
#define public_6ec14e6 _public_6ec14e6
#define public_6ec1525 _public_6ec1525
#define public_6ec153b _public_6ec153b
#define public_6ec155f _public_6ec155f
#define public_6ec157d _public_6ec157d
#define public_6ec1591 _public_6ec1591
#define public_6ec15bc _public_6ec15bc
#define public_6ec15d9 _public_6ec15d9
#define public_6ec15e1 _public_6ec15e1
#define public_6ec15f1 _public_6ec15f1
#define public_6ec15f9 _public_6ec15f9
#define public_6ec1610 _public_6ec1610
#define public_6ec1633 _public_6ec1633
#define public_6ec1640 _public_6ec1640
#define public_6ec1659 _public_6ec1659
#define public_6ec1661 _public_6ec1661
#define public_6ec168b _public_6ec168b

PROC_DECLARE(0x6ec1140, internal_6ec1140, public_6ec1140);
extern "C" NAKED register_t __cdecl internal_6ec1140()
{
    __asm
    {
        mov eax, 0x2068
        call public_6ed0c70
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset public_6ed4094 @0x6ec114e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
        mov dword ptr ss : [esp+0x2C], ecx
        xor ebx, ebx
/*FIXUP push offset public_6ed4858 @0x6ec1159*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4858
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6eb15e0
        mov esi, dword ptr ss : [esp+0x2080]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        xor ebp, ebp
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ec11bb
        mov edx, dword ptr ds : [esi]
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        push 4
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6ec11dd
        cmp dword ptr ss : [esp+0x14], 4
        jne public_6ec11dd
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebp, 1
        mov dword ptr ss : [esp+0x24], edx
        mov ebx, edx
        public_6ec11b4 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_6ec11bb : nop
        xor ecx, ecx
        test ebp, ebp
        setne cl
        dec ecx
        test ecx, 0x80004005
        jge public_6ec11e1
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        add esp, 0x2068
        ret 0x14
        public_6ec11dd : nop
        xor ebp, ebp
        jmp public_6ec11b4
        public_6ec11e1 : nop
        lea eax, ds:[ebx*4]
        push eax
        call public_6ed0c5c
        add esp, 4
        xor ebp, ebp
        test ebx, ebx
        mov dword ptr ss : [esp+0x20], eax
        jbe public_6ec1299
        mov ebx, eax
        public_6ec1201 : nop
        mov edx, dword ptr ss : [esp+0x2084]
        push ebp
        push edx
        lea eax, ss:[esp+0x80]
/*FIXUP push offset public_6ed4c94 @0x6ec1211*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4c94
        push eax
        call public_6eb22b0
        add esp, 0x10
        mov edx, eax
        push 1
        xor eax, eax
        mov dword ptr ss : [esp+0x38], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x3C]
        rep stosd
        mov edi, dword ptr ss : [esp+0x2C]
        push ebx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x2084]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x50], 0x80000000
        mov dword ptr ss : [esp+0x54], 1
        mov dword ptr ss : [esp+0x5C], 3
        mov dword ptr ss : [esp+0x60], 0x8000080
        mov dword ptr ss : [esp+0x40], 0x34
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_6ec1710
        test eax, eax
        jl public_6ec12ee
        mov eax, dword ptr ss : [esp+0x24]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jb public_6ec1201
/*FIXUP public_6ec1299 : nop
        push offset public_6ed4094 @0x6ec1299*/
  FIXUP public_6ec1299 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
/*FIXUP push offset public_6ed4880 @0x6ec129e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4880
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x24], 0
        call public_6eb15e0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        xor ebx, ebx
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ec133e
        mov ecx, dword ptr ds : [esi]
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        push 4
        lea eax, ss:[esp+0x24]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6ec132b
        cmp dword ptr ss : [esp+0x14], 4
        jne public_6ec132b
        mov ebx, 1
        jmp public_6ec132f
        public_6ec12ee : nop
        xor esi, esi
        test ebp, ebp
        jbe public_6ec130e
        public_6ec12f4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_6ec1309
        push 1
        push eax
        mov ecx, edi
        call public_6ec0bd0
        public_6ec1309 : nop
        inc esi
        cmp esi, ebp
        jb public_6ec12f4
        public_6ec130e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6ed0c50
        add esp, 4
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2068
        ret 0x14
        public_6ec132b : nop
        xor ebx, ebx
        jmp public_6ec1337
        public_6ec132f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6ec1337 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_6ec133e : nop
        xor eax, eax
        test ebx, ebx
        setne al
        dec eax
        test eax, 0x80004005
        jge public_6ec1355
        mov dword ptr ss : [esp+0x1C], 0x41C00000
/*FIXUP public_6ec1355 : nop
        push offset public_6ed4094 @0x6ec1355*/
  FIXUP public_6ec1355 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
        xor ebx, ebx
/*FIXUP push offset public_6ed4868 @0x6ec135c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4868
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6eb15e0
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        xor ebp, ebp
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ec13b7
        mov eax, dword ptr ds : [esi]
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push 4
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6ec13d7
        cmp dword ptr ss : [esp+0x14], 4
        jne public_6ec13d7
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, 1
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, eax
        public_6ec13b0 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6ec13b7 : nop
        xor edx, edx
        test ebp, ebp
        setne dl
        dec edx
        test edx, 0x80004005
        jge public_6ec13db
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2068
        ret 0x14
        public_6ec13d7 : nop
        xor ebp, ebp
        jmp public_6ec13b0
        public_6ec13db : nop
        lea ebp, ds:[ebx+ebx*4]
        shl ebp, 2
        push ebp
        mov dword ptr ss : [esp+0x18], ebp
        call public_6ed0c5c
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec142b
        dec ebx
        test ebx, ebx
        mov edi, eax
        jl public_6ec1425
        inc ebx
        mov edi, edi
        public_6ec1400 : nop
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0
        mov ecx, edi
        mov dword ptr ds : [edi], 0
        call public_6ec10b0
        add edi, 0x14
        dec ebx
        jne public_6ec1400
        mov eax, dword ptr ss : [esp+0x10]
        public_6ec1425 : nop
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6ec1433
        public_6ec142b : nop
        mov dword ptr ss : [esp+0x10], 0
/*FIXUP public_6ec1433 : nop
        push offset public_6ed4094 @0x6ec1433*/
  FIXUP public_6ec1433 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
/*FIXUP push offset public_6ed4874 @0x6ec1438*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4874
        lea ecx, ss:[esp+0x38]
        call public_6eb15e0
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        xor ebx, ebx
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ec1496
        test ebp, ebp
        jne public_6ec1468
        mov edx, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        mov ebp, eax
        public_6ec1468 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebp
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6ec148d
        cmp dword ptr ss : [esp+0x2C], ebp
        jne public_6ec148d
        mov ebx, 1
        jmp public_6ec148f
        public_6ec148d : nop
        xor ebx, ebx
        public_6ec148f : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_6ec1496 : nop
        xor ecx, ecx
        test ebx, ebx
        setne cl
        dec ecx
        test ecx, 0x80004005
        jge public_6ec14c3
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6ed0c50
        add esp, 4
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2068
        ret 0x14
        public_6ec14c3 : nop
        push 0x30
        call public_6ed0c5c
        add esp, 4
        test eax, eax
        je public_6ec14e4
        mov ecx, dword ptr ss : [esp+0x2084]
        push ecx
        mov ecx, eax
        call public_6ec16c0
        mov ebp, eax
        jmp public_6ec14e6
        public_6ec14e4 : nop
        xor ebp, ebp
        public_6ec14e6 : nop
        mov edx, dword ptr ss : [esp+0x2088]
        lea esi, ss:[ebp+0x10]
        mov dword ptr ds : [edx], ebp
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0x3F800000
        mov dword ptr ss : [esp+0x74], 0x3F800000
        jne public_6ec1525
        xor edx, edx
        jmp public_6ec153b
        public_6ec1525 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec153b : nop
        mov edi, dword ptr ss : [esp+0x18]
        cmp edx, edi
        jae public_6ec155f
        mov ebx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, esi
        call public_6ec3b60
        sub edi, eax
        push edi
        push ebx
        mov ecx, esi
        call public_6ec3c30
        jmp public_6ec157d
        public_6ec155f : nop
        mov ecx, esi
        call public_6ec3b60
        cmp edi, eax
        jae public_6ec157d
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        add eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, esi
        call public_6ec3f50
        public_6ec157d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, eax
        cmp eax, edx
        jae public_6ec15bc
        add eax, 0xC
        public_6ec1591 : nop
        fld dword ptr ds : [eax+4]
        add eax, 0x14
        fld dword ptr ds : [eax-0x14]
        add ecx, 0x14
        fld dword ptr ds : [eax-0x18]
        fld dword ptr ds : [eax-0x1C]
        fstp dword ptr ds : [ecx-0x10]
        fstp dword ptr ds : [ecx-0xC]
        fstp dword ptr ds : [ecx-8]
        fstp dword ptr ds : [ecx-4]
        mov esi, dword ptr ds : [eax-0x20]
        mov dword ptr ds : [ecx-0x14], esi
        lea esi, ds:[eax-0xC]
        cmp esi, edx
        jb public_6ec1591
        public_6ec15bc : nop
        fld dword ptr ss : [esp+0x1C]
        lea esi, ss:[ebp+0x20]
        fstp dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x2C], 0
        jne public_6ec15d9
        xor eax, eax
        jmp public_6ec15e1
        public_6ec15d9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ec15e1 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        jae public_6ec1610
        test ecx, ecx
        jne public_6ec15f1
        xor eax, eax
        jmp public_6ec15f9
        public_6ec15f1 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ec15f9 : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov edx, ebx
        sub edx, eax
        mov eax, dword ptr ds : [esi+8]
        push edx
        push eax
        mov ecx, esi
        call public_6ece6e0
        jmp public_6ec1633
        public_6ec1610 : nop
        mov ecx, esi
        call public_6ecde00
        cmp ebx, eax
        jae public_6ec1633
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[ebx*4]
        push ecx
        add edx, eax
        push edx
        mov ecx, esi
        call public_6ec3fe0
        public_6ec1633 : nop
        mov edi, dword ptr ss : [ebp+0x24]
        xor esi, esi
        test ebx, ebx
        jbe public_6ec1661
        lea esp, ss:[esp]
        public_6ec1640 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_6ec1659
        mov ecx, dword ptr ss : [esp+0x28]
        push 0
        push eax
        mov dword ptr ds : [edi], eax
        call public_6ec0bd0
        public_6ec1659 : nop
        inc esi
        add edi, 4
        cmp esi, ebx
        jb public_6ec1640
        public_6ec1661 : nop
        mov esi, dword ptr ss : [esp+0x2088]
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ebp
        call public_6ec0e50
        mov al, byte ptr ss : [esp+0x208C]
        test al, al
        je public_6ec168b
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6ec168b
        call public_6ebe560
        public_6ec168b : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6ed0c50
        add esp, 8
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2068
        ret 0x14
        UNREACHABLE_TRAP(0x6ec1140)
    }
}

#undef public_6ec11b4
#undef public_6ec11bb
#undef public_6ec11dd
#undef public_6ec11e1
#undef public_6ec1201
#undef public_6ec1299
#undef public_6ec12ee
#undef public_6ec12f4
#undef public_6ec1309
#undef public_6ec130e
#undef public_6ec132b
#undef public_6ec132f
#undef public_6ec1337
#undef public_6ec133e
#undef public_6ec1355
#undef public_6ec13b0
#undef public_6ec13b7
#undef public_6ec13d7
#undef public_6ec13db
#undef public_6ec1400
#undef public_6ec1425
#undef public_6ec142b
#undef public_6ec1433
#undef public_6ec1468
#undef public_6ec148d
#undef public_6ec148f
#undef public_6ec1496
#undef public_6ec14c3
#undef public_6ec14e4
#undef public_6ec14e6
#undef public_6ec1525
#undef public_6ec153b
#undef public_6ec155f
#undef public_6ec157d
#undef public_6ec1591
#undef public_6ec15bc
#undef public_6ec15d9
#undef public_6ec15e1
#undef public_6ec15f1
#undef public_6ec15f9
#undef public_6ec1610
#undef public_6ec1633
#undef public_6ec1640
#undef public_6ec1659
#undef public_6ec1661
#undef public_6ec168b
