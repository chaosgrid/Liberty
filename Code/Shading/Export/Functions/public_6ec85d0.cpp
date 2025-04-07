#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3880);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca560);
CLANG_FORWARD_PROC_SYMBOL(public_6eca640);
CLANG_FORWARD_PROC_SYMBOL(public_6eca680);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbfc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec85fb _public_6ec85fb
#define public_6ec8652 _public_6ec8652
#define public_6ec869e _public_6ec869e
#define public_6ec86ab _public_6ec86ab
#define public_6ec86ee _public_6ec86ee
#define public_6ec86f6 _public_6ec86f6
#define public_6ec8731 _public_6ec8731
#define public_6ec8739 _public_6ec8739
#define public_6ec8766 _public_6ec8766
#define public_6ec8781 _public_6ec8781
#define public_6ec87f0 _public_6ec87f0
#define public_6ec8813 _public_6ec8813
#define public_6ec8830 _public_6ec8830
#define public_6ec884a _public_6ec884a
#define public_6ec8861 _public_6ec8861
#define public_6ec88c7 _public_6ec88c7
#define public_6ec88d6 _public_6ec88d6
#define public_6ec88db _public_6ec88db
#define public_6ec88e6 _public_6ec88e6
#define public_6ec88ea _public_6ec88ea
#define public_6ec8916 _public_6ec8916
#define public_6ec8923 _public_6ec8923
#define public_6ec8929 _public_6ec8929
#define public_6ec8961 _public_6ec8961
#define public_6ec89d4 _public_6ec89d4
#define public_6ec8a02 _public_6ec8a02
#define public_6ec8a2a _public_6ec8a2a
#define public_6ec8a4f _public_6ec8a4f
#define public_6ec8a74 _public_6ec8a74
#define public_6ec8ada _public_6ec8ada
#define public_6ec8ae9 _public_6ec8ae9
#define public_6ec8aee _public_6ec8aee
#define public_6ec8afb _public_6ec8afb
#define public_6ec8aff _public_6ec8aff
#define public_6ec8b0d _public_6ec8b0d
#define public_6ec8b3a _public_6ec8b3a
#define public_6ec8b3c _public_6ec8b3c
#define public_6ec8b83 _public_6ec8b83
#define public_6ec8b85 _public_6ec8b85
#define public_6ec8bba _public_6ec8bba

PROC_DECLARE(0x6ec85d0, internal_6ec85d0, public_6ec85d0);
extern "C" NAKED register_t __cdecl internal_6ec85d0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_6ed1008]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], ebx
        je public_6ec85fb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edi
        public_6ec85fb : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_6ed48b4 @0x6ec8602*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6ec8652
        mov ecx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed4f04 @0x6ec8614*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4f04
        push 0x1AA
/*FIXUP push offset public_6ed4eb0 @0x6ec861e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov eax, 0x100001
/*FIXUP push offset public_6ed42a4 @0x6ec8628*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42a4
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        cmp eax, edi
        je public_6ec8916
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec8652 : nop
        mov ebp, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [ebp+0x3C]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0x40]
        push esi
/*FIXUP push offset public_6ed4064 @0x6ec865f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4064
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6ec86ab
        mov edx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed4e74 @0x6ec8671*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4e74
        push 0x1AF
/*FIXUP push offset public_6ed4eb0 @0x6ec867b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov eax, 0x100001
/*FIXUP push offset public_6ed42a4 @0x6ec8685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42a4
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        cmp eax, edi
        je public_6ec869e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec869e : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec86ab : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        lea edi, ss:[ebp+0x48]
        push edi
/*FIXUP push offset public_6ed4e5c @0x6ec86bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4e5c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6ec86ee
        mov edx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed4e2c @0x6ec86cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4e2c
        push 0x1B5
/*FIXUP push offset public_6ed4eb0 @0x6ec86d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov eax, 0x100001
/*FIXUP push offset public_6ed42a4 @0x6ec86e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42a4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6ec86f6
        public_6ec86ee : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        public_6ec86f6 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi]
        lea edi, ss:[ebp+0x44]
        push edi
/*FIXUP push offset public_6ed4e18 @0x6ec86fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4e18
        push esi
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6ec8731
        mov edx, dword ptr ds : [public_6ed1004]
/*FIXUP push offset public_6ed4de8 @0x6ec8710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4de8
        push 0x1BC
/*FIXUP push offset public_6ed4eb0 @0x6ec871a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov eax, 0x100001
/*FIXUP push offset public_6ed42a4 @0x6ec8724*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed42a4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6ec8739
        public_6ec8731 : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        public_6ec8739 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x58], 0
        je public_6ec8766
        lea ecx, ss:[esp+0x58]
        call public_6ec3880
        mov dword ptr ss : [esp+0x58], esi
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        jne public_6ec8781
        public_6ec8766 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x58]
        push eax
/*FIXUP push offset public_6ed48b4 @0x6ec876d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        push ebx
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6ec8923
        mov eax, dword ptr ss : [esp+0x58]
        public_6ec8781 : nop
        mov ecx, dword ptr ds : [eax]
        push 3
/*FIXUP push offset public_6ed4dbc @0x6ec8785*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4dbc
        push eax
        mov esi, 0x100000
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        test ebx, ebx
        je public_6ec88e6
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        push 0x400
/*FIXUP push offset public_6ed5860 @0x6ec87a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
/*FIXUP push offset public_6ed4ddc @0x6ec87ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ddc
        push ebx
        push eax
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_6ec88db
        mov ecx, 9
        mov esi, offset public_6ed4bb4
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea eax, ss:[esp+0x2C]
        push eax
        movsb 
        mov edi, dword ptr ds : [public_6ed1050]
/*FIXUP push offset public_6ed5860 @0x6ec87db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call edi
        add esp, 8
        test eax, eax
        je public_6ec87f0
        mov byte ptr ds : [eax+public_6ed5860], 0
        public_6ec87f0 : nop
        mov esi, dword ptr ds : [public_6ed100c]
/*FIXUP push offset public_6ed4bac @0x6ec87f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bac
/*FIXUP push offset public_6ed5860 @0x6ec87fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8813
        mov esi, 1
        jmp public_6ec88db
/*FIXUP public_6ec8813 : nop
        push offset public_6ed4ba8 @0x6ec8813*/
  FIXUP public_6ec8813 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba8
/*FIXUP push offset public_6ed5860 @0x6ec8818*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8830
        mov esi, 1
        jmp public_6ec88db
/*FIXUP public_6ec8830 : nop
        push offset public_6ed4ba0 @0x6ec8830*/
  FIXUP public_6ec8830 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba0
/*FIXUP push offset public_6ed5860 @0x6ec8835*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec884a
        xor esi, esi
        jmp public_6ec88db
/*FIXUP public_6ec884a : nop
        push offset public_6ed4b9c @0x6ec884a*/
  FIXUP public_6ec884a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b9c
/*FIXUP push offset public_6ed5860 @0x6ec884f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8861
        xor esi, esi
        jmp public_6ec88db
        public_6ec8861 : nop
        mov esi, dword ptr ds : [public_6ed1048]
        push 0x78
/*FIXUP push offset public_6ed5860 @0x6ec8869*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec88c7
        push 0x58
/*FIXUP push offset public_6ed5860 @0x6ec8879*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec88c7
        mov edx, dword ptr ds : [public_6ed4b90]
        mov ecx, dword ptr ds : [public_6ed4b8c]
        mov eax, dword ptr ds : [public_6ed4b94]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ds : [public_6ed4b98]
        push edx
/*FIXUP push offset public_6ed5860 @0x6ec88ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        mov dword ptr ss : [esp+0x2C], eax
        mov byte ptr ss : [esp+0x30], cl
        call edi
/*FIXUP push offset public_6ed5860 @0x6ec88ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed1040]
        jmp public_6ec88d6
        public_6ec88c7 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6ed5860 @0x6ec88cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed104c]
        public_6ec88d6 : nop
        add esp, 0xC
        mov esi, eax
        public_6ec88db : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6ec88e6 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_6ec88ea : nop
        lea ecx, ss:[esp+0x58]
        call public_6ec3880
        lea edi, ss:[ebp-8]
        push esi
        mov ecx, edi
        call public_6eca560
        push ebp
        call public_6ecbfc0
        test eax, eax
        jge public_6ec8929
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6ec8916
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ec8916 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec8923 : nop
        mov esi, dword ptr ss : [esp+0x58]
        jmp public_6ec88ea
        public_6ec8929 : nop
        mov ecx, edi
        call public_6ec8bd0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x5C], 0
        call public_6eca640
        test eax, eax
        jne public_6ec8961
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x58]
        push edx
/*FIXUP push offset public_6ed48b4 @0x6ec8951*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        push ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6ec8afb
        public_6ec8961 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push 3
/*FIXUP push offset public_6ed4dbc @0x6ec8969*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4dbc
        push eax
        mov edi, 2
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        test ebx, ebx
        je public_6ec8aff
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        push 0x400
/*FIXUP push offset public_6ed5860 @0x6ec898c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
/*FIXUP push offset public_6ed4dcc @0x6ec8991*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4dcc
        push ebx
        push eax
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_6ec8aee
        mov ecx, 9
        mov esi, offset public_6ed4bb4
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea eax, ss:[esp+0x2C]
        push eax
        movsb 
        mov edi, dword ptr ds : [public_6ed1050]
/*FIXUP push offset public_6ed5860 @0x6ec89bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call edi
        add esp, 8
        test eax, eax
        je public_6ec89d4
        mov byte ptr ds : [eax+public_6ed5860], 0
        public_6ec89d4 : nop
        mov esi, dword ptr ds : [public_6ed100c]
/*FIXUP push offset public_6ed4bac @0x6ec89da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4bac
/*FIXUP push offset public_6ed5860 @0x6ec89df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8a02
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        mov edi, 1
        call dword ptr ds : [ecx+0x18]
        jmp public_6ec8aff
/*FIXUP public_6ec8a02 : nop
        push offset public_6ed4ba8 @0x6ec8a02*/
  FIXUP public_6ec8a02 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba8
/*FIXUP push offset public_6ed5860 @0x6ec8a07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8a2a
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        mov edi, 1
        call dword ptr ds : [ecx+0x18]
        jmp public_6ec8aff
/*FIXUP public_6ec8a2a : nop
        push offset public_6ed4ba0 @0x6ec8a2a*/
  FIXUP public_6ec8a2a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4ba0
/*FIXUP push offset public_6ed5860 @0x6ec8a2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8a4f
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        xor edi, edi
        call dword ptr ds : [ecx+0x18]
        jmp public_6ec8aff
/*FIXUP public_6ec8a4f : nop
        push offset public_6ed4b9c @0x6ec8a4f*/
  FIXUP public_6ec8a4f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b9c
/*FIXUP push offset public_6ed5860 @0x6ec8a54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8a74
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        xor edi, edi
        call dword ptr ds : [ecx+0x18]
        jmp public_6ec8aff
        public_6ec8a74 : nop
        mov esi, dword ptr ds : [public_6ed1048]
        push 0x78
/*FIXUP push offset public_6ed5860 @0x6ec8a7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8ada
        push 0x58
/*FIXUP push offset public_6ed5860 @0x6ec8a8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call esi
        add esp, 8
        test eax, eax
        jne public_6ec8ada
        mov edx, dword ptr ds : [public_6ed4b90]
        mov ecx, dword ptr ds : [public_6ed4b8c]
        mov eax, dword ptr ds : [public_6ed4b94]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ds : [public_6ed4b98]
        push edx
/*FIXUP push offset public_6ed5860 @0x6ec8abe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        mov dword ptr ss : [esp+0x2C], eax
        mov byte ptr ss : [esp+0x30], cl
        call edi
/*FIXUP push offset public_6ed5860 @0x6ec8acd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed1040]
        jmp public_6ec8ae9
        public_6ec8ada : nop
        push 0x10
        push 0
/*FIXUP push offset public_6ed5860 @0x6ec8ade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed5860
        call dword ptr ds : [public_6ed104c]
        public_6ec8ae9 : nop
        add esp, 0xC
        mov edi, eax
        public_6ec8aee : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x18]
        jmp public_6ec8aff
        public_6ec8afb : nop
        mov edi, dword ptr ss : [esp+0x58]
        public_6ec8aff : nop
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        je public_6ec8b0d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ec8b0d : nop
        push 0x20
        mov dword ptr ss : [ebp+0x58], 0
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ec8b3a
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6eca680
        mov eax, esi
        jmp public_6ec8b3c
        public_6ec8b3a : nop
        xor eax, eax
        public_6ec8b3c : nop
        mov dword ptr ss : [ebp+0x60], eax
        mov dword ptr ds : [eax+0x1C], 0
        mov edx, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [edx], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+0x60]
        mov ebx, 1
        mov dword ptr ds : [eax+4], ebx
        push 0x20
        mov dword ptr ss : [ebp+0x5C], ebx
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ec8b83
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x17]
        push edx
        lea ecx, ds:[esi+8]
        call public_6eca680
        mov eax, esi
        jmp public_6ec8b85
        public_6ec8b83 : nop
        xor eax, eax
        public_6ec8b85 : nop
        mov dword ptr ss : [ebp+0x64], eax
        mov dword ptr ds : [eax+0x1C], 0
        mov eax, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x80]
        mov dword ptr ss : [ebp+0x68], eax
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [ebp+0x84], edx
        je public_6ec8bba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec8bba : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ec85d0)
    }
}

#undef public_6ec85fb
#undef public_6ec8652
#undef public_6ec869e
#undef public_6ec86ab
#undef public_6ec86ee
#undef public_6ec86f6
#undef public_6ec8731
#undef public_6ec8739
#undef public_6ec8766
#undef public_6ec8781
#undef public_6ec87f0
#undef public_6ec8813
#undef public_6ec8830
#undef public_6ec884a
#undef public_6ec8861
#undef public_6ec88c7
#undef public_6ec88d6
#undef public_6ec88db
#undef public_6ec88e6
#undef public_6ec88ea
#undef public_6ec8916
#undef public_6ec8923
#undef public_6ec8929
#undef public_6ec8961
#undef public_6ec89d4
#undef public_6ec8a02
#undef public_6ec8a2a
#undef public_6ec8a4f
#undef public_6ec8a74
#undef public_6ec8ada
#undef public_6ec8ae9
#undef public_6ec8aee
#undef public_6ec8afb
#undef public_6ec8aff
#undef public_6ec8b0d
#undef public_6ec8b3a
#undef public_6ec8b3c
#undef public_6ec8b83
#undef public_6ec8b85
#undef public_6ec8bba
