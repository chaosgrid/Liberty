#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);

PROC_DECLARE(0x6d8f510, internal_6d8f510, public_6d8f510);
extern "C" NAKED register_t __cdecl internal_6d8f510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x6d8f510)
    }
}
