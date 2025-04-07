#include "DALib-PCH.h"

PROC_DECLARE(0x65c6a10, internal_65c6a10, public_65c6a10);
extern "C" NAKED register_t __cdecl internal_65c6a10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov eax, ecx
        push edi
        lea esi, ds:[eax+4]
        xor eax, eax
        mov ecx, 4
        lea edi, ds:[edx+4]
        repe cmpsd
        pop edi
        sete al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c6a10)
    }
}
