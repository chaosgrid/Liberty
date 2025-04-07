#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4f40);
CLANG_FORWARD_PROC_SYMBOL(public_6aca7d0);

#define public_6ac4f74 _public_6ac4f74

PROC_DECLARE(0x6ac4f40, internal_6ac4f40, public_6ac4f40);
extern "C" NAKED register_t __cdecl internal_6ac4f40()
{
    __asm
    {
        sub esp, 0x24
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_6ada024]
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, 0x182
        je public_6ac4f74
        sub eax, 0x64
        je public_6ac4f74
        sub eax, 0x64
        cmp word ptr ss : [esp+0x20], 6
        jb public_6ac4f74
        push 0xC
        call public_6aca7d0
        add esp, 0x24
        ret 
        public_6ac4f74 : nop
        push 4
        call public_6aca7d0
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6ac4f40)
    }
}

#undef public_6ac4f74
