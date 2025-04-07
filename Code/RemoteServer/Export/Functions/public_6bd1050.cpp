#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd1050);

#define public_6bd107e _public_6bd107e

PROC_DECLARE(0x6bd1050, internal_6bd1050, public_6bd1050);
extern "C" NAKED register_t __cdecl internal_6bd1050()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c137b4]
        test eax, eax
        je public_6bd107e
        push eax
        call dword ptr ds : [public_6c0b14c]
        mov dword ptr ds : [public_6c137b4], 0
        mov dword ptr ds : [public_6c137bc], 0
        mov dword ptr ds : [public_6c137c0], 0
        public_6bd107e : nop
        ret 
        UNREACHABLE_TRAP(0x6bd1050)
    }
}

#undef public_6bd107e
