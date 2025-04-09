#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e550);

PROC_DECLARE(0x41e550, internal_41e550, public_41e550);
extern "C" NAKED register_t __cdecl internal_41e550()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+0x28], ecx
        mov byte ptr ds : [eax+0x2C], cl
        mov dword ptr ds : [eax+0x6C], ecx
        mov byte ptr ds : [eax+0x70], cl
        mov dl, 0xFF
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov byte ptr ds : [eax+0x4F], dl
        mov byte ptr ds : [eax+0x4E], dl
        mov byte ptr ds : [eax+0x4D], dl
        mov byte ptr ds : [eax+0x4C], dl
        mov dword ptr ds : [eax+0x50], 1
        mov dword ptr ds : [eax+0x54], 0x3F800000
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x64], ecx
        ret 
        UNREACHABLE_TRAP(0x41e550)
    }
}
