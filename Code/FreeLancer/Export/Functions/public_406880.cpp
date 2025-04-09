#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);

PROC_DECLARE(0x406880, internal_406880, public_406880);
extern "C" NAKED register_t __cdecl internal_406880()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x406880)
    }
}
