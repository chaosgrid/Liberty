#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);

#define public_6b3c7c1 _public_6b3c7c1

PROC_DECLARE(0x6b3c7b0, internal_6b3c7b0, public_6b3c7b0);
extern "C" NAKED register_t __cdecl internal_6b3c7b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6b3c7c1
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6b3a510
        public_6b3c7c1 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3c7b0)
    }
}

#undef public_6b3c7c1
