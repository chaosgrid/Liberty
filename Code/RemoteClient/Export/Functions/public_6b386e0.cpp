#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b386e0);

PROC_DECLARE(0x6b386e0, internal_6b386e0, public_6b386e0);
extern "C" NAKED register_t __cdecl internal_6b386e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6b386e0)
    }
}
