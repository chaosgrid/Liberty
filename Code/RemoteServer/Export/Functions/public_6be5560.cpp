#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5580);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be5578 _public_6be5578

PROC_DECLARE(0x6be5560, internal_6be5560, public_6be5560);
extern "C" NAKED register_t __cdecl internal_6be5560()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be5580
        test byte ptr ss : [esp+8], 1
        je public_6be5578
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be5578 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be5560)
    }
}

#undef public_6be5578
