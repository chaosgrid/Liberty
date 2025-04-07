#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1a920);

PROC_DECLARE(0x6d1a920, internal_6d1a920, public_6d1a920);
extern "C" NAKED register_t __cdecl internal_6d1a920()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp-4]
        add edi, 4
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1a920)
    }
}
