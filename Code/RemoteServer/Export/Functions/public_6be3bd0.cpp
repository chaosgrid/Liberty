#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be3bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be3c16 _public_6be3c16

PROC_DECLARE(0x6be3bd0, internal_6be3bd0, public_6be3bd0);
extern "C" NAKED register_t __cdecl internal_6be3bd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6be3c16
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        je public_6be3c16
        push ebx
        lea ebx, ds:[eax+eax]
        push edi
        push ebx
        call public_6c09d26
        mov dword ptr ss : [ebp+0x220], eax
        mov ecx, ebx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x224], ecx
        pop ebx
        public_6be3c16 : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6be3bd0)
    }
}

#undef public_6be3c16
