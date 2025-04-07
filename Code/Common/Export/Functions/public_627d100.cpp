#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285630);

#define public_627d11a _public_627d11a

PROC_DECLARE(0x627d100, internal_627d100, public_627d100);
extern "C" NAKED register_t __cdecl internal_627d100()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        je public_627d11a
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push edx
        push ecx
        call public_6285630
        add esp, 0xC
        public_627d11a : nop
        ret 8
        UNREACHABLE_TRAP(0x627d100)
    }
}

#undef public_627d11a
