#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6becf20);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6becf33 _public_6becf33

PROC_DECLARE(0x6becf20, internal_6becf20, public_6becf20);
extern "C" NAKED register_t __cdecl internal_6becf20()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        je public_6becf33
        push esi
        call public_6c09aaa
        add esp, 4
        public_6becf33 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6becf20)
    }
}

#undef public_6becf33
