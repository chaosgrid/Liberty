#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed8c0);

PROC_DECLARE(0x6bed8c0, internal_6bed8c0, public_6bed8c0);
extern "C" NAKED register_t __cdecl internal_6bed8c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6bed8c0)
    }
}
