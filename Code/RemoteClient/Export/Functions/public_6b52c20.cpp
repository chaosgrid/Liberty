#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b52c58 _public_6b52c58

PROC_DECLARE(0x6b52c20, internal_6b52c20, public_6b52c20);
extern "C" NAKED register_t __cdecl internal_6b52c20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6b52c58
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6b52c58
        push edi
        push ebx
        call public_6b6a134
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
        public_6b52c58 : nop
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b52c20)
    }
}

#undef public_6b52c58
