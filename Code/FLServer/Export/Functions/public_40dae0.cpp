#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d480);
CLANG_FORWARD_PROC_SYMBOL(public_418f36);

#define public_40db03 _public_40db03

PROC_DECLARE(0x40dae0, internal_40dae0, public_40dae0);
extern "C" NAKED register_t __cdecl internal_40dae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_427828]
        call public_40d480
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        je public_40db03
        mov ecx, dword ptr ds : [public_427828]
        call public_40d480
        mov ecx, eax
        public_40db03 : nop
        push ecx
        mov ecx, esi
        call public_418f36
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40dae0)
    }
}

#undef public_40db03
