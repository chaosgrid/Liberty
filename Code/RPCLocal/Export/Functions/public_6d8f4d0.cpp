#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d8f4e9 _public_6d8f4e9

PROC_DECLARE(0x6d8f4d0, internal_6d8f4d0, public_6d8f4d0);
extern "C" NAKED register_t __cdecl internal_6d8f4d0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6db3c54
        je public_6d8f4e9
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d8f4e9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d8f4d0)
    }
}

#undef public_6d8f4e9
