#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);

#define public_6b45761 _public_6b45761

PROC_DECLARE(0x6b45750, internal_6b45750, public_6b45750);
extern "C" NAKED register_t __cdecl internal_6b45750()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6b45761
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6b3a510
        public_6b45761 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b45750)
    }
}

#undef public_6b45761
