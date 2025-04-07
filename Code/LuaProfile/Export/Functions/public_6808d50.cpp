#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6808d50);

#define public_6808d70 _public_6808d70

PROC_DECLARE(0x6808d50, internal_6808d50, public_6808d50);
extern "C" NAKED register_t __cdecl internal_6808d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jle public_6808d70
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        neg ecx
        shl ecx, 1
        push ecx
        dec eax
        push eax
        push 0x1E
        push edx
        call public_6806ed0
        add esp, 0x10
        public_6808d70 : nop
        ret 
        UNREACHABLE_TRAP(0x6808d50)
    }
}

#undef public_6808d70
