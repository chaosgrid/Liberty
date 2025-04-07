#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b5822c _public_6b5822c

PROC_DECLARE(0x6b581f0, internal_6b581f0, public_6b581f0);
extern "C" NAKED register_t __cdecl internal_6b581f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebp
        mov ebp, ecx
        jbe public_6b5822c
        push ebx
        push esi
        lea ebx, ds:[eax+1]
        push edi
        push ebx
        call public_6b6a134
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x8C], eax
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
        pop esi
        mov dword ptr ss : [ebp+0x6C], ebx
        pop ebx
        public_6b5822c : nop
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6b581f0)
    }
}

#undef public_6b5822c
