#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);

PROC_DECLARE(0x4144b0, internal_4144b0, public_4144b0);
extern "C" NAKED register_t __cdecl internal_4144b0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], dl
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, 0x7FFF
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+8], edx
        mov byte ptr ds : [eax+0x30], cl
        mov dword ptr ds : [eax+0x28], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4144b0)
    }
}
