#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345670);
CLANG_FORWARD_PROC_SYMBOL(public_6345760);

PROC_DECLARE(0x6345760, internal_6345760, public_6345760);
extern "C" NAKED register_t __cdecl internal_6345760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        call public_6345670
        mov dword ptr ds : [esi], offset public_63a5454
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi+4], 1
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6345760)
    }
}
