#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3cd50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3cd8c _public_6b3cd8c

PROC_DECLARE(0x6b3cd50, internal_6b3cd50, public_6b3cd50);
extern "C" NAKED register_t __cdecl internal_6b3cd50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6b3cd8c
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_6b3cd8c
        push ebx
        lea ebx, ds:[eax+1]
        push edi
        push ebx
        call public_6b6a134
        mov dword ptr ss : [ebp+0x3C], eax
        mov ecx, ebx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov dword ptr ss : [ebp+0x28], ebx
        pop ebx
        public_6b3cd8c : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6b3cd50)
    }
}

#undef public_6b3cd8c
