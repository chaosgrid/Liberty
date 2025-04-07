#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c730);

PROC_DECLARE(0x6f4c730, internal_6f4c730, public_6f4c730);
extern "C" NAKED register_t __cdecl internal_6f4c730()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        push esi
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        shl ecx, 4
        add edi, ecx
        sub edx, edi
        sar edx, 4
        shl edx, 4
        shl esi, 4
        push edx
        mov ebx, esi
        lea eax, ds:[ebx+edi]
        push edi
        push eax
        call dword ptr ds : [public_6f5a078]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[ebp+0x20]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [public_6f61e28]
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x28]
        add edi, ebx
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        call public_6f4c6a0
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4c730)
    }
}
