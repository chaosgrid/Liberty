#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17630);

PROC_DECLARE(0x6d17630, internal_6d17630, public_6d17630);
extern "C" NAKED register_t __cdecl internal_6d17630()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov dword ptr ss : [ebp-0x18], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x10]
        mov byte ptr ss : [ebp-0x11], cl
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x18]
        mov cl, byte ptr ss : [ebp-0x11]
        mov byte ptr ds : [eax+0x10], cl
        mov eax, dword ptr ss : [ebp-0x18]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d17630)
    }
}
