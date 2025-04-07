#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f553e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f554a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c30);

PROC_DECLARE(0x6f56c30, internal_6f56c30, public_6f56c30);
extern "C" NAKED register_t __cdecl internal_6f56c30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push ebx
        call public_6f553e0
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, eax
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        push ebx
        rep movsb
        call public_6f554a0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f56c30)
    }
}
