#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);

#define public_6b3c561 _public_6b3c561

PROC_DECLARE(0x6b3c550, internal_6b3c550, public_6b3c550);
extern "C" NAKED register_t __cdecl internal_6b3c550()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6b3c561
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6b3a510
        public_6b3c561 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3c550)
    }
}

#undef public_6b3c561
