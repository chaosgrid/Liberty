#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_408ad5 _public_408ad5

PROC_DECLARE(0x408ac0, internal_408ac0, public_408ac0);
extern "C" NAKED register_t __cdecl internal_408ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push eax
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_408ad5
        pop ebx
        ret 4
        public_408ad5 : nop
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x408ac0)
    }
}

#undef public_408ad5
