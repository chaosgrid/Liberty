#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5375d0);

#define public_5375bb _public_5375bb

PROC_DECLARE(0x5375a0, internal_5375a0, public_5375a0);
extern "C" NAKED register_t __cdecl internal_5375a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5375d0
        test byte ptr ss : [esp+8], 1
        je public_5375bb
        push esi
        mov ecx, offset public_6789a4
        call dword ptr ds : [public_5c60c4]
        public_5375bb : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5375a0)
    }
}

#undef public_5375bb
