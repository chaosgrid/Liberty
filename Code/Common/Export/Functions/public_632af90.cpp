#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632afa9 _public_632afa9

PROC_DECLARE(0x632af90, internal_632af90, public_632af90);
extern "C" NAKED register_t __cdecl internal_632af90()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_63a4684
        je public_632afa9
        push esi
        call public_6391d5a
        add esp, 4
        public_632afa9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x632af90)
    }
}

#undef public_632afa9
