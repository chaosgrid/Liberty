#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea710);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bea708 _public_6bea708

PROC_DECLARE(0x6bea6f0, internal_6bea6f0, public_6bea6f0);
extern "C" NAKED register_t __cdecl internal_6bea6f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bea710
        test byte ptr ss : [esp+8], 1
        je public_6bea708
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bea708 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bea6f0)
    }
}

#undef public_6bea708
