#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef35b0);

#define public_6ef2ad6 _public_6ef2ad6

PROC_DECLARE(0x6ef2ac0, internal_6ef2ac0, public_6ef2ac0);
extern "C" NAKED register_t __cdecl internal_6ef2ac0()
{
    __asm
    {
        push 0
        call dword ptr ds : [public_6efc124]
        test eax, eax
        je public_6ef2ad6
        cmp eax, 1
        je public_6ef2ad6
        xor eax, eax
        ret 4
        public_6ef2ad6 : nop
        mov ecx, dword ptr ss : [esp+4]
        push esi
        call public_6ef35b0
        mov esi, eax
        call dword ptr ds : [public_6efc120]
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef2ac0)
    }
}

#undef public_6ef2ad6
