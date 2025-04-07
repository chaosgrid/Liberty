#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d97470);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d974ac _public_6d974ac

PROC_DECLARE(0x6d97470, internal_6d97470, public_6d97470);
extern "C" NAKED register_t __cdecl internal_6d97470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6d974ac
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_6d974ac
        push ebx
        lea ebx, ds:[eax+1]
        push edi
        push ebx
        call public_6db1f8a
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
        public_6d974ac : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d97470)
    }
}

#undef public_6d974ac
