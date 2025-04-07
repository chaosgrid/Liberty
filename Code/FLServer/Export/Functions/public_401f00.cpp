#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401f00);

#define public_401f18 _public_401f18

PROC_DECLARE(0x401f00, internal_401f00, public_401f00);
extern "C" NAKED register_t __cdecl internal_401f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jle public_401f18
        cmp eax, 8
        jge public_401f18
        mov dword ptr ds : [ecx+0x780], eax
        mov al, 1
        ret 4
        public_401f18 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x401f00)
    }
}

#undef public_401f18
