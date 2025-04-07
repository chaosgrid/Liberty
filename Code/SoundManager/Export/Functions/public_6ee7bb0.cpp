#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee7bc9 _public_6ee7bc9
#define public_6ee7bd3 _public_6ee7bd3
#define public_6ee7bdd _public_6ee7bdd
#define public_6ee7bed _public_6ee7bed

PROC_DECLARE(0x6ee7bb0, internal_6ee7bb0, public_6ee7bb0);
extern "C" NAKED register_t __cdecl internal_6ee7bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf4c]
        test eax, eax
        je public_6ee7bc9
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6eeaf4c], ecx
        dec dword ptr ds : [public_6eeaf58]
        jmp public_6ee7bd3
        public_6ee7bc9 : nop
        push 0xC
        call public_6ee8de2
        add esp, 4
        public_6ee7bd3 : nop
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_6ee7bdd
        mov ecx, eax
        public_6ee7bdd : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ee7bed
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ee7bed : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ee7bb0)
    }
}

#undef public_6ee7bc9
#undef public_6ee7bd3
#undef public_6ee7bdd
#undef public_6ee7bed
