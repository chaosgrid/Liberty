#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e580);

PROC_DECLARE(0x6b4e580, internal_6b4e580, public_6b4e580);
extern "C" NAKED register_t __cdecl internal_6b4e580()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov word ptr ds : [eax+0x24], cx
        mov byte ptr ds : [eax+0x28], dl
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax], offset public_6b6e0e4
        mov dword ptr ds : [eax+0xC], 0x1001D
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b4e580)
    }
}
