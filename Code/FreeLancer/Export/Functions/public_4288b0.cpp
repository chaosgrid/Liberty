#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);

#define public_4288cb _public_4288cb

PROC_DECLARE(0x4288b0, internal_4288b0, public_4288b0);
extern "C" NAKED register_t __cdecl internal_4288b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_429140
        test byte ptr ss : [esp+8], 1
        je public_4288cb
        push esi
        mov ecx, offset public_667a24
        call dword ptr ds : [public_5c60c4]
        public_4288cb : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4288b0)
    }
}

#undef public_4288cb
