#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4cf20);

PROC_DECLARE(0x6b4cf20, internal_6b4cf20, public_6b4cf20);
extern "C" NAKED register_t __cdecl internal_6b4cf20()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6c308
        mov dword ptr ds : [eax+0xC], 0x20052
        mov dword ptr ds : [eax+0x20], 3
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov byte ptr ds : [eax+0x2C], cl
        ret 
        UNREACHABLE_TRAP(0x6b4cf20)
    }
}
