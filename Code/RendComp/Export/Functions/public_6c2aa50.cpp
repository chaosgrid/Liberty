#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2aa50);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2ab1b _public_6c2ab1b
#define public_6c2ab23 _public_6c2ab23
#define public_6c2ab54 _public_6c2ab54
#define public_6c2abdd _public_6c2abdd
#define public_6c2abe4 _public_6c2abe4
#define public_6c2abe8 _public_6c2abe8
#define public_6c2abef _public_6c2abef
#define public_6c2abf7 _public_6c2abf7
#define public_6c2ac2f _public_6c2ac2f
#define public_6c2aca0 _public_6c2aca0
#define public_6c2ad31 _public_6c2ad31
#define public_6c2ad5c _public_6c2ad5c
#define public_6c2ad64 _public_6c2ad64
#define public_6c2ada5 _public_6c2ada5
#define public_6c2ada9 _public_6c2ada9
#define public_6c2adce _public_6c2adce
#define public_6c2ade0 _public_6c2ade0
#define public_6c2adff _public_6c2adff
#define public_6c2ae0c _public_6c2ae0c
#define public_6c2ae95 _public_6c2ae95
#define public_6c2aeb0 _public_6c2aeb0
#define public_6c2aecb _public_6c2aecb
#define public_6c2aedf _public_6c2aedf

PROC_DECLARE(0x6c2aa50, internal_6c2aa50, public_6c2aa50);
extern "C" NAKED register_t __cdecl internal_6c2aa50()
{
    __asm
    {
        sub esp, 0x1D8
        push ebp
        mov ebp, dword ptr ss : [esp+0x1E0]
        push esi
        push edi
        mov esi, ecx
/*FIXUP push offset public_6c374f0 @0x6c2aa62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c374f0
        mov dword ptr ds : [esi+0x10], 0x3F800000
        mov eax, dword ptr ss : [ebp]
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        or edi, 0xFFFFFFFF
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6c2aedf
        push ebx
        lea edx, ss:[esp+0x1C]
        xor eax, eax
        mov dword ptr ss : [esp+0x20], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x24]
        rep stosd
        mov ecx, dword ptr ss : [ebp]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x34], 0x80000000
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x44], 0x8000080
        mov dword ptr ss : [esp+0x30], offset public_6c374e8
        mov dword ptr ss : [esp+0x24], 0x34
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        xor ebx, ebx
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c2ab23
        mov eax, dword ptr ss : [ebp]
        push ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        push 4
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6c2abdd
        cmp dword ptr ss : [esp+0x10], 4
        jne public_6c2abdd
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, 1
        mov dword ptr ds : [esi+0xC], eax
        public_6c2ab1b : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ebp
        call dword ptr ds : [ecx+0x10]
        public_6c2ab23 : nop
        xor edx, edx
        test ebx, ebx
        setne dl
        dec edx
        test edx, 0x80004005
        jge public_6c2ab54
/*FIXUP push offset public_6c374ac @0x6c2ab33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c374ac
        push 0x5F
/*FIXUP push offset public_6c37450 @0x6c2ab3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37450
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c2ab44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6c2ab54 : nop
        lea edx, ss:[esp+0x1C]
        xor eax, eax
        mov dword ptr ss : [esp+0x20], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x24]
        rep stosd
        mov ecx, dword ptr ss : [ebp]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x34], 0x80000000
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x44], 0x8000080
        mov dword ptr ss : [esp+0x30], offset public_6c37444
        mov dword ptr ss : [esp+0x24], 0x34
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        xor ebx, ebx
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c2abf7
        mov eax, dword ptr ss : [ebp]
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        push 4
        lea edx, ss:[esp+0x1C]
        push edx
        push edi
        push ebp
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6c2abe4
        cmp dword ptr ss : [esp+0x14], 4
        jne public_6c2abe4
        mov ebx, 1
        jmp public_6c2abe8
        public_6c2abdd : nop
        xor ebx, ebx
        jmp public_6c2ab1b
        public_6c2abe4 : nop
        xor ebx, ebx
        jmp public_6c2abef
        public_6c2abe8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], eax
        public_6c2abef : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ebp
        call dword ptr ds : [ecx+0x10]
        public_6c2abf7 : nop
        xor edx, edx
        test ebx, ebx
        setne dl
        dec edx
        test edx, 0x80004005
        jge public_6c2ac2f
/*FIXUP push offset public_6c37408 @0x6c2ac07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37408
        push 0x63
/*FIXUP push offset public_6c37450 @0x6c2ac0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37450
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c2ac18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        mov eax, dword ptr ds : [public_6c36010]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov dword ptr ds : [esi+8], 0
        public_6c2ac2f : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6c2aeb0
        lea ecx, ds:[eax*4]
        push ecx
        call public_6c34eac
        mov ecx, dword ptr ds : [esi+8]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        xor eax, eax
        mov dword ptr ds : [esi+4], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [esi+8]
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi+8]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        xor eax, eax
        mov dword ptr ds : [esi+0x14], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        xor ebx, ebx
        test eax, eax
        jbe public_6c2ade0
        lea esp, ss:[esp]
        public_6c2aca0 : nop
        push ebx
        lea eax, ss:[esp+0xE8]
/*FIXUP push offset public_6c37404 @0x6c2aca8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37404
        push eax
        call dword ptr ds : [public_6c36054]
        mov edx, dword ptr ss : [ebp]
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x30]
        rep stosd
        add esp, 0xC
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0xE8]
        push ebp
        mov dword ptr ss : [esp+0x34], 0x80000000
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x44], 0x8000080
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x24], 0x34
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        xor edi, edi
        call dword ptr ds : [edx+0x7C]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6c2ad64
        mov ecx, dword ptr ss : [ebp]
        push edi
        push esi
        push ebp
        call dword ptr ds : [ecx+0x28]
        cmp eax, 0x3F
        mov edi, eax
        jb public_6c2ad31
        mov edi, 0x3F
        public_6c2ad31 : nop
        mov edx, dword ptr ss : [ebp]
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        lea ecx, ss:[esp+0x70]
        push ecx
        push esi
        push ebp
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6c2ada5
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jne public_6c2ada5
        mov edi, 1
        mov byte ptr ss : [esp+eax+0x64], 0
        public_6c2ad5c : nop
        mov edx, dword ptr ss : [ebp]
        push esi
        push ebp
        call dword ptr ds : [edx+0x10]
        public_6c2ad64 : nop
        xor eax, eax
        test edi, edi
        setne al
        dec eax
        test eax, 0x80004005
        jge public_6c2ada9
        mov ecx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c373b8 @0x6c2ad79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c373b8
        push 0x78
/*FIXUP push offset public_6c37450 @0x6c2ad80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37450
        mov eax, 0x100002
/*FIXUP push offset public_6c3719c @0x6c2ad8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push eax
        call dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx+0x14]
        add esp, 0x14
        mov dword ptr ds : [eax+ebx*4], 0
        jmp public_6c2adce
        public_6c2ada5 : nop
        xor edi, edi
        jmp public_6c2ad5c
        public_6c2ada9 : nop
        lea ecx, ss:[esp+0x64]
        push ecx
        call dword ptr ds : [public_6c36080]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [edx+ebx*4], eax
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [eax+ebx*4]
        push ecx
        call dword ptr ds : [public_6c3607c]
        add esp, 8
        public_6c2adce : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+8]
        inc ebx
        cmp ebx, eax
        jb public_6c2aca0
        mov esi, edx
        public_6c2ade0 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ss : [esp+0x1F8]
        cmp eax, edi
        je public_6c2ae0c
        test eax, eax
        je public_6c2adff
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x18], 0
        public_6c2adff : nop
        test edi, edi
        mov dword ptr ds : [esi+0x18], edi
        je public_6c2ae0c
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6c2ae0c : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xC]
        cmp dword ptr ds : [esi+8], 6
        jbe public_6c2aeb0
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [ecx+0x18]
        test ebx, ebx
        je public_6c2aeb0
        mov edx, dword ptr ds : [ebx]
        push 0x80
        lea eax, ss:[esp+0x68]
        push eax
        push ebx
        call dword ptr ds : [edx+0x34]
        mov edi, offset public_6c373a0
        lea esi, ss:[esp+0x64]
        mov ecx, 0x13
        xor edx, edx
        repe cmpsb
        jne public_6c2aeb0
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [eax+0x40]
        cmp dword ptr ss : [esp+0x10], 8
        jbe public_6c2aeb0
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x50]
        push eax
        push 8
        xor esi, esi
        push ebx
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0x60], esi
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ss : [esp+0x50]
        sub eax, 5
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+0x10], ecx
        je public_6c2ae95
        dec eax
        je public_6c2aecb
        dec eax
        jne public_6c2aeb0
        public_6c2ae95 : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, esi
        je public_6c2aeb0
        push eax
        push 0
        call dword ptr ds : [public_6c36018]
        push eax
        call dword ptr ds : [public_6c3601c]
        lea ecx, ds:[ecx]
        public_6c2aeb0 : nop
        mov edx, dword ptr ss : [ebp]
/*FIXUP push offset public_6c37250 @0x6c2aeb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37250
        push ebp
        call dword ptr ds : [edx+0x60]
        pop ebx
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x1D8
        ret 0x10
        public_6c2aecb : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, esi
        mov dword ptr ss : [esp+0x54], esi
        je public_6c2aeb0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6c2aeb0
        public_6c2aedf : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        add esp, 0x1D8
        ret 0x10
        UNREACHABLE_TRAP(0x6c2aa50)
    }
}

#undef public_6c2ab1b
#undef public_6c2ab23
#undef public_6c2ab54
#undef public_6c2abdd
#undef public_6c2abe4
#undef public_6c2abe8
#undef public_6c2abef
#undef public_6c2abf7
#undef public_6c2ac2f
#undef public_6c2aca0
#undef public_6c2ad31
#undef public_6c2ad5c
#undef public_6c2ad64
#undef public_6c2ada5
#undef public_6c2ada9
#undef public_6c2adce
#undef public_6c2ade0
#undef public_6c2adff
#undef public_6c2ae0c
#undef public_6c2ae95
#undef public_6c2aeb0
#undef public_6c2aecb
#undef public_6c2aedf
