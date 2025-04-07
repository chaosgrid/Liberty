#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49580);

PROC_DECLARE(0x6b49580, internal_6b49580, public_6b49580);
extern "C" NAKED register_t __cdecl internal_6b49580()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x24], cl
        mov byte ptr ds : [eax+0x25], cl
        mov dword ptr ds : [eax], offset public_6b6ce20
        mov dword ptr ds : [eax+0xC], 0x30044
        ret 
        UNREACHABLE_TRAP(0x6b49580)
    }
}
