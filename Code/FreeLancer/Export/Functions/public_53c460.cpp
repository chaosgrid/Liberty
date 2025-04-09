#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c55e0);

PROC_DECLARE(0x53c460, internal_53c460, public_53c460);
extern "C" NAKED register_t __cdecl internal_53c460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_4c55e0
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x53c460)
    }
}
