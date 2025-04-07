#include "Common-PCH.h"


#define public_6302de5 _public_6302de5

PROC_DECLARE(0x6302dc0, internal_6302dc0, public_6302dc0);
extern "C" NAKED register_t __cdecl internal_6302dc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x100
        test eax, eax
        je public_6302de5
        lea ecx, ss:[esp+0x108]
        push ecx
        push eax
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_63991f4]
        add esp, 0xC
        public_6302de5 : nop
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x6302dc0)
    }
}

#undef public_6302de5
