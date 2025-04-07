#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4be40);

PROC_DECLARE(0x6b4be40, internal_6b4be40, public_6b4be40);
extern "C" NAKED register_t __cdecl internal_6b4be40()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6db44
        mov dword ptr ds : [eax+0xC], 0x2000D
        ret 
        UNREACHABLE_TRAP(0x6b4be40)
    }
}
