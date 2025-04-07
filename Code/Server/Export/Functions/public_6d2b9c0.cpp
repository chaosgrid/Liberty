#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);

#define public_6d2b9d7 _public_6d2b9d7

PROC_DECLARE(0x6d2b9c0, internal_6d2b9c0, public_6d2b9c0);
extern "C" NAKED register_t __cdecl internal_6d2b9c0()
{
    __asm
    {
        movzx edx, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, edx
        and ecx, 0x8000001F
        jns public_6d2b9d7
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2b9d7 : nop
        mov eax, 1
        shl eax, cl
        shr edx, 5
        mov ecx, dword ptr ds : [esi+edx*4]
        pop esi
        and eax, ecx
        neg eax
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x6d2b9c0)
    }
}

#undef public_6d2b9d7
