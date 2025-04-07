#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5500);
CLANG_FORWARD_PROC_SYMBOL(public_65d5540);

PROC_DECLARE(0x65d5500, internal_65d5500, public_65d5500);
extern "C" NAKED register_t __cdecl internal_65d5500()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d5540
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d5500)
    }
}
