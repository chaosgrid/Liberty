#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb350);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb348 _public_6beb348

PROC_DECLARE(0x6beb330, internal_6beb330, public_6beb330);
extern "C" NAKED register_t __cdecl internal_6beb330()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb350
        test byte ptr ss : [esp+8], 1
        je public_6beb348
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb348 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb330)
    }
}

#undef public_6beb348
