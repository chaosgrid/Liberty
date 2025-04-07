#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67124d0);
CLANG_FORWARD_PROC_SYMBOL(public_6712be0);
CLANG_FORWARD_PROC_SYMBOL(public_6712db0);
CLANG_FORWARD_PROC_SYMBOL(public_6712ef0);

#define public_6712f07 _public_6712f07

PROC_DECLARE(0x6712ef0, internal_6712ef0, public_6712ef0);
extern "C" NAKED register_t __cdecl internal_6712ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x90]
        test ecx, ecx
        je public_6712f07
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_67124d0
        public_6712f07 : nop
        mov ecx, esi
        call public_6712db0
        mov ecx, esi
        call public_6712be0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6712ef0)
    }
}

#undef public_6712f07
