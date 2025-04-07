#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c28ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

PROC_DECLARE(0x6c28ed0, internal_6c28ed0, public_6c28ed0);
extern "C" NAKED register_t __cdecl internal_6c28ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx+0x10]
        push edi
        sub eax, dword ptr ss : [esp+0x18]
        add eax, esi
        imul eax, dword ptr ds : [ebx+8]
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+8]
        imul ecx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx]
        mov edx, ecx
        mov ebp, eax
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ds:[ecx*4]
        push edx
        mov dword ptr ds : [ebx], ebp
        call public_6c34eac
        mov esi, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebp, eax
        mov edi, ebp
        rep movsd
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6c34ea0
        add esp, 0x10
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0xC], ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c28ed0)
    }
}
