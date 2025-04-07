#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b39e79 _public_6b39e79

PROC_DECLARE(0x6b39e60, internal_6b39e60, public_6b39e60);
extern "C" NAKED register_t __cdecl internal_6b39e60()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6b6bf00
        je public_6b39e79
        push esi
        call public_6b6a092
        add esp, 4
        public_6b39e79 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b39e60)
    }
}

#undef public_6b39e79
