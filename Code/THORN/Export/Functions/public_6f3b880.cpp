#include "THORN-PCH.h"

PROC_DECLARE(0x6f3b880, internal_6f3b880, public_6f3b880);
extern "C" NAKED register_t __cdecl internal_6f3b880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x30]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f3b880)
    }
}
