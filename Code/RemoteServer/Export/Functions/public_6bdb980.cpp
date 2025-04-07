#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdb200);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdb998 _public_6bdb998

PROC_DECLARE(0x6bdb980, internal_6bdb980, public_6bdb980);
extern "C" NAKED register_t __cdecl internal_6bdb980()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bdb200
        test byte ptr ss : [esp+8], 1
        je public_6bdb998
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdb998 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bdb980)
    }
}

#undef public_6bdb998
