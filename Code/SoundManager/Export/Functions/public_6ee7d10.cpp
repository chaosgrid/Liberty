#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee7d36 _public_6ee7d36

PROC_DECLARE(0x6ee7d10, internal_6ee7d10, public_6ee7d10);
extern "C" NAKED register_t __cdecl internal_6ee7d10()
{
    __asm
    {
        cmp dword ptr ds : [public_6eeaf48], 0x7FFFFFFF
        jge public_6ee7d36
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6eeaf3c]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6eeaf3c], eax
        inc dword ptr ds : [public_6eeaf48]
        ret 8
        public_6ee7d36 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6ee8ddc
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ee7d10)
    }
}

#undef public_6ee7d36
