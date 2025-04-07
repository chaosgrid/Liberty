#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc670);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc850);
CLANG_FORWARD_PROC_SYMBOL(public_6ecdc70);
CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ece990);
CLANG_FORWARD_PROC_SYMBOL(public_6eced00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ecc90b _public_6ecc90b
#define public_6ecc964 _public_6ecc964
#define public_6ecc990 _public_6ecc990
#define public_6ecca28 _public_6ecca28
#define public_6ecca60 _public_6ecca60
#define public_6ecca67 _public_6ecca67
#define public_6eccaf0 _public_6eccaf0
#define public_6eccaf7 _public_6eccaf7
#define public_6eccb5a _public_6eccb5a
#define public_6eccb6d _public_6eccb6d
#define public_6eccb96 _public_6eccb96
#define public_6eccbb4 _public_6eccbb4
#define public_6eccc66 _public_6eccc66
#define public_6eccc77 _public_6eccc77
#define public_6eccc8e _public_6eccc8e
#define public_6eccc92 _public_6eccc92
#define public_6eccc99 _public_6eccc99
#define public_6eccca7 _public_6eccca7

PROC_DECLARE(0x6ecc890, internal_6ecc890, public_6ecc890);
extern "C" NAKED register_t __cdecl internal_6ecc890()
{
    __asm
    {
        mov eax, 0x22D4
        call public_6ed0c70
        mov al, byte ptr ss : [esp+3]
        push ebp
        xor ebp, ebp
        push esi
        mov esi, dword ptr ss : [esp+0x22E4]
        cmp esi, ebp
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6ecc90b
        mov ecx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed5160 @0x6ecc8c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5160
        push 0x195
/*FIXUP push offset public_6ed50a0 @0x6ecc8d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed50a0
        mov eax, 0x100002
/*FIXUP push offset public_6ed49d0 @0x6ecc8db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed49d0
        push eax
        call dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6ed0c50
        add esp, 0x18
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], ebp
        call public_6ec38c0
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0x22D4
        ret 0xC
        public_6ecc90b : nop
        mov ecx, dword ptr ds : [public_6ed5054]
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push ecx
        push esi
        xor bl, bl
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6eccc92
/*FIXUP push offset public_6ed4094 @0x6ecc924*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
/*FIXUP push offset public_6ed5150 @0x6ecc929*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5150
        lea ecx, ss:[esp+0x74]
        call public_6eb15e0
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x6C]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ecc964
        mov ecx, dword ptr ds : [esi]
        push ebp
        lea edx, ss:[esp+0x3C]
        push edx
        push 4
        lea eax, ss:[esp+0x40]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6ecc964 : nop
        mov ecx, dword ptr ds : [public_6ed5058]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xA0]
        push eax
        push ecx
        push esi
        call dword ptr ds : [edx+0x48]
        mov ebx, dword ptr ss : [esp+0x22E8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x38], edi
        je public_6eccbb4
        nop 
        public_6ecc990 : nop
        cmp byte ptr ss : [esp+0xCC], 0x2E
        je public_6eccb96
        test byte ptr ss : [esp+0xA0], 0x10
        je public_6eccb96
        lea edx, ss:[esp+0xCC]
        push edx
        call dword ptr ds : [public_6ed1000]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_6ecc4e0
        cmp eax, ebp
        jne public_6eccb6d
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xCC]
        push edx
        push esi
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_6eccb96
        mov eax, dword ptr ds : [public_6ed505c]
/*FIXUP push offset public_6ed4094 @0x6ecc9f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4094
        push eax
        lea ecx, ss:[esp+0x74]
        call public_6eb15e0
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x6C]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6ecca67
        mov eax, dword ptr ds : [esi]
        push 0
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        cmp eax, 0x103
        mov ebp, eax
        jb public_6ecca28
        mov ebp, 0x103
        public_6ecca28 : nop
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x38]
        push edx
        push ebp
        lea eax, ss:[esp+0x1EC]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6eccaf0
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, ebp
        jne public_6eccaf0
        mov ebp, 1
        mov byte ptr ss : [esp+eax+0x1E0], 0
        public_6ecca60 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6ecca67 : nop
        xor edx, edx
        test ebp, ebp
        setne dl
        dec edx
        test edx, 0x80004005
        jl public_6eccb5a
        mov eax, dword ptr ds : [ebx]
        push 0
        push 1
        lea ecx, ss:[esp+0x1E8]
        push ecx
        lea edx, ss:[esp+0xD8]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x68]
        mov edi, eax
        test edi, edi
        je public_6eccb5a
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        jl public_6eccaf7
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xCC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+0x22F0]
        test eax, eax
        je public_6eccb5a
        inc dword ptr ds : [edi]
        mov edi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6ece6e0
        jmp public_6eccb5a
        public_6eccaf0 : nop
        xor ebp, ebp
        jmp public_6ecca60
        public_6eccaf7 : nop
        lea edx, ss:[esp+0x1E0]
        push edx
        lea eax, ss:[esp+0xD0]
        push eax
        lea ecx, ss:[esp+0x2EC]
/*FIXUP push offset public_6ed5124 @0x6eccb0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5124
        push ecx
        call public_6eb22b0
        mov edx, dword ptr ds : [public_6ed1004]
        push eax
        push 0x1C1
/*FIXUP push offset public_6ed50a0 @0x6eccb25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed50a0
        mov ecx, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6eccb2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push ecx
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0xF0]
        add esp, 0x24
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push 0
        push ebx
        mov dword ptr ss : [esp+0x3C], ecx
        call dword ptr ds : [edx+0x48]
        public_6eccb5a : nop
        mov ecx, dword ptr ds : [esi]
/*FIXUP push offset public_6ed4ce4 @0x6eccb5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce4
        push esi
        call dword ptr ds : [ecx+0x60]
        mov edi, dword ptr ss : [esp+0x38]
        xor ebp, ebp
        jmp public_6eccb96
        public_6eccb6d : nop
        cmp dword ptr ss : [esp+0x22F0], ebp
        je public_6eccb96
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6ece6e0
        public_6eccb96 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xA0]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6ecc990
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x50]
        public_6eccbb4 : nop
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_6ed4ce4 @0x6eccbb6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ce4
        push esi
        call dword ptr ds : [edx+0x60]
        mov edi, dword ptr ss : [esp+0x22F0]
        cmp edi, ebp
        je public_6eccc8e
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6ec38a0
        mov ecx, dword ptr ds : [ebx+0x3C]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x54], ecx
        push edx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x44], ebp
        call public_6ecc670
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ds:[ebx+0x28]
        call public_6ece990
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6eced00
        mov ebp, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x58]
        call public_6ecc850
        lea ecx, ss:[esp+0x40]
        call public_6ecc850
        mov ecx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x18]
        push ecx
        call public_6ed0c50
        add esp, 4
        test esi, esi
        mov dword ptr ss : [ebp+0x10], 0
        je public_6eccc77
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, esi
        mov edx, eax
        public_6eccc66 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eccc66
        mov edi, dword ptr ss : [esp+0x22F0]
        public_6eccc77 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[ebp+0x14]
        call public_6ecdc70
        mov eax, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [edi], eax
        inc dword ptr ds : [ebx+0x3C]
        xor ebp, ebp
        public_6eccc8e : nop
        mov bl, 1
        jmp public_6eccc99
        public_6eccc92 : nop
        mov edi, dword ptr ss : [esp+0x22F0]
        public_6eccc99 : nop
        cmp edi, ebp
        je public_6eccca7
        test bl, bl
        jne public_6eccca7
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_6eccca7 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        test bl, bl
        setne cl
        push edx
        dec ecx
        mov esi, ecx
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x20], ebp
        call public_6ed0c50
        add esp, 8
        pop edi
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x22D4
        ret 0xC
        UNREACHABLE_TRAP(0x6ecc890)
    }
}

#undef public_6ecc90b
#undef public_6ecc964
#undef public_6ecc990
#undef public_6ecca28
#undef public_6ecca60
#undef public_6ecca67
#undef public_6eccaf0
#undef public_6eccaf7
#undef public_6eccb5a
#undef public_6eccb6d
#undef public_6eccb96
#undef public_6eccbb4
#undef public_6eccc66
#undef public_6eccc77
#undef public_6eccc8e
#undef public_6eccc92
#undef public_6eccc99
#undef public_6eccca7
