#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68020b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802480);

#define public_68020ca _public_68020ca

PROC_DECLARE(0x68020b0, internal_68020b0, public_68020b0);
extern "C" NAKED register_t __cdecl internal_68020b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6802480
        add esp, 4
        cmp eax, 0xFFFFFFFE
        je public_68020ca
        cmp eax, 0xFFFFFFFF
        je public_68020ca
        xor eax, eax
        ret 
        public_68020ca : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x68020b0)
    }
}

#undef public_68020ca
