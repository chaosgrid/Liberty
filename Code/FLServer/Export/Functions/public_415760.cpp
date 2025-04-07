#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a92);

PROC_DECLARE(0x415760, internal_415760, public_415760);
extern "C" NAKED register_t __cdecl internal_415760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        push 0x82
        mov esi, ecx
        call public_418a92
        mov dword ptr ds : [esi], offset public_41e3e8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415760)
    }
}
