#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb970);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb968 _public_6beb968

PROC_DECLARE(0x6beb950, internal_6beb950, public_6beb950);
extern "C" NAKED register_t __cdecl internal_6beb950()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb970
        test byte ptr ss : [esp+8], 1
        je public_6beb968
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb968 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb950)
    }
}

#undef public_6beb968
