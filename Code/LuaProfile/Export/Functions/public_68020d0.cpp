#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68020d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802480);

#define public_68020ea _public_68020ea

PROC_DECLARE(0x68020d0, internal_68020d0, public_68020d0);
extern "C" NAKED register_t __cdecl internal_68020d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6802480
        add esp, 4
        cmp eax, 0xFFFFFFFC
        je public_68020ea
        cmp eax, 0xFFFFFFFB
        je public_68020ea
        xor eax, eax
        ret 
        public_68020ea : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x68020d0)
    }
}

#undef public_68020ea
