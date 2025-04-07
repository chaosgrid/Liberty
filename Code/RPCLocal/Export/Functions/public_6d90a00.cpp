#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d90a00);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

PROC_DECLARE(0x6d90a00, internal_6d90a00, public_6d90a00);
extern "C" NAKED register_t __cdecl internal_6d90a00()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebp
        mov ebx, ecx
        call public_6db1f8a
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x20], eax
        mov ecx, ebp
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x24], ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d90a00)
    }
}
