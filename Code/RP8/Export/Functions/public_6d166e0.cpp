#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d166e0);

PROC_DECLARE(0x6d166e0, internal_6d166e0, public_6d166e0);
extern "C" NAKED register_t __cdecl internal_6d166e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x20], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x24], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x28], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x30], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0x34], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x38], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x2C], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x3C], 0x3F800000
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d166e0)
    }
}
