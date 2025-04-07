#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d700);
CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_627e490);
CLANG_FORWARD_PROC_SYMBOL(public_627e510);
CLANG_FORWARD_PROC_SYMBOL(public_627e850);
CLANG_FORWARD_PROC_SYMBOL(public_627ea60);
CLANG_FORWARD_PROC_SYMBOL(public_627eae0);
CLANG_FORWARD_PROC_SYMBOL(public_627f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_627f670);
CLANG_FORWARD_PROC_SYMBOL(public_627f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_627f920);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_630e660);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d50);

#define public_627d8f0 _public_627d8f0
#define public_627d901 _public_627d901
#define public_627d90d _public_627d90d
#define public_627d9c8 _public_627d9c8
#define public_627da3c _public_627da3c
#define public_627da5d _public_627da5d
#define public_627da5f _public_627da5f
#define public_627dab6 _public_627dab6
#define public_627dac5 _public_627dac5

PROC_DECLARE(0x627d8a0, internal_627d8a0, public_627d8a0);
extern "C" NAKED register_t __cdecl internal_627d8a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392d50 @0x627d8a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d50
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        mov edx, dword ptr ds : [public_63fc424]
        push ebx
        inc edx
        push esi
        mov dword ptr ds : [public_63fc424], edx
        lea eax, ss:[esp+0xB]
        xor ebx, ebx
        push eax
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x70], ebx
        call public_627e490
        dec dword ptr ds : [public_63fc424]
        jne public_627d90d
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, ebx
        je public_627d901
        lea esp, ss:[esp]
        public_627d8f0 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_627d8f0
        public_627d901 : nop
        mov dword ptr ds : [public_63fc420], ebx
        mov dword ptr ds : [public_63fc42c], ebx
        public_627d90d : nop
        mov ecx, dword ptr ss : [esp+0x74]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x50], ecx
        push edx
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x70], 1
        call public_627e850
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, offset public_63fbff8
        mov byte ptr ss : [esp+0x74], 2
        call public_627eae0
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x6C], 1
        call public_627e510
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call public_627e510
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_627dac5
        mov dl, byte ptr ss : [esp+0x74]
        push ebp
        push edi
        mov byte ptr ss : [esp+0x38], dl
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x80]
        push edx
/*FIXUP push offset _public_627d700 @0x627d99b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627d700
        push eax
        mov dword ptr ss : [esp+0x84], 3
        call dword ptr ds : [ecx+0x8C]
        mov ebp, dword ptr ss : [esp+0x3C]
        cmp ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x14], ebx
        je public_627da5f
        mov ebx, dword ptr ss : [esp+0x28]
        public_627d9c8 : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [public_6399048]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_627da3c
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x80]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ecx
        jne public_627da3c
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edi+4]
        lea esi, ds:[ebx+0x14]
        push ecx
        push edi
        mov ecx, esi
        call public_627ea60
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_630cd00
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        public_627da3c : nop
        mov eax, dword ptr ss : [esp+0x40]
        add ebp, 4
        cmp ebp, eax
        jne public_627d9c8
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_627da5d
        push eax
        call public_630e660
        add esp, 4
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_627dab6
        public_627da5d : nop
        xor ebx, ebx
        public_627da5f : nop
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_63fbff8
        call public_627f6a0
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_63fbff8
        mov edi, eax
        call public_627f670
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x7C]
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        push esi
        mov dword ptr ss : [esp+0x28], ebx
        call public_627f920
        add esp, 0x10
        push edi
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, offset public_63fbff8
        call public_627f0d0
        public_627dab6 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call public_6391d5a
        add esp, 4
        pop edi
        pop ebp
        public_627dac5 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 
        UNREACHABLE_TRAP(0x627d8a0)
    }
}

#undef public_627d8f0
#undef public_627d901
#undef public_627d90d
#undef public_627d9c8
#undef public_627da3c
#undef public_627da5d
#undef public_627da5f
#undef public_627dab6
#undef public_627dac5
