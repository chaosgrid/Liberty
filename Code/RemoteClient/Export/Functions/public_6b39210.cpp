#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39210);

#define public_6b39222 _public_6b39222

PROC_DECLARE(0x6b39210, internal_6b39210, public_6b39210);
extern "C" NAKED register_t __cdecl internal_6b39210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6b39222
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6b6b10c]
        public_6b39222 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6b39210)
    }
}

#undef public_6b39222
