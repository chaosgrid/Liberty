#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634dc49 _public_634dc49

PROC_DECLARE(0x634dc30, internal_634dc30, public_634dc30);
extern "C" NAKED register_t __cdecl internal_634dc30()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a55b8
        je public_634dc49
        push esi
        call public_6391d5a
        add esp, 4
        public_634dc49 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634dc30)
    }
}

#undef public_634dc49
