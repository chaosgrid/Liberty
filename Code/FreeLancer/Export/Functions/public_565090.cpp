#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5650a9 _public_5650a9

PROC_DECLARE(0x565090, internal_565090, public_565090);
extern "C" NAKED register_t __cdecl internal_565090()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5e2708
        je public_5650a9
        push esi
        call public_5b7e1d
        add esp, 4
        public_5650a9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x565090)
    }
}

#undef public_5650a9
