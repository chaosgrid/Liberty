#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17190);

PROC_DECLARE(0x6d17190, internal_6d17190, public_6d17190);
extern "C" NAKED register_t __cdecl internal_6d17190()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov dword ptr ss : [ebp-0x1C], ecx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 4
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ss : [ebp-0x11], dl
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dl, byte ptr ss : [ebp-0x11]
        mov byte ptr ds : [ecx+0x10], dl
        mov eax, dword ptr ss : [ebp-0x1C]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d17190)
    }
}
