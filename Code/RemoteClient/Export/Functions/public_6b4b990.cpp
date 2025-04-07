#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b990);

PROC_DECLARE(0x6b4b990, internal_6b4b990, public_6b4b990);
extern "C" NAKED register_t __cdecl internal_6b4b990()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov edx, 1
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov byte ptr ds : [eax+0x34], dl
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax], offset public_6b6c278
        mov dword ptr ds : [eax+0xC], 0x20032
        ret 
        UNREACHABLE_TRAP(0x6b4b990)
    }
}
