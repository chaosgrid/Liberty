#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b3ab20);

#define public_6b3ab31 _public_6b3ab31

PROC_DECLARE(0x6b3ab20, internal_6b3ab20, public_6b3ab20);
extern "C" NAKED register_t __cdecl internal_6b3ab20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6b3ab31
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6b3a510
        public_6b3ab31 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3ab20)
    }
}

#undef public_6b3ab31
