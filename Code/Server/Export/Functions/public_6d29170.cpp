#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29170);

PROC_DECLARE(0x6d29170, internal_6d29170, public_6d29170);
extern "C" NAKED register_t __cdecl internal_6d29170()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d68f94
        ret 4
        UNREACHABLE_TRAP(0x6d29170)
    }
}
