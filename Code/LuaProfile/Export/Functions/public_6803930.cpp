#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803930);

#define public_6803942 _public_6803942

PROC_DECLARE(0x6803930, internal_6803930, public_6803930);
extern "C" NAKED register_t __cdecl internal_6803930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6803942
        mov dword ptr ds : [eax+4], 1
        public_6803942 : nop
        ret 
        UNREACHABLE_TRAP(0x6803930)
    }
}

#undef public_6803942
