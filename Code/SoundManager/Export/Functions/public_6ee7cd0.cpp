#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee7cf6 _public_6ee7cf6

PROC_DECLARE(0x6ee7cd0, internal_6ee7cd0, public_6ee7cd0);
extern "C" NAKED register_t __cdecl internal_6ee7cd0()
{
    __asm
    {
        cmp dword ptr ds : [public_6eeaf38], 0x7FFFFFFF
        jge public_6ee7cf6
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6eeaf2c]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6eeaf2c], eax
        inc dword ptr ds : [public_6eeaf38]
        ret 8
        public_6ee7cf6 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6ee8ddc
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ee7cd0)
    }
}

#undef public_6ee7cf6
