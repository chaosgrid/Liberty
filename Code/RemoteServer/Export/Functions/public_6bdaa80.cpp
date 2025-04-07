#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdaa80);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);

#define public_6bdaa91 _public_6bdaa91

PROC_DECLARE(0x6bdaa80, internal_6bdaa80, public_6bdaa80);
extern "C" NAKED register_t __cdecl internal_6bdaa80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6bdaa91
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6bdc850
        public_6bdaa91 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdaa80)
    }
}

#undef public_6bdaa91
