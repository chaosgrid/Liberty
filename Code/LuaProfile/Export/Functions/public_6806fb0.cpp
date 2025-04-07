#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806fb0);

#define public_6806fc1 _public_6806fc1

PROC_DECLARE(0x6806fb0, internal_6806fb0, public_6806fb0);
extern "C" NAKED register_t __cdecl internal_6806fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFF
        jg public_6806fc1
        mov eax, 2
        ret 
        public_6806fc1 : nop
        xor ecx, ecx
        cmp eax, 0xFFFF
        setg cl
        dec ecx
        and ecx, 0xFFFFFFFE
        add ecx, 5
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6806fb0)
    }
}

#undef public_6806fc1
