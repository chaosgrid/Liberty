#include "DebugLib-PCH.h"

PROC_DECLARE(0x65dcf24, internal_65dcf24, public_65dcf24);
extern "C" NAKED register_t __cdecl internal_65dcf24()
{
    __asm
    {
        push esi
        inc ebx
        xor dh, byte ptr ds : [eax]
        pop eax
        inc ebx
        xor byte ptr ds : [eax], dh
        UNREACHABLE_TRAP(0x65dcf24)
    }
}
