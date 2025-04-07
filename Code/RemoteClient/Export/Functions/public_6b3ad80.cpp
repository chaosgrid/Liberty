#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a510);
CLANG_FORWARD_PROC_SYMBOL(public_6b3ad80);

#define public_6b3ad91 _public_6b3ad91

PROC_DECLARE(0x6b3ad80, internal_6b3ad80, public_6b3ad80);
extern "C" NAKED register_t __cdecl internal_6b3ad80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6b3ad91
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6b3a510
        public_6b3ad91 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3ad80)
    }
}

#undef public_6b3ad91
