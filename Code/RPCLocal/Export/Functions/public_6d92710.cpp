#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d92710);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d92754 _public_6d92754

PROC_DECLARE(0x6d92710, internal_6d92710, public_6d92710);
extern "C" NAKED register_t __cdecl internal_6d92710()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        mov ebp, ecx
        je public_6d92754
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jbe public_6d92754
        push ebx
        lea ebx, ds:[eax+1]
        lea eax, ds:[ebx*4]
        push edi
        push eax
        call public_6db1f8a
        lea ecx, ds:[ebx+ebx]
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [ebp+0x64], eax
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov dword ptr ss : [ebp+0x60], ebx
        pop ebx
        public_6d92754 : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d92710)
    }
}

#undef public_6d92754
