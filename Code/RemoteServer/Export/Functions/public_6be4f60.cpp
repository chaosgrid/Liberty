#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be4f60);

PROC_DECLARE(0x6be4f60, internal_6be4f60, public_6be4f60);
extern "C" NAKED register_t __cdecl internal_6be4f60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x48], 0x3F800000
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax], offset public_6c0c908
        mov dword ptr ds : [eax+0xC], 0x20037
        ret 
        UNREACHABLE_TRAP(0x6be4f60)
    }
}
