#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4247c0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b09b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_5b09f4 _public_5b09f4
#define public_5b0a2e _public_5b0a2e
#define public_5b0a7a _public_5b0a7a
#define public_5b0a90 _public_5b0a90
#define public_5b0a99 _public_5b0a99
#define public_5b0ad4 _public_5b0ad4
#define public_5b0ae0 _public_5b0ae0
#define public_5b0ae7 _public_5b0ae7

PROC_DECLARE(0x5b09b0, internal_5b09b0, public_5b09b0);
extern "C" NAKED register_t __cdecl internal_5b09b0()
{
    __asm
    {
        mov eax, 0x2200
        call public_5b7e90
        mov ecx, dword ptr ds : [public_67eca8]
        push ebx
        push esi
        push edi
        push 0x100
        lea eax, ss:[esp+0x10]
        push eax
        push 0xD2
        push ecx
        call public_4347e0
        mov esi, dword ptr ds : [public_5c70b4]
        add esp, 0x10
        test eax, eax
        jne public_5b09f4
        lea edx, ss:[esp+0xC]
/*FIXUP push offset public_5e6984 @0x5b09e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6984
        push edx
        call esi
        add esp, 8
        public_5b09f4 : nop
        mov ecx, dword ptr ss : [esp+0x2210]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x1000
        lea eax, ss:[esp+0x210]
        push eax
        push ecx
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b0a2e
        lea eax, ss:[esp+0x20C]
/*FIXUP push offset public_5e6928 @0x5b0a23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6928
        push eax
        call esi
        add esp, 8
        public_5b0a2e : nop
        mov esi, dword ptr ss : [esp+0x2214]
        test esi, esi
        je public_5b0a7a
        lea ecx, ss:[esp+0x20C]
/*FIXUP push offset public_5d0a08 @0x5b0a40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        push ecx
        call dword ptr ds : [public_5c70ac]
        lea edx, ss:[esp+0x214]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 0xC
        mov ecx, 0x1000
        sub ecx, eax
        push ecx
        lea edx, ss:[esp+eax*2+0x210]
        push edx
        push 0xFFFFFFFF
        push esi
        push 0
        push 0
        call dword ptr ds : [public_61641c]
        public_5b0a7a : nop
        mov edi, dword ptr ds : [public_5c72c8]
        push 1
        xor esi, esi
        call edi
        test eax, eax
        jge public_5b0a99
        lea ebx, ds:[ebx]
        public_5b0a90 : nop
        push 1
        inc esi
        call edi
        test eax, eax
        jl public_5b0a90
        public_5b0a99 : nop
        mov edx, dword ptr ds : [public_67eca0]
        push 0x10024
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x214]
        push ecx
        push edx
        call dword ptr ds : [public_616430]
        cmp eax, 6
        sete bl
        test bl, bl
        jne public_5b0ad4
        push 1
        call public_4247c0
        add esp, 4
        push 1
        call dword ptr ds : [public_5c713c]
        public_5b0ad4 : nop
        test esi, esi
        jl public_5b0ae7
        inc esi
        lea esp, ss:[esp]
        public_5b0ae0 : nop
        push 0
        call edi
        dec esi
        jne public_5b0ae0
        public_5b0ae7 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x2200
        ret 
        UNREACHABLE_TRAP(0x5b09b0)
    }
}

#undef public_5b09f4
#undef public_5b0a2e
#undef public_5b0a7a
#undef public_5b0a90
#undef public_5b0a99
#undef public_5b0ad4
#undef public_5b0ae0
#undef public_5b0ae7
