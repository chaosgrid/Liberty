#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43830);

PROC_DECLARE(0x6f43830, internal_6f43830, public_6f43830);
extern "C" NAKED register_t __cdecl internal_6f43830()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov dword ptr ds : [eax+0x6C], ecx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x74], edx
        mov dword ptr ds : [eax+0x64], edx
        mov dword ptr ds : [eax+0x54], edx
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov dword ptr ds : [eax+0x2C], eax
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], 1
        mov dword ptr ds : [eax+0x38], 5
        mov dword ptr ds : [eax+0x3C], edx
        mov byte ptr ds : [eax+0x40], cl
        mov byte ptr ds : [eax+0x41], cl
        mov dword ptr ds : [eax+0x44], edx
        mov dword ptr ds : [eax+0x48], ecx
        ret 
        UNREACHABLE_TRAP(0x6f43830)
    }
}
