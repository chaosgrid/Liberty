#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

PROC_DECLARE(0x6d5c540, internal_6d5c540, public_6d5c540);
extern "C" NAKED register_t __cdecl internal_6d5c540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6d5c540)
    }
}
