#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4d7f0);

PROC_DECLARE(0x6b4d7f0, internal_6b4d7f0, public_6b4d7f0);
extern "C" NAKED register_t __cdecl internal_6b4d7f0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov dword ptr ds : [eax+4], 1
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov edx, 0x7F7FFFFF
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x2C], edx
        mov dl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+0x30], dl
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], offset public_6b6dfb4
        mov dword ptr ds : [eax+0xC], 0x10002
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b4d7f0)
    }
}
