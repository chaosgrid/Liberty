#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc770);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);

#define public_6bdc781 _public_6bdc781

PROC_DECLARE(0x6bdc770, internal_6bdc770, public_6bdc770);
extern "C" NAKED register_t __cdecl internal_6bdc770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6bdc781
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6bdc850
        public_6bdc781 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdc770)
    }
}

#undef public_6bdc781
