#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_504bd9 _public_504bd9

PROC_DECLARE(0x504bc0, internal_504bc0, public_504bc0);
extern "C" NAKED register_t __cdecl internal_504bc0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5dad1c
        je public_504bd9
        push esi
        call public_5b7e1d
        add esp, 4
        public_504bd9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x504bc0)
    }
}

#undef public_504bd9
