#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54daf0);

PROC_DECLARE(0x54daf0, internal_54daf0, public_54daf0);
extern "C" NAKED register_t __cdecl internal_54daf0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov dword ptr ds : [eax+0x70], 0xC
        xor ecx, ecx
        mov dword ptr ds : [eax+0x6C], ecx
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x78], 4
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x80], 8
        mov dword ptr ds : [eax+8], edx
        mov dl, byte ptr ds : [eax+0x58]
        and dl, 0xF8
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov byte ptr ds : [eax+0x58], dl
        mov dword ptr ds : [eax+0x68], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dword ptr ds : [eax], 0x7FFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x54daf0)
    }
}
