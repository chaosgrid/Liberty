#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_629c980);

#define public_629c9a5 _public_629c9a5

PROC_DECLARE(0x629c980, internal_629c980, public_629c980);
extern "C" NAKED register_t __cdecl internal_629c980()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x80]
        test esi, esi
        je public_629c9a5
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        call public_628b440
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_629c9a5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629c980)
    }
}

#undef public_629c9a5
