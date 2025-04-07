#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f6c19 _public_4f6c19

PROC_DECLARE(0x4f6c00, internal_4f6c00, public_4f6c00);
extern "C" NAKED register_t __cdecl internal_4f6c00()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5d9944
        je public_4f6c19
        push esi
        call public_5b7e1d
        add esp, 4
        public_4f6c19 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f6c00)
    }
}

#undef public_4f6c19
