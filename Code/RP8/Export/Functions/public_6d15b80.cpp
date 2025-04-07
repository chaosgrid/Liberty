#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b80);

PROC_DECLARE(0x6d15b80, internal_6d15b80, public_6d15b80);
extern "C" NAKED register_t __cdecl internal_6d15b80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        and edx, 0xFFFFFFF0
        or edx, eax
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+8]
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        and eax, 0xF
        or eax, ecx
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d15b80)
    }
}
