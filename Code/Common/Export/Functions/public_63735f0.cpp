#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636efc0);
CLANG_FORWARD_PROC_SYMBOL(public_636f970);
CLANG_FORWARD_PROC_SYMBOL(public_636fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63735f0);
CLANG_FORWARD_PROC_SYMBOL(public_6373d60);
CLANG_FORWARD_PROC_SYMBOL(public_6378980);

#define public_637364e _public_637364e
#define public_637365c _public_637365c
#define public_637367b _public_637367b
#define public_637368b _public_637368b
#define public_63736ab _public_63736ab
#define public_63736c4 _public_63736c4
#define public_63736d6 _public_63736d6
#define public_63736df _public_63736df
#define public_63736e5 _public_63736e5
#define public_63736eb _public_63736eb
#define public_63736f6 _public_63736f6
#define public_6373726 _public_6373726
#define public_6373741 _public_6373741

PROC_DECLARE(0x63735f0, internal_63735f0, public_63735f0);
extern "C" NAKED register_t __cdecl internal_63735f0()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_658b814]
        mov ecx, dword ptr ds : [public_658b83c]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        push edx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ds : [public_658b81c], eax
        mov dword ptr ds : [public_658b840], ecx
        call public_6373d60
        mov edi, eax
        push edi
        call public_636efc0
        mov ecx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ds : [public_658b0d8]
        add esp, 8
        inc ecx
        cmp eax, ebp
        mov dword ptr ds : [public_658b8e0], ecx
        jne public_637364e
        mov dword ptr ds : [public_658b8a0], 1
        public_637364e : nop
        mov esi, dword ptr ds : [public_658b820]
        cmp esi, ebp
        je public_63736f6
        public_637365c : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        je public_63736f6
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebp
        je public_637368b
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        je public_637368b
        public_637367b : nop
        and dword ptr ds : [eax+0x50], 0xFFFFDFFF
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        jne public_637367b
        public_637368b : nop
        cmp dword ptr ds : [esi+0x38], ebp
        je public_63736ab
        mov eax, dword ptr ds : [public_658b8e0]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        push esi
        mov dword ptr ds : [esi+0x48], eax
        call public_636f970
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        public_63736ab : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x10
        je public_63736c4
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        push esi
        call public_636fbc0
        add esp, 0xC
        mov ebx, eax
        public_63736c4 : nop
        cmp dword ptr ds : [public_658b0d8], ebp
        jne public_63736eb
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        je public_63736d6
        mov ebx, eax
        public_63736d6 : nop
        cmp ebx, ebp
        je public_63736df
        mov dword ptr ds : [esi+0x20], ebx
        jmp public_63736e5
        public_63736df : nop
        inc dword ptr ds : [public_658bc88]
        public_63736e5 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax+4], ebp
        public_63736eb : nop
        mov esi, dword ptr ds : [esi+0x30]
        cmp esi, ebp
        jne public_637365c
        public_63736f6 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_6373726
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6370570
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63f0c54 @0x6373717*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0c54
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6373726 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_6373741
        mov ecx, dword ptr ds : [public_658b81c]
        push 1
        push ebp
        push ecx
        call public_6378980
        add esp, 0xC
        public_6373741 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63735f0)
    }
}

#undef public_637364e
#undef public_637365c
#undef public_637367b
#undef public_637368b
#undef public_63736ab
#undef public_63736c4
#undef public_63736d6
#undef public_63736df
#undef public_63736e5
#undef public_63736eb
#undef public_63736f6
#undef public_6373726
#undef public_6373741
