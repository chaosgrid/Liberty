#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15e00);

PROC_DECLARE(0x6d15e00, internal_6d15e00, public_6d15e00);
extern "C" NAKED register_t __cdecl internal_6d15e00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edx+0x10], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax+0x18], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [edx+0x1C], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 0x24
        UNREACHABLE_TRAP(0x6d15e00)
    }
}
