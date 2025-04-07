#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_637f470);
CLANG_FORWARD_PROC_SYMBOL(public_6383f50);

#define public_637f4d9 _public_637f4d9
#define public_637f4fa _public_637f4fa
#define public_637f501 _public_637f501
#define public_637f526 _public_637f526
#define public_637f534 _public_637f534
#define public_637f53f _public_637f53f
#define public_637f563 _public_637f563
#define public_637f570 _public_637f570
#define public_637f589 _public_637f589
#define public_637f5aa _public_637f5aa
#define public_637f5bc _public_637f5bc
#define public_637f5c2 _public_637f5c2
#define public_637f5ec _public_637f5ec
#define public_637f610 _public_637f610
#define public_637f61d _public_637f61d
#define public_637f636 _public_637f636
#define public_637f657 _public_637f657
#define public_637f669 _public_637f669
#define public_637f66f _public_637f66f
#define public_637f699 _public_637f699
#define public_637f6e9 _public_637f6e9
#define public_637f6f0 _public_637f6f0
#define public_637f6f5 _public_637f6f5
#define public_637f706 _public_637f706
#define public_637f735 _public_637f735
#define public_637f779 _public_637f779
#define public_637f780 _public_637f780
#define public_637f785 _public_637f785
#define public_637f796 _public_637f796
#define public_637f7bd _public_637f7bd
#define public_637f7c3 _public_637f7c3
#define public_637f7f2 _public_637f7f2
#define public_637f7fd _public_637f7fd
#define public_637f89d _public_637f89d
#define public_637f8e3 _public_637f8e3
#define public_637f91d _public_637f91d
#define public_637f955 _public_637f955
#define public_637f967 _public_637f967
#define public_637f96d _public_637f96d
#define public_637f993 _public_637f993
#define public_637f9ad _public_637f9ad
#define public_637f9d3 _public_637f9d3
#define public_637f9ed _public_637f9ed
#define public_637fa38 _public_637fa38
#define public_637faac _public_637faac
#define public_637fab7 _public_637fab7
#define public_637fae5 _public_637fae5
#define public_637fb58 _public_637fb58
#define public_637fb63 _public_637fb63
#define public_637fb6e _public_637fb6e

PROC_DECLARE(0x637f470, internal_637f470, public_637f470);
extern "C" NAKED register_t __cdecl internal_637f470()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_637fb6e
        mov eax, dword ptr ds : [public_658b8fc]
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b254]
        mov ebx, eax
        add ebx, ecx
        mov ecx, dword ptr ds : [public_658b900]
        push ecx
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b848]
        mov edx, dword ptr ds : [public_658b064]
        sub ecx, eax
        push edx
        mov dword ptr ss : [esp+0x20], ecx
        call public_6370570
        mov esi, dword ptr ds : [public_658b810]
        add esp, 0xC
        test esi, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_637f501
        public_637f4d9 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_637f501
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_637f4fa
        push eax
        call public_636ec10
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        public_637f4fa : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_637f4d9
        public_637f501 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov edx, dword ptr ds : [public_658b1f8]
        mov ecx, dword ptr ds : [public_658b1f4]
        jl public_637f526
        lea esi, ds:[ecx-1]
        cmp esi, eax
        je public_637f526
        or esi, 0xFFFFFFFF
        sub esi, edx
        cmp esi, eax
        je public_637f526
        dec ebx
        public_637f526 : nop
        test ecx, ecx
        mov esi, dword ptr ds : [public_63991e8]
        jne public_637f534
        test edx, edx
        je public_637f53f
/*FIXUP public_637f534 : nop
        push offset public_63f62d8 @0x637f534*/
  FIXUP public_637f534 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f62d8
        push edi
        call esi
        add esp, 8
        public_637f53f : nop
        mov eax, dword ptr ds : [public_658b228]
        test eax, eax
        je public_637f5ec
        mov eax, dword ptr ds : [public_658b21c]
        test eax, eax
        je public_637f563
        mov eax, dword ptr ds : [public_658b24c]
        push eax
        push ebx
/*FIXUP push offset public_63f628c @0x637f55c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f628c
        jmp public_637f570
        public_637f563 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        push ecx
        push ebx
/*FIXUP push offset public_63f6250 @0x637f56b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6250
        public_637f570 : nop
        push edi
        call esi
        mov eax, dword ptr ds : [public_658b028]
        add esp, 0x10
        test eax, eax
        mov eax, offset public_63f623c
        jne public_637f589
        mov eax, offset public_63997b0
        public_637f589 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
/*FIXUP push offset public_63f6218 @0x637f58f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6218
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        je public_637f5aa
        push eax
/*FIXUP push offset public_63f61f0 @0x637f5a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f61f0
        jmp public_637f5bc
        public_637f5aa : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp ebx, eax
        jle public_637f5c2
        mov ecx, eax
        sub ebx, ecx
        push ebx
/*FIXUP push offset public_63f61c0 @0x637f5b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f61c0
        public_637f5bc : nop
        push edi
        call esi
        add esp, 0xC
        public_637f5c2 : nop
        mov ecx, dword ptr ds : [public_658b850]
        push ecx
/*FIXUP push offset public_63f619c @0x637f5c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f619c
        push edi
        call esi
        mov edx, dword ptr ds : [public_658b844]
        mov eax, dword ptr ds : [public_658b824]
        add esp, 0xC
        sub edx, eax
        push edx
/*FIXUP push offset public_63f617c @0x637f5e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f617c
        jmp public_637f7bd
        public_637f5ec : nop
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_637f699
        mov eax, dword ptr ds : [public_658b21c]
        test eax, eax
        je public_637f610
        mov eax, dword ptr ds : [public_658b24c]
        push eax
        push ebx
/*FIXUP push offset public_63f6128 @0x637f609*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6128
        jmp public_637f61d
        public_637f610 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        push ecx
        push ebx
/*FIXUP push offset public_63f60e4 @0x637f618*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f60e4
        public_637f61d : nop
        push edi
        call esi
        mov eax, dword ptr ds : [public_658b028]
        add esp, 0x10
        test eax, eax
        mov eax, offset public_63f623c
        jne public_637f636
        mov eax, offset public_63997b0
        public_637f636 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
/*FIXUP push offset public_63f60c4 @0x637f63c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f60c4
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test eax, eax
        je public_637f657
        push eax
/*FIXUP push offset public_63f61f0 @0x637f650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f61f0
        jmp public_637f669
        public_637f657 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp ebx, eax
        jle public_637f66f
        mov ecx, eax
        sub ebx, ecx
        push ebx
/*FIXUP push offset public_63f61c0 @0x637f664*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f61c0
        public_637f669 : nop
        push edi
        call esi
        add esp, 0xC
        public_637f66f : nop
        mov ecx, dword ptr ds : [public_658b850]
        push ecx
/*FIXUP push offset public_63f60a0 @0x637f676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f60a0
        push edi
        call esi
        mov edx, dword ptr ds : [public_658b844]
        mov eax, dword ptr ds : [public_658b824]
        add esp, 0xC
        sub edx, eax
        push edx
/*FIXUP push offset public_63f617c @0x637f68f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f617c
        jmp public_637f7bd
        public_637f699 : nop
        mov eax, dword ptr ds : [public_658b074]
        test eax, eax
        je public_637f735
        mov eax, dword ptr ds : [public_658b24c]
        push eax
        push ebx
/*FIXUP push offset public_63f605c @0x637f6ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f605c
        push edi
        call esi
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0x10
        push ecx
/*FIXUP push offset public_63f6030 @0x637f6bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6030
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test eax, eax
        je public_637f706
        mov eax, dword ptr ds : [public_658b084]
        test eax, eax
        je public_637f6f0
        mov eax, dword ptr ds : [public_658b080]
        test eax, eax
        je public_637f6e9
        mov eax, offset public_63f6018
        jmp public_637f6f5
        public_637f6e9 : nop
        mov eax, offset public_63f600c
        jmp public_637f6f5
        public_637f6f0 : nop
        mov eax, offset public_63f6004
        public_637f6f5 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
/*FIXUP push offset public_63f5fe4 @0x637f6fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5fe4
        push edi
        call esi
        add esp, 0x10
        public_637f706 : nop
        mov eax, dword ptr ds : [public_658b844]
        sub eax, dword ptr ds : [public_658b824]
        push eax
/*FIXUP push offset public_63f5fbc @0x637f712*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5fbc
        push edi
        call esi
        mov eax, dword ptr ds : [public_658b850]
        add esp, 0xC
        test eax, eax
        je public_637f7c3
        push eax
/*FIXUP push offset public_63f5f94 @0x637f72b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5f94
        jmp public_637f7bd
        public_637f735 : nop
        mov ecx, dword ptr ds : [public_658b24c]
        push ecx
        push ebx
/*FIXUP push offset public_63f5f6c @0x637f73d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5f6c
        push edi
        call esi
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0x10
        push edx
/*FIXUP push offset public_63f5f50 @0x637f74d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5f50
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test eax, eax
        je public_637f796
        mov eax, dword ptr ds : [public_658b084]
        test eax, eax
        je public_637f780
        mov eax, dword ptr ds : [public_658b080]
        test eax, eax
        je public_637f779
        mov eax, offset public_63f5f38
        jmp public_637f785
        public_637f779 : nop
        mov eax, offset public_63f5f2c
        jmp public_637f785
        public_637f780 : nop
        mov eax, offset public_63f5f20
        public_637f785 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push eax
/*FIXUP push offset public_63f5f04 @0x637f78b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5f04
        push edi
        call esi
        add esp, 0x10
        public_637f796 : nop
        mov edx, dword ptr ds : [public_658b844]
        sub edx, dword ptr ds : [public_658b824]
        push edx
/*FIXUP push offset public_63f5eec @0x637f7a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5eec
        push edi
        call esi
        mov eax, dword ptr ds : [public_658b850]
        add esp, 0xC
        test eax, eax
        je public_637f7c3
        push eax
/*FIXUP push offset public_63f5ecc @0x637f7b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ecc
        public_637f7bd : nop
        push edi
        call esi
        add esp, 0xC
/*FIXUP public_637f7c3 : nop
        push offset public_658b268 @0x637f7c3*/
  FIXUP public_637f7c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
/*FIXUP push offset public_658b368 @0x637f7c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b368
/*FIXUP push offset public_63f5eb0 @0x637f7cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5eb0
        push edi
        call esi
        mov eax, dword ptr ds : [public_658b1d8]
        add esp, 0x10
        cmp eax, 0x80000000
        je public_637f7f2
        push eax
/*FIXUP push offset public_63f5ea8 @0x637f7e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ea8
        push edi
        call esi
        add esp, 0xC
        jmp public_637f7fd
/*FIXUP public_637f7f2 : nop
        push offset public_63ee778 @0x637f7f2*/
  FIXUP public_637f7f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee778
        push edi
        call esi
        add esp, 8
        public_637f7fd : nop
        mov eax, dword ptr ds : [public_658be90]
        push eax
/*FIXUP push offset public_63f5e84 @0x637f803*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5e84
        push edi
        call esi
        mov ecx, dword ptr ds : [public_658bf38]
        add esp, 0xC
        push ecx
/*FIXUP push offset public_63f5e5c @0x637f815*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5e5c
        push edi
        call esi
        mov edx, dword ptr ds : [public_658be28]
        mov eax, dword ptr ds : [public_658be40]
        mov ecx, dword ptr ds : [public_658be58]
        mov ebx, dword ptr ds : [public_658be50]
        add eax, edx
        add eax, ecx
        add esp, 0xC
        add eax, ebx
        push eax
/*FIXUP push offset public_63f5e30 @0x637f83e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5e30
        push edi
        call esi
        mov eax, dword ptr ds : [public_658baf8]
        mov edx, dword ptr ds : [public_658bb00]
        mov ecx, dword ptr ds : [public_658bf58]
        sub eax, edx
        add esp, 0xC
        add eax, ecx
        je public_637f89d
        push eax
/*FIXUP push offset public_63f5e10 @0x637f861*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5e10
        push edi
        call esi
        mov ecx, dword ptr ds : [public_658bb58]
        mov edx, dword ptr ds : [public_658bb90]
        mov ebx, dword ptr ds : [public_658bb60]
        mov eax, dword ptr ds : [public_658ba58]
        add edx, ecx
        mov ecx, dword ptr ds : [public_658ba60]
        add edx, ebx
        add edx, ecx
        add esp, 0xC
        add edx, eax
        push edx
/*FIXUP push offset public_63f5de4 @0x637f892*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5de4
        push edi
        call esi
        add esp, 0xC
        public_637f89d : nop
        mov eax, dword ptr ds : [public_658b1c8]
        test eax, eax
        jne public_637f8e3
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        je public_637f8e3
        mov eax, dword ptr ds : [public_658b860]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0
        fild qword ptr ss : [esp+0x18]
        fst qword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp qword ptr ds : [public_658bae8]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
/*FIXUP push offset public_63f5db0 @0x637f8d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5db0
        push edi
        call esi
        add esp, 0x10
        public_637f8e3 : nop
        mov eax, dword ptr ds : [public_658b1d4]
        test eax, eax
        je public_637f91d
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_637f96d
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_637f96d
        fild dword ptr ds : [public_658bec0]
        sub esp, 8
        fmul qword ptr ds : [public_63a59b0]
        fidiv dword ptr ds : [public_658b868]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63f5d7c @0x637f916*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5d7c
        jmp public_637f967
        public_637f91d : nop
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637f96d
        mov eax, dword ptr ds : [public_658bec0]
        test eax, eax
        je public_637f955
        mov ecx, dword ptr ds : [public_658b87c]
        mov edx, dword ptr ds : [public_658b878]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f5d4c @0x637f948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5d4c
        push edi
        call esi
        add esp, 0x14
        jmp public_637f96d
        public_637f955 : nop
        mov eax, dword ptr ds : [public_658b87c]
        mov ecx, dword ptr ds : [public_658b878]
        push eax
        push ecx
/*FIXUP push offset public_63f5d30 @0x637f962*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5d30
        public_637f967 : nop
        push edi
        call esi
        add esp, 0x10
        public_637f96d : nop
        fld qword ptr ds : [public_658b8d0]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        jne public_637f9ad
        mov eax, dword ptr ds : [public_658bf58]
        test eax, eax
        mov eax, offset public_63f5d24
        jne public_637f993
        mov eax, offset public_63f5d1c
        public_637f993 : nop
        mov edx, dword ptr ds : [public_658b8d4]
        mov ecx, dword ptr ds : [public_658b8d0]
        push edx
        push ecx
        push eax
/*FIXUP push offset public_63f5d00 @0x637f9a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5d00
        push edi
        call esi
        add esp, 0x14
        public_637f9ad : nop
        fld qword ptr ds : [public_658b8d8]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        jne public_637f9ed
        mov eax, dword ptr ds : [public_658bf58]
        test eax, eax
        mov eax, offset public_63f5d24
        jne public_637f9d3
        mov eax, offset public_63f5d1c
        public_637f9d3 : nop
        mov edx, dword ptr ds : [public_658b8dc]
        mov ecx, dword ptr ds : [public_658b8d8]
        push edx
        push ecx
        push eax
/*FIXUP push offset public_63f5ce4 @0x637f9e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ce4
        push edi
        call esi
        add esp, 0x14
        public_637f9ed : nop
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        je public_637fb63
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push 0
        call public_6383f50
        fld qword ptr ds : [public_658b6a0]
        fadd st(0), st
        add esp, 0xC
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        je public_637fab7
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        mov eax, offset public_63997b0
        jne public_637fa38
        mov eax, offset public_63f5cdc
        public_637fa38 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f5ca8 @0x637fa43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ca8
        push edi
        call esi
        fld qword ptr ds : [public_658b700]
        fadd qword ptr ds : [public_658b6a0]
        add esp, 0x14
        fdivr qword ptr ss : [esp+0x20]
        fst qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_63a59a8]
        fnstsw ax
        test ah, 0x41
        jne public_637faac
        fld qword ptr ds : [public_658b700]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 0x41
        jne public_637faac
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_637faac
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
/*FIXUP push offset public_63f5c9c @0x637fa9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5c9c
        push edi
        call esi
        add esp, 0x10
        jmp public_637fab7
/*FIXUP public_637faac : nop
        push offset public_63edccc @0x637faac*/
  FIXUP public_637faac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call esi
        add esp, 8
        public_637fab7 : nop
        fld qword ptr ds : [public_658b6a0]
        fmul qword ptr ds : [public_63a5928]
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_637fb63
        mov eax, dword ptr ds : [public_658b8cc]
        test eax, eax
        mov eax, offset public_63997b0
        jne public_637fae5
        mov eax, offset public_63f5cdc
        public_637fae5 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        push ecx
        push eax
/*FIXUP push offset public_63f5c68 @0x637faf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5c68
        push edi
        call esi
        fld qword ptr ds : [public_658b700]
        fadd qword ptr ds : [public_658b6a0]
        add esp, 0x14
        fdivr qword ptr ss : [esp+0x28]
        fchs 
        fst qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_63a59a8]
        fnstsw ax
        test ah, 0x41
        jne public_637fb58
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 0x41
        jne public_637fb58
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
/*FIXUP push offset public_63f5c9c @0x637fb3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5c9c
        push edi
        call esi
        add esp, 0x10
/*FIXUP push offset public_63edccc @0x637fb46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
/*FIXUP public_637fb58 : nop
        push offset public_63edccc @0x637fb58*/
  FIXUP public_637fb58 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call esi
        add esp, 8
/*FIXUP public_637fb63 : nop
        push offset public_63edccc @0x637fb63*/
  FIXUP public_637fb63 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call esi
        add esp, 8
        public_637fb6e : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x637f470)
    }
}

#undef public_637f4d9
#undef public_637f4fa
#undef public_637f501
#undef public_637f526
#undef public_637f534
#undef public_637f53f
#undef public_637f563
#undef public_637f570
#undef public_637f589
#undef public_637f5aa
#undef public_637f5bc
#undef public_637f5c2
#undef public_637f5ec
#undef public_637f610
#undef public_637f61d
#undef public_637f636
#undef public_637f657
#undef public_637f669
#undef public_637f66f
#undef public_637f699
#undef public_637f6e9
#undef public_637f6f0
#undef public_637f6f5
#undef public_637f706
#undef public_637f735
#undef public_637f779
#undef public_637f780
#undef public_637f785
#undef public_637f796
#undef public_637f7bd
#undef public_637f7c3
#undef public_637f7f2
#undef public_637f7fd
#undef public_637f89d
#undef public_637f8e3
#undef public_637f91d
#undef public_637f955
#undef public_637f967
#undef public_637f96d
#undef public_637f993
#undef public_637f9ad
#undef public_637f9d3
#undef public_637f9ed
#undef public_637fa38
#undef public_637faac
#undef public_637fab7
#undef public_637fae5
#undef public_637fb58
#undef public_637fb63
#undef public_637fb6e
