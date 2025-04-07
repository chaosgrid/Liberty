#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed6180);

PROC_DECLARE(0x6ed6180, internal_6ed6180, public_6ed6180);
extern "C" NAKED register_t __cdecl internal_6ed6180()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+4]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], edx
        mov dl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov byte ptr ds : [eax+0x30], dl
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], offset public_6fb623c
        ret 4
        UNREACHABLE_TRAP(0x6ed6180)
    }
}
