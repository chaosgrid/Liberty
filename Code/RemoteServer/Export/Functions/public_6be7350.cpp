#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7350);

PROC_DECLARE(0x6be7350, internal_6be7350, public_6be7350);
extern "C" NAKED register_t __cdecl internal_6be7350()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0c8b8
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov edx, dword ptr ds : [public_6c0b014]
        mov dx, word ptr ds : [edx]
        mov word ptr ds : [eax+0x2C], dx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], 0xBF800000
        mov byte ptr ds : [eax+0x38], cl
        mov dword ptr ds : [eax], offset public_6c0cc08
        mov dword ptr ds : [eax+0xC], 0x20041
        ret 
        UNREACHABLE_TRAP(0x6be7350)
    }
}
