#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9a160);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9a198 _public_6d9a198

PROC_DECLARE(0x6d9a160, internal_6d9a160, public_6d9a160);
extern "C" NAKED register_t __cdecl internal_6d9a160()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6d9a198
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6d9a198
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
        mov dword ptr ss : [ebp+0x28], ebx
        pop edi
        public_6d9a198 : nop
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d9a160)
    }
}

#undef public_6d9a198
