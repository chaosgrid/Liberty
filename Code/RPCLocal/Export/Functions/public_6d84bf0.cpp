#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84bf0);

PROC_DECLARE(0x6d84bf0, internal_6d84bf0, public_6d84bf0);
extern "C" NAKED register_t __cdecl internal_6d84bf0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x30], ecx
        ret 
        UNREACHABLE_TRAP(0x6d84bf0)
    }
}
