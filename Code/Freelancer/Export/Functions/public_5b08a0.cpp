#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4247c0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b08a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_5b08e2 _public_5b08e2
#define public_5b091c _public_5b091c
#define public_5b0968 _public_5b0968
#define public_5b0978 _public_5b0978

PROC_DECLARE(0x5b08a0, internal_5b08a0, public_5b08a0);
extern "C" NAKED register_t __cdecl internal_5b08a0()
{
    __asm
    {
        mov eax, 0x2200
        call public_5b7e90
        mov ecx, dword ptr ds : [public_67eca8]
        push esi
        push 0x100
        lea eax, ss:[esp+8]
        push eax
        push 0xD1
        push ecx
        call public_4347e0
        mov esi, dword ptr ds : [public_5c70b4]
        add esp, 0x10
        test eax, eax
        jne public_5b08e2
        lea edx, ss:[esp+4]
/*FIXUP push offset public_5e68f4 @0x5b08d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e68f4
        push edx
        call esi
        add esp, 8
        public_5b08e2 : nop
        mov ecx, dword ptr ss : [esp+0x2208]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x1000
        lea eax, ss:[esp+0x208]
        push eax
        push ecx
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b091c
        lea eax, ss:[esp+0x204]
/*FIXUP push offset public_5e6870 @0x5b0911*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6870
        push eax
        call esi
        add esp, 8
        public_5b091c : nop
        mov esi, dword ptr ss : [esp+0x220C]
        test esi, esi
        je public_5b0968
        lea ecx, ss:[esp+0x204]
/*FIXUP push offset public_5d0a08 @0x5b092e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        push ecx
        call dword ptr ds : [public_5c70ac]
        lea edx, ss:[esp+0x20C]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 0xC
        mov ecx, 0x1000
        sub ecx, eax
        push ecx
        lea edx, ss:[esp+eax*2+0x208]
        push edx
        push 0xFFFFFFFF
        push esi
        push 0
        push 0
        call dword ptr ds : [public_61641c]
        public_5b0968 : nop
        push 1
        call public_4247c0
        mov esi, dword ptr ds : [public_5c72c8]
        add esp, 4
        public_5b0978 : nop
        push 1
        call esi
        test eax, eax
        jl public_5b0978
        mov edx, dword ptr ds : [public_67eca0]
        push 0x10030
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x20C]
        push ecx
        push edx
        call dword ptr ds : [public_616430]
        push 1
        call dword ptr ds : [public_5c713c]
        pop esi
        UNREACHABLE_TRAP(0x5b08a0)
    }
}

#undef public_5b08e2
#undef public_5b091c
#undef public_5b0968
#undef public_5b0978
