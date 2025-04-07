#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed4420);

PROC_DECLARE(0x6ed4420, internal_6ed4420, public_6ed4420);
extern "C" NAKED register_t __cdecl internal_6ed4420()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+8], cl
        mov byte ptr ds : [eax+0xC], dl
        mov dl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov byte ptr ds : [eax+0x1C], dl
        mov dl, byte ptr ss : [esp+3]
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov byte ptr ds : [eax+0x44], dl
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x40], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ed4420)
    }
}
