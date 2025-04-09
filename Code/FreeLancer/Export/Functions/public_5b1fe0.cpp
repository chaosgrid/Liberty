#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ef20);
CLANG_FORWARD_PROC_SYMBOL(public_577850);

#define public_5b2014 _public_5b2014
#define public_5b203c _public_5b203c
#define public_5b2069 _public_5b2069
#define public_5b2080 _public_5b2080
#define public_5b208b _public_5b208b

PROC_DECLARE(0x5b1fe0, internal_5b1fe0, public_5b1fe0);
extern "C" NAKED register_t __cdecl internal_5b1fe0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        call public_41ef20
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_5c7230]
        test eax, eax
        je public_5b2080
        mov edi, dword ptr ds : [public_5c7244]
        mov ebx, dword ptr ds : [public_5c7234]
        mov esi, dword ptr ds : [public_5c6e80]
        public_5b2014 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        call edi
        test eax, eax
        je public_5b208b
        call esi
        test eax, eax
        je public_5b203c
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6ebc]
        test al, al
        jne public_5b2069
        public_5b203c : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edx
        call public_577850
        add esp, 0xC
        test al, al
        jne public_5b2069
        lea eax, ss:[esp+0xC]
        push eax
        call ebx
        lea ecx, ss:[esp+0xC]
        push ecx
        call dword ptr ds : [public_5c722c]
        public_5b2069 : nop
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c7230]
        test eax, eax
        jne public_5b2014
        public_5b2080 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 4
        public_5b208b : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x5b1fe0)
    }
}

#undef public_5b2014
#undef public_5b203c
#undef public_5b2069
#undef public_5b2080
#undef public_5b208b
