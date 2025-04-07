#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a130);

PROC_DECLARE(0x661a130, internal_661a130, public_661a130);
extern "C" NAKED register_t __cdecl internal_661a130()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x661a130)
    }
}
