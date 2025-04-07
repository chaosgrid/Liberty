#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8990);

#define public_6ce88f0 _public_6ce88f0
#define public_6ce8908 _public_6ce8908
#define public_6ce890a _public_6ce890a
#define public_6ce8929 _public_6ce8929

PROC_DECLARE(0x6ce88d0, internal_6ce88d0, public_6ce88d0);
extern "C" NAKED register_t __cdecl internal_6ce88d0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x1E0]
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_6d64244]
        mov edi, dword ptr ds : [public_6d64200]
        nop 
        public_6ce88f0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce8908
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce890a
        public_6ce8908 : nop
        xor eax, eax
        public_6ce890a : nop
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[eax+0xE4]
        call edi
        test eax, eax
        je public_6ce8929
        movzx eax, word ptr ds : [eax+8]
        push eax
        mov ecx, esi
        call public_6ce8990
        jmp public_6ce88f0
        public_6ce8929 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ce88d0)
    }
}

#undef public_6ce88f0
#undef public_6ce8908
#undef public_6ce890a
#undef public_6ce8929
