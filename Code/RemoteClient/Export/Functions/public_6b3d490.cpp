#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3d490);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

PROC_DECLARE(0x6b3d490, internal_6b3d490, public_6b3d490);
extern "C" NAKED register_t __cdecl internal_6b3d490()
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
        call public_6b6a134
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
        UNREACHABLE_TRAP(0x6b3d490)
    }
}
