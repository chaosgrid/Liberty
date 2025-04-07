#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb230);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb228 _public_6beb228

PROC_DECLARE(0x6beb210, internal_6beb210, public_6beb210);
extern "C" NAKED register_t __cdecl internal_6beb210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb230
        test byte ptr ss : [esp+8], 1
        je public_6beb228
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb228 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb210)
    }
}

#undef public_6beb228
