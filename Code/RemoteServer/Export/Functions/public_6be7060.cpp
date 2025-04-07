#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7080);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be7078 _public_6be7078

PROC_DECLARE(0x6be7060, internal_6be7060, public_6be7060);
extern "C" NAKED register_t __cdecl internal_6be7060()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be7080
        test byte ptr ss : [esp+8], 1
        je public_6be7078
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be7078 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be7060)
    }
}

#undef public_6be7078
