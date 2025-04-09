#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53e430);

PROC_DECLARE(0x53e430, internal_53e430, public_53e430);
extern "C" NAKED register_t __cdecl internal_53e430()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x53e430)
    }
}
