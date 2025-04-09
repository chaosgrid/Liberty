#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_427020);
CLANG_FORWARD_PROC_SYMBOL(public_490cd0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);

#define public_490f12 _public_490f12
#define public_490f44 _public_490f44
#define public_490f5a _public_490f5a
#define public_490f68 _public_490f68
#define public_490f6c _public_490f6c
#define public_490f90 _public_490f90
#define public_490f9a _public_490f9a
#define public_490f9c _public_490f9c
#define public_490fe0 _public_490fe0
#define public_490ff8 _public_490ff8
#define public_491004 _public_491004
#define public_491029 _public_491029
#define public_491040 _public_491040
#define public_491085 _public_491085
#define public_49109d _public_49109d
#define public_4910a9 _public_4910a9
#define public_4910ce _public_4910ce
#define public_4910e9 _public_4910e9

PROC_DECLARE(0x490cd0, internal_490cd0, public_490cd0);
extern "C" NAKED register_t __cdecl internal_490cd0()
{
    __asm
    {
        sub esp, 0x9C
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x834]
        test al, al
        jne public_4910e9
        push ebx
        push esi
        push edi
        push 1
        push 0
/*FIXUP push offset public_5d3c90 @0x490cee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c90
        lea ecx, ss:[ebp+0x350]
        mov byte ptr ss : [ebp+0x834], 1
        call public_59ec80
        push 1
        push 0
/*FIXUP push offset public_5d3c90 @0x490d09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c90
        lea ecx, ss:[ebp+0x378]
        call public_59ec80
        push 1
        push 0
/*FIXUP push offset public_5d3c58 @0x490d1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c58
        lea ecx, ss:[ebp+0x3A0]
        call public_59ec80
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x354]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ss:[ebp+0x81C]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov ecx, dword ptr ss : [ebp+0x354]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x18]
        rep movsd
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5ca220]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x18]
        push edx
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [ebp+0x354]
        fld dword ptr ss : [esp+0x28]
        push edx
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x354]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x3A4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov ecx, dword ptr ss : [ebp+0x3A4]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, 0xC
        lea edi, ss:[esp+0x18]
        rep movsd
        fld dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5d3c50]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fmul qword ptr ds : [public_5d3c48]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [ebp+0x3A4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x3A4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        xor ebx, ebx
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea esi, ss:[ebp+0x880]
/*FIXUP push offset public_5d3c10 @0x490eeb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c10
        mov ecx, esi
        call public_425b30
        mov edi, offset public_611c60
        cmp edi, offset public_611c84
        lea eax, ss:[ebp+0xB68]
        mov dword ptr ss : [esp+0x14], eax
        jge public_490f9a
        public_490f12 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], 0
        call public_427020
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, esi
        call public_420690
        test al, al
        je public_490f44
        mov eax, dword ptr ds : [esi+0x14]
        jmp public_490f5a
        public_490f44 : nop
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov ecx, esi
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], eax
        public_490f5a : nop
        cmp eax, dword ptr ds : [esi+4]
        je public_490f68
        lea ebx, ds:[eax+0x28]
        test ebx, ebx
        jne public_490f90
        jmp public_490f6c
        public_490f68 : nop
        mov ebx, dword ptr ss : [esp+0x64]
        public_490f6c : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x490f76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x490f80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_490f90 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ebx
        xor ebx, ebx
        jmp public_490f9c
        public_490f9a : nop
        mov dword ptr ds : [eax], ebx
        public_490f9c : nop
        add edi, 4
        add eax, 4
        cmp edi, offset public_611c84
        mov dword ptr ss : [esp+0x14], eax
        jl public_490f12
/*FIXUP push offset public_5d3bec @0x490fb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3bec
        lea ecx, ss:[esp+0x4C]
        xor edi, edi
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x50], 0
        call public_427020
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, esi
        call public_420690
        test al, al
        je public_490fe0
        mov eax, dword ptr ds : [esi+0x14]
        jmp public_490ff8
        public_490fe0 : nop
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_4206c0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], eax
        public_490ff8 : nop
        cmp eax, dword ptr ds : [esi+4]
        je public_491004
        lea edi, ds:[eax+0x28]
        test edi, edi
        jne public_491029
        public_491004 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d3bec @0x49100a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3bec
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x491014*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x49101e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_491029 : nop
        mov dword ptr ss : [ebp+0xBD0], edi
        xor eax, eax
        add ebp, 0xBD4
        mov dword ptr ss : [esp+0x14], ebp
        nop 
        lea esp, ss:[esp]
        public_491040 : nop
        lea ebp, ds:[eax+1]
        push ebp
        lea edx, ss:[esp+0x70]
/*FIXUP push offset public_5d3bd8 @0x491048*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3bd8
        push edx
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea eax, ss:[esp+0x6C]
        xor edi, edi
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], edi
        mov byte ptr ss : [esp+0x50], 0
        call public_427020
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, esi
        call public_420690
        test al, al
        je public_491085
        mov eax, dword ptr ds : [esi+0x14]
        jmp public_49109d
        public_491085 : nop
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_4206c0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], eax
        public_49109d : nop
        cmp eax, dword ptr ds : [esi+4]
        je public_4910a9
        lea edi, ds:[eax+0x28]
        test edi, edi
        jne public_4910ce
        public_4910a9 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x4910b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x4910c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4910ce : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edi
        mov eax, ebp
        add ecx, 4
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x14], ecx
        jl public_491040
        pop edi
        pop esi
        pop ebx
        public_4910e9 : nop
        pop ebp
        add esp, 0x9C
        ret 
        UNREACHABLE_TRAP(0x490cd0)
    }
}

#undef public_490f12
#undef public_490f44
#undef public_490f5a
#undef public_490f68
#undef public_490f6c
#undef public_490f90
#undef public_490f9a
#undef public_490f9c
#undef public_490fe0
#undef public_490ff8
#undef public_491004
#undef public_491029
#undef public_491040
#undef public_491085
#undef public_49109d
#undef public_4910a9
#undef public_4910ce
#undef public_4910e9
