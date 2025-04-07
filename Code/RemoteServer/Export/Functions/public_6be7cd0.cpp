#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7cd0);

PROC_DECLARE(0x6be7cd0, internal_6be7cd0, public_6be7cd0);
extern "C" NAKED register_t __cdecl internal_6be7cd0()
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
        mov byte ptr ds : [eax+0x40], dl
        mov dl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov byte ptr ds : [eax+0x58], dl
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax], offset public_6c0ccb8
        mov dword ptr ds : [eax+0xC], 0x20054
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov word ptr ds : [eax+0x20], cx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], 0xFFFFFFFF
        mov word ptr ds : [eax+0x2C], cx
        mov dword ptr ds : [eax+0x30], ecx
        mov byte ptr ds : [eax+0x68], cl
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6be7cd0)
    }
}
