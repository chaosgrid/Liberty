#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_636e610);
CLANG_FORWARD_PROC_SYMBOL(public_636e6e0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636e800);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6371200);
CLANG_FORWARD_PROC_SYMBOL(public_6374590);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);

#define public_6371240 _public_6371240
#define public_637125e _public_637125e
#define public_6371266 _public_6371266
#define public_63712db _public_63712db
#define public_6371315 _public_6371315
#define public_637132e _public_637132e
#define public_6371351 _public_6371351
#define public_63713c8 _public_63713c8
#define public_63713de _public_63713de
#define public_6371400 _public_6371400
#define public_637141d _public_637141d
#define public_637142c _public_637142c
#define public_6371449 _public_6371449
#define public_6371451 _public_6371451
#define public_6371465 _public_6371465
#define public_637146f _public_637146f
#define public_637148a _public_637148a
#define public_637149a _public_637149a
#define public_63714b3 _public_63714b3
#define public_63714e3 _public_63714e3
#define public_6371508 _public_6371508
#define public_6371518 _public_6371518
#define public_6371531 _public_6371531
#define public_6371557 _public_6371557
#define public_637157c _public_637157c
#define public_63715a5 _public_63715a5
#define public_63715ea _public_63715ea
#define public_63715f4 _public_63715f4
#define public_6371633 _public_6371633
#define public_6371648 _public_6371648
#define public_6371678 _public_6371678
#define public_63716a1 _public_63716a1
#define public_63716d4 _public_63716d4
#define public_63716e0 _public_63716e0
#define public_63716fa _public_63716fa
#define public_6371706 _public_6371706
#define public_6371726 _public_6371726
#define public_6371730 _public_6371730
#define public_6371747 _public_6371747
#define public_6371783 _public_6371783
#define public_6371794 _public_6371794
#define public_63717ad _public_63717ad
#define public_63717d6 _public_63717d6
#define public_63717f3 _public_63717f3
#define public_6371850 _public_6371850
#define public_637185d _public_637185d
#define public_6371888 _public_6371888
#define public_637189d _public_637189d
#define public_63718f9 _public_63718f9
#define public_637190a _public_637190a
#define public_637192d _public_637192d
#define public_6371959 _public_6371959
#define public_637196a _public_637196a
#define public_63719ae _public_63719ae
#define public_63719c4 _public_63719c4
#define public_63719d7 _public_63719d7
#define public_6371a03 _public_6371a03

PROC_DECLARE(0x6371200, internal_6371200, public_6371200);
extern "C" NAKED register_t __cdecl internal_6371200()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x50]
        push edi
        xor edi, edi
        test ah, 4
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], edi
        mov ebp, 0x7FFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        je public_6371240
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
/*FIXUP push offset public_63f0000 @0x637122a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0000
        call public_6356960
        push edi
        push esi
        push 5
        call public_6378600
        add esp, 0x14
        public_6371240 : nop
        cmp dword ptr ds : [esi+0x18], edi
        jne public_6371266
        cmp dword ptr ds : [public_658b7fc], edi
        je public_637125e
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
/*FIXUP push offset public_63effb4 @0x6371251*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63effb4
        call public_6356960
        add esp, 8
        public_637125e : nop
        mov dword ptr ss : [esp+0x10], 1
        public_6371266 : nop
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [esi+0x34]
        push edx
/*FIXUP push offset public_63effa4 @0x637126d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63effa4
        push eax
        call public_636e2f0
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [esi+0x38]
        push ecx
/*FIXUP push offset public_63eff94 @0x637127f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eff94
        push edx
        call public_636e2f0
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x40]
        push eax
/*FIXUP push offset public_63eff80 @0x6371291*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eff80
        push ecx
        call public_636e2f0
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [esi+0x44]
        push edx
/*FIXUP push offset public_63eff6c @0x63712a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eff6c
        push eax
        call public_636e2f0
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [esi+0x3C]
        push ecx
/*FIXUP push offset public_63eff5c @0x63712b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eff5c
        push edx
        call public_636e2f0
        mov eax, dword ptr ds : [esi+0x34]
        add esp, 0x3C
        cmp eax, edi
        je public_6371351
        mov edi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test edi, edi
        je public_6371351
        public_63712db : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, 0x8000000
        je public_6371315
        mov ecx, dword ptr ds : [esi+0x4C]
        push ecx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63eff18 @0x63712ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eff18
        call public_6356960
        push edi
        push 0
        push 0
        push 0
/*FIXUP push offset public_63ee94c @0x6371300*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], 1
        public_6371315 : nop
        mov eax, dword ptr ds : [edi+0x14]
        and eax, 0xFFFFFF
        cmp eax, ebp
        jae public_637132e
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        mov ebp, eax
        jne public_63712db
        jmp public_6371351
        public_637132e : nop
        mov edx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [esi+0x4C]
        and edx, 0xFFFFFF
        push edx
        push eax
/*FIXUP push offset public_63efeb8 @0x637133c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efeb8
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], 1
        public_6371351 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        push ecx
        call public_636ec10
        mov edx, dword ptr ds : [esi+0x34]
        push edx
        mov edi, eax
        call public_636ec10
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_636ec10
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 0xC
        test ah, 0x10
        je public_63713c8
        mov edx, dword ptr ds : [public_658b24c]
        lea ecx, ds:[ebx+edi]
        add edx, edx
        cmp ecx, edx
        je public_6371451
        test eax, 0x60000000
        jne public_6371451
        mov eax, dword ptr ds : [esi+0x4C]
        push edi
        push ebx
        push eax
/*FIXUP push offset public_63efe48 @0x63713a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efe48
        call public_6356960
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
/*FIXUP push offset public_63997b0 @0x63713b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push edx
        call public_636eb20
        add esp, 0x1C
        jmp public_6371449
        public_63713c8 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        test ecx, ecx
        jne public_6371400
        mov ecx, dword ptr ds : [public_658b24c]
        cmp ebx, ecx
        jl public_63713de
        cmp edi, ecx
        jge public_6371400
        public_63713de : nop
        test eax, 0x60000000
        jne public_6371400
        mov eax, dword ptr ds : [esi+0x4C]
        push edi
        push ebx
        push eax
/*FIXUP push offset public_63efde4 @0x63713eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efde4
        call public_6356960
        add esp, 0x10
        mov dword ptr ss : [esp+0x10], 1
        public_6371400 : nop
        cmp ebp, edi
        jl public_637142c
        mov eax, dword ptr ds : [public_658b24c]
        cmp eax, 3
        jne public_637141d
        cmp ebx, ebp
        je public_6371451
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        je public_637142c
        jmp public_6371451
        public_637141d : nop
        cmp eax, 2
        jne public_6371451
        lea ecx, ds:[ebx+edi]
        add ecx, ebp
        cmp ecx, 6
        je public_6371451
        public_637142c : nop
        test dword ptr ds : [esi+0x50], 0x60000000
        jne public_6371451
        mov edx, dword ptr ds : [esi+0x4C]
        push ebx
        push edi
        push ebp
        push edx
/*FIXUP push offset public_63efd64 @0x637143c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efd64
        call public_6356960
        add esp, 0x14
        public_6371449 : nop
        mov dword ptr ss : [esp+0x10], 1
        public_6371451 : nop
        mov ebx, dword ptr ds : [esi+0x3C]
        test ebx, ebx
        je public_637149a
        mov edi, dword ptr ds : [ebx+4]
        add ebx, 4
        add ebx, 4
        test edi, edi
        je public_637149a
        public_6371465 : nop
        cmp edi, 2
        je public_637146f
        cmp edi, 1
        jne public_637148a
        public_637146f : nop
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
/*FIXUP push offset public_63efd10 @0x6371473*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efd10
        call public_6356960
        push 0
        push esi
        push 5
        call public_6378600
        add esp, 0x14
        public_637148a : nop
        or dword ptr ds : [edi+0x50], 0x2000
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_6371465
        public_637149a : nop
        mov ebx, dword ptr ds : [esi+0x3C]
        test ebx, ebx
        je public_6371518
        mov edi, dword ptr ds : [ebx+4]
        add ebx, 4
        add ebx, 4
        test edi, edi
        je public_6371518
        mov ebp, 1
        public_63714b3 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        push esi
        push ecx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_63714e3
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [edi+0x4C]
        push eax
        push ecx
        push ecx
        push eax
/*FIXUP push offset public_63efca8 @0x63714ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efca8
        call public_6356960
        add esp, 0x14
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x10], ebp
        public_63714e3 : nop
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 0x20
        jne public_6371508
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63efc58 @0x63714f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efc58
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x10], ebp
        public_6371508 : nop
        and dword ptr ds : [edi+0x50], 0xFFFFDFFF
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_63714b3
        public_6371518 : nop
        mov ebx, dword ptr ds : [esi+0x38]
        test ebx, ebx
        je public_6371557
        mov edi, dword ptr ds : [ebx+4]
        add ebx, 4
        add ebx, 4
        test edi, edi
        je public_6371557
        mov ebp, 0xFEFFFFFF
        public_6371531 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi]
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63efc48 @0x637153d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efc48
        push edx
        call public_636e2f0
        and dword ptr ds : [edi+0xC], ebp
        mov edi, dword ptr ds : [ebx]
        add esp, 0xC
        add ebx, 4
        test edi, edi
        jne public_6371531
        public_6371557 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6371648
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6371648
        mov ebp, 1
        public_637157c : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, 0x1000000
        je public_63715a5
        and eax, 0xFFFFFF
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
/*FIXUP push offset public_63efbfc @0x6371590*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efbfc
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], ebp
        public_63715a5 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi]
        or eax, 0x1000000
        push ecx
        mov dword ptr ds : [edi+0xC], eax
        call public_636ec10
        mov edx, dword ptr ds : [public_658b24c]
        add esp, 4
        dec edx
        cmp eax, edx
        je public_63715ea
        mov edx, dword ptr ds : [edi+4]
        push eax
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [edx+0x4C]
        push ecx
        push eax
/*FIXUP push offset public_63efba8 @0x63715d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efba8
        call public_6356960
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], ebp
        public_63715ea : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, esi
        jne public_63715f4
        mov ebx, dword ptr ds : [edi+8]
        public_63715f4 : nop
        or dword ptr ds : [ebx+0x50], 0x2000
        mov ecx, dword ptr ds : [esi+0x3C]
        push ebx
        push ecx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6371633
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        and edx, 0xFFFFFF
        push edx
        push eax
        push ecx
/*FIXUP push offset public_63efb48 @0x637161e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efb48
        call public_6356960
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], ebp
        public_6371633 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax]
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        jne public_637157c
        public_6371648 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x10
        mov eax, dword ptr ds : [esi+0x3C]
        jne public_6371888
        test eax, eax
        je public_637190a
        mov ebp, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ebp, ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x2C], eax
        je public_637190a
        public_6371678 : nop
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 0x20
        jne public_63716a1
        mov edx, dword ptr ss : [ebp+0x4C]
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63efaf0 @0x6371688*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efaf0
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x10], 1
        public_63716a1 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        mov edx, dword ptr ds : [esi+0x34]
        push ecx
        push edx
        call public_6374590
        push eax
        mov dword ptr ss : [esp+0x30], eax
        call public_636edf0
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 0xC
        test ecx, ecx
        je public_63716e0
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        test eax, eax
        je public_63716e0
        mov edx, 0xFCFFFFFF
        public_63716d4 : nop
        and dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63716d4
        public_63716e0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        je public_6371706
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        test eax, eax
        je public_6371706
        mov edx, 0x1000000
        public_63716fa : nop
        or dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63716fa
        public_6371706 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_63717ad
        mov ebx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_63717ad
        public_6371726 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, esi
        jne public_6371730
        mov eax, dword ptr ds : [ebx+8]
        public_6371730 : nop
        cmp ebp, eax
        jne public_6371794
        mov ebp, dword ptr ds : [ebx]
        test ebp, ebp
        je public_6371794
        mov edi, dword ptr ss : [ebp+4]
        add ebp, 4
        add ebp, 4
        test edi, edi
        je public_6371794
        public_6371747 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, 0x1000000
        jne public_6371783
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        mov edx, dword ptr ds : [ebx+0xC]
        push ecx
        and edx, 0xFFFFFF
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63efa9c @0x637176d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efa9c
        call public_6356960
        push ebx
        push esi
        push 5
        call public_6378600
        add esp, 0x20
        public_6371783 : nop
        or dword ptr ds : [edi+0x14], 0x2000000
        mov edi, dword ptr ss : [ebp]
        add ebp, 4
        test edi, edi
        jne public_6371747
        public_6371794 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x20]
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6371726
        public_63717ad : nop
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        jne public_637185d
        mov ebx, dword ptr ss : [esp+0x24]
        test ebx, ebx
        je public_637185d
        mov edi, dword ptr ds : [ebx+4]
        add ebx, 4
        add ebx, 4
        test edi, edi
        je public_637185d
        public_63717d6 : nop
        mov eax, dword ptr ds : [edi+0x14]
        test eax, 0x2000000
        jne public_6371850
        cmp dword ptr ds : [public_658b078], 3
        jge public_63717f3
        mov ecx, dword ptr ds : [public_658b0a8]
        test ecx, ecx
        jne public_6371850
        public_63717f3 : nop
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ss : [ebp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x4C]
        push edx
        push ecx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63efa10 @0x6371808*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63efa10
        call public_6356960
        mov eax, dword ptr ds : [public_658b05c]
        add esp, 0x14
        test eax, eax
        jne public_6371850
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        jne public_6371850
        push edi
        push 0
        push ebp
        push esi
/*FIXUP push offset public_63ee94c @0x637182c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        mov eax, dword ptr ds : [public_658b0a8]
        add esp, 0x14
        test eax, eax
        jne public_6371850
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0xC
        public_6371850 : nop
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_63717d6
        public_637185d : nop
        lea edx, ss:[esp+0x24]
        push edx
        call public_636ecc0
        mov eax, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        add esp, 4
        test ebp, ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6371678
        jmp public_637190a
        public_6371888 : nop
        test eax, eax
        je public_637190a
        mov ebx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        je public_637190a
        public_637189d : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 0x10
        je public_63718f9
        mov edx, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx+0x3C]
        sub edi, edx
        push esi
        sub edi, 8
        push eax
        sar edi, 2
        call public_636e800
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edx, dword ptr ds : [esi+0x34]
        mov ebp, eax
        push ebp
        push ecx
        push edi
        push edx
        call public_636e6e0
        add esp, 0x18
        test eax, eax
        jne public_63718f9
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push ebp
        push eax
        push edi
        push ecx
/*FIXUP push offset public_63ef9b0 @0x63718e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef9b0
        call public_6356960
        add esp, 0x14
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x10], 1
        public_63718f9 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_637189d
        public_637190a : nop
        cmp dword ptr ds : [public_658b24c], 5
        jge public_63719d7
        cmp dword ptr ds : [public_658b078], 2
        jg public_637192d
        mov eax, dword ptr ds : [public_658b03c]
        test eax, eax
        je public_63719d7
        public_637192d : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_63719d7
        mov edi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jle public_63719d7
        mov ecx, 1
        mov dword ptr ss : [esp+0x2C], ecx
        public_6371959 : nop
        cmp ecx, eax
        jge public_63719c4
        sub eax, ecx
        lea ebp, ds:[ecx*4+4]
        mov dword ptr ss : [esp+0x30], eax
        public_637196a : nop
        mov edx, dword ptr ds : [esi+0x38]
        mov ebx, dword ptr ds : [edx+ebp]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi]
        push eax
        push ecx
        call public_636e610
        add esp, 8
        test eax, eax
        je public_63719ae
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [edi+0xC]
        and edx, 0xFFFFFF
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63ef974 @0x6371995*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef974
        call public_6356960
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], 1
        public_63719ae : nop
        mov eax, dword ptr ss : [esp+0x30]
        add ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x30], eax
        jne public_637196a
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x20]
        public_63719c4 : nop
        mov edx, dword ptr ds : [esi+0x38]
        mov edi, dword ptr ds : [edx+ecx*4+4]
        inc ecx
        lea edx, ds:[ecx-1]
        cmp edx, eax
        mov dword ptr ss : [esp+0x2C], ecx
        jl public_6371959
        public_63719d7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6371a03
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        push 0
        push eax
        push ecx
        push esi
/*FIXUP push offset public_63ee94c @0x63719ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        mov edx, dword ptr ss : [esp+0x48]
        add esp, 0x14
        mov dword ptr ds : [edx], 1
        public_6371a03 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6371200)
    }
}

#undef public_6371240
#undef public_637125e
#undef public_6371266
#undef public_63712db
#undef public_6371315
#undef public_637132e
#undef public_6371351
#undef public_63713c8
#undef public_63713de
#undef public_6371400
#undef public_637141d
#undef public_637142c
#undef public_6371449
#undef public_6371451
#undef public_6371465
#undef public_637146f
#undef public_637148a
#undef public_637149a
#undef public_63714b3
#undef public_63714e3
#undef public_6371508
#undef public_6371518
#undef public_6371531
#undef public_6371557
#undef public_637157c
#undef public_63715a5
#undef public_63715ea
#undef public_63715f4
#undef public_6371633
#undef public_6371648
#undef public_6371678
#undef public_63716a1
#undef public_63716d4
#undef public_63716e0
#undef public_63716fa
#undef public_6371706
#undef public_6371726
#undef public_6371730
#undef public_6371747
#undef public_6371783
#undef public_6371794
#undef public_63717ad
#undef public_63717d6
#undef public_63717f3
#undef public_6371850
#undef public_637185d
#undef public_6371888
#undef public_637189d
#undef public_63718f9
#undef public_637190a
#undef public_637192d
#undef public_6371959
#undef public_637196a
#undef public_63719ae
#undef public_63719c4
#undef public_63719d7
#undef public_6371a03
