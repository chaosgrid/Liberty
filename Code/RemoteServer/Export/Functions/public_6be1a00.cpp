#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1a00);

PROC_DECLARE(0x6be1a00, internal_6be1a00, public_6be1a00);
extern "C" NAKED register_t __cdecl internal_6be1a00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6be1a00)
    }
}
