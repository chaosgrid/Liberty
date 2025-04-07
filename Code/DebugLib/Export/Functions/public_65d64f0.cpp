#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5540);
CLANG_FORWARD_PROC_SYMBOL(public_65d64f0);

PROC_DECLARE(0x65d64f0, internal_65d64f0, public_65d64f0);
extern "C" NAKED register_t __cdecl internal_65d64f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        xor eax, eax
        mov dword ptr ds : [esi+0x100C], eax
        mov dword ptr ds : [esi+0x1008], eax
        mov dword ptr ds : [esi+0x2014], eax
        mov dword ptr ds : [esi+0x2010], eax
        mov dword ptr ds : [esi], offset public_65e1448
        call public_65d5540
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d64f0)
    }
}
