#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2eda0);

PROC_DECLARE(0x6f2eda0, internal_6f2eda0, public_6f2eda0);
extern "C" NAKED register_t __cdecl internal_6f2eda0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x20], eax
        ret 4
        UNREACHABLE_TRAP(0x6f2eda0)
    }
}
