#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1040);

PROC_DECLARE(0x6ee1040, internal_6ee1040, public_6ee1040);
extern "C" NAKED register_t __cdecl internal_6ee1040()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov byte ptr ds : [eax+0x50], cl
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        ret 
        UNREACHABLE_TRAP(0x6ee1040)
    }
}
