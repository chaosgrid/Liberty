#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7f70);

#define public_4f804b _public_4f804b

PROC_DECLARE(0x4f8030, internal_4f8030, public_4f8030);
extern "C" NAKED register_t __cdecl internal_4f8030()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4f7f70
        test byte ptr ss : [esp+8], 1
        je public_4f804b
        push esi
        mov ecx, offset public_674ccc
        call dword ptr ds : [public_5c60c4]
        public_4f804b : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f8030)
    }
}

#undef public_4f804b
