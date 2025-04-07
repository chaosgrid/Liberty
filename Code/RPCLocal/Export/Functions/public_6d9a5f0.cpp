#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9a628 _public_6d9a628

PROC_DECLARE(0x6d9a5f0, internal_6d9a5f0, public_6d9a5f0);
extern "C" NAKED register_t __cdecl internal_6d9a5f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6d9a628
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6d9a628
        push edi
        push ebx
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x34], eax
        mov ecx, ebx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov dword ptr ss : [ebp+0x24], ebx
        pop edi
        public_6d9a628 : nop
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d9a5f0)
    }
}

#undef public_6d9a628
