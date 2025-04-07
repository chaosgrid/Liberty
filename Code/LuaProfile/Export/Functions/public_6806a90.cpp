#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806a90);

#define public_6806aac _public_6806aac

PROC_DECLARE(0x6806a90, internal_6806a90, public_6806a90);
extern "C" NAKED register_t __cdecl internal_6806a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ss : [esp+8]
        jne public_6806aac
        push eax
        call public_6806a20
        add esp, 4
        mov eax, 1
        ret 
        public_6806aac : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6806a90)
    }
}

#undef public_6806aac
