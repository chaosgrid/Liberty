#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee18e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee18f0 _public_6ee18f0
#define public_6ee1930 _public_6ee1930
#define public_6ee1941 _public_6ee1941
#define public_6ee1947 _public_6ee1947
#define public_6ee1985 _public_6ee1985
#define public_6ee1997 _public_6ee1997
#define public_6ee19cf _public_6ee19cf
#define public_6ee19d8 _public_6ee19d8
#define public_6ee19e9 _public_6ee19e9
#define public_6ee19f9 _public_6ee19f9
#define public_6ee1a04 _public_6ee1a04
#define public_6ee1a13 _public_6ee1a13
#define public_6ee1a20 _public_6ee1a20
#define public_6ee1a2d _public_6ee1a2d

PROC_DECLARE(0x6ee18e0, internal_6ee18e0, public_6ee18e0);
extern "C" NAKED register_t __cdecl internal_6ee18e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6ee9030]
        push esi
        push edi
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ee18f0 : nop
        push offset public_6eeaf0c @0x6ee18f0*/
  FIXUP public_6ee18f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        xor esi, esi
        call ebp
        mov eax, dword ptr ds : [public_6eeaf08]
        lea edi, ds:[eax*4+4]
        push edi
        call public_6ee8de2
        mov ecx, edi
        mov edx, ecx
        mov ebx, eax
        shr ecx, 2
        xor eax, eax
        mov edi, ebx
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov ecx, dword ptr ds : [public_6eeaf04]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ecx
        je public_6ee1947
        public_6ee1930 : nop
        mov edx, dword ptr ds : [eax+0x14]
        test edx, edx
        je public_6ee1941
        mov dword ptr ds : [ebx+esi*4], edx
        mov ecx, dword ptr ds : [public_6eeaf04]
        inc esi
        public_6ee1941 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6ee1930
/*FIXUP public_6ee1947 : nop
        push offset public_6eeaf0c @0x6ee1947*/
  FIXUP public_6ee1947 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        mov eax, dword ptr ds : [public_6eeaf70]
        push 0xFFFFFFFF
        push 0
        mov dword ptr ds : [ebx+esi*4], eax
        push ebx
        inc esi
        push esi
        call dword ptr ds : [public_6ee9014]
        cmp eax, 0xFFFFFFFF
        je public_6ee1a20
        mov edi, dword ptr ds : [ebx+eax*4]
        mov eax, dword ptr ds : [public_6eeaf70]
        cmp edi, eax
        jne public_6ee1985
        push eax
        call dword ptr ds : [public_6ee9010]
        jmp public_6ee1a04
/*FIXUP public_6ee1985 : nop
        push offset public_6eeaf0c @0x6ee1985*/
  FIXUP public_6ee1985 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call ebp
        mov eax, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ee19f9
        public_6ee1997 : nop
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ee19e9
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_6ee19d8
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [esi+0x1C]
        jbe public_6ee19cf
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        public_6ee19cf : nop
        push edi
        call dword ptr ds : [public_6ee9010]
        jmp public_6ee19e9
        public_6ee19d8 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [public_6ee9034]
        mov dword ptr ds : [esi+0x14], 0
        public_6ee19e9 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6eeaf04]
        jne public_6ee1997
        mov ebp, dword ptr ds : [public_6ee9030]
/*FIXUP public_6ee19f9 : nop
        push offset public_6eeaf0c @0x6ee19f9*/
  FIXUP public_6ee19f9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        public_6ee1a04 : nop
        test ebx, ebx
        je public_6ee1a13
        push ebx
        call public_6ee8ddc
        add esp, 4
        xor ebx, ebx
        public_6ee1a13 : nop
        mov eax, dword ptr ds : [public_6eeaf74]
        test eax, eax
        je public_6ee18f0
        public_6ee1a20 : nop
        test ebx, ebx
        je public_6ee1a2d
        push ebx
        call public_6ee8ddc
        add esp, 4
        public_6ee1a2d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ee18e0)
    }
}

#undef public_6ee18f0
#undef public_6ee1930
#undef public_6ee1941
#undef public_6ee1947
#undef public_6ee1985
#undef public_6ee1997
#undef public_6ee19cf
#undef public_6ee19d8
#undef public_6ee19e9
#undef public_6ee19f9
#undef public_6ee1a04
#undef public_6ee1a13
#undef public_6ee1a20
#undef public_6ee1a2d
