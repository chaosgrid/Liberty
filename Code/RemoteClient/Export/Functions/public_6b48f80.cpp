#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48f80);

PROC_DECLARE(0x6b48f80, internal_6b48f80, public_6b48f80);
extern "C" NAKED register_t __cdecl internal_6b48f80()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], 0x3F800000
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x6C], ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov dword ptr ds : [eax+0x88], ecx
        mov dword ptr ds : [eax+0x8C], ecx
        mov dword ptr ds : [eax], offset public_6b6cd40
        mov dword ptr ds : [eax+0xC], 0x30022
        ret 
        UNREACHABLE_TRAP(0x6b48f80)
    }
}
