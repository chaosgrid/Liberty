#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48520);

PROC_DECLARE(0x6b48520, internal_6b48520, public_6b48520);
extern "C" NAKED register_t __cdecl internal_6b48520()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6cb80
        mov dword ptr ds : [eax+0xC], 0x30027
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        ret 
        UNREACHABLE_TRAP(0x6b48520)
    }
}
