#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16e50);

PROC_DECLARE(0x6d16e50, internal_6d16e50, public_6d16e50);
extern "C" NAKED register_t __cdecl internal_6d16e50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d16e50)
    }
}
