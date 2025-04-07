#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285680);

#define public_627d0fa _public_627d0fa

PROC_DECLARE(0x627d0e0, internal_627d0e0, public_627d0e0);
extern "C" NAKED register_t __cdecl internal_627d0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        je public_627d0fa
        mov eax, dword ptr ss : [esp+4]
        push 0x3F800000
        push eax
        push ecx
        call public_6285680
        add esp, 0xC
        public_627d0fa : nop
        ret 4
        UNREACHABLE_TRAP(0x627d0e0)
    }
}

#undef public_627d0fa
