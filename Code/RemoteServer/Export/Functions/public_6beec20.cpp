#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6beec5c _public_6beec5c

PROC_DECLARE(0x6beec20, internal_6beec20, public_6beec20);
extern "C" NAKED register_t __cdecl internal_6beec20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6beec5c
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_6beec5c
        push ebx
        lea ebx, ds:[eax+1]
        push edi
        push ebx
        call public_6c09d26
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
        public_6beec5c : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6beec20)
    }
}

#undef public_6beec5c
