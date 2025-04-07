#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f8cf9 _public_65f8cf9

PROC_DECLARE(0x65f8ce0, internal_65f8ce0, public_65f8ce0);
extern "C" NAKED register_t __cdecl internal_65f8ce0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6601378
        je public_65f8cf9
        push esi
        call public_6600bb0
        add esp, 4
        public_65f8cf9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f8ce0)
    }
}

#undef public_65f8cf9
