#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5accb0);

#define public_5accc9 _public_5accc9

PROC_DECLARE(0x5accb0, internal_5accb0, public_5accb0);
extern "C" NAKED register_t __cdecl internal_5accb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x28]
        xor al, al
        test edx, edx
        je public_5accc9
        mov edx, dword ptr ds : [ecx+0x98]
        test edx, edx
        je public_5accc9
        mov al, 1
        public_5accc9 : nop
        ret 
        UNREACHABLE_TRAP(0x5accb0)
    }
}

#undef public_5accc9
