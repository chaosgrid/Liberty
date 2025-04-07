#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ee9659 _public_6ee9659

PROC_DECLARE(0x6ee9640, internal_6ee9640, public_6ee9640);
extern "C" NAKED register_t __cdecl internal_6ee9640()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb7494
        je public_6ee9659
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ee9659 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee9640)
    }
}

#undef public_6ee9659
