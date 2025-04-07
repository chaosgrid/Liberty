#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40e909 _public_40e909

PROC_DECLARE(0x40e8f0, internal_40e8f0, public_40e8f0);
extern "C" NAKED register_t __cdecl internal_40e8f0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_41da90
        je public_40e909
        push esi
        call public_418978
        add esp, 4
        public_40e909 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e8f0)
    }
}

#undef public_40e909
