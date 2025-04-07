#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6c05b9c _public_6c05b9c

PROC_DECLARE(0x6c05b60, internal_6c05b60, public_6c05b60);
extern "C" NAKED register_t __cdecl internal_6c05b60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push ebp
        mov ebp, ecx
        jbe public_6c05b9c
        push ebx
        push esi
        lea ebx, ds:[eax+1]
        push edi
        lea esi, ds:[ebx+ebx]
        push esi
        call public_6c09d26
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x60], eax
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
        mov dword ptr ss : [ebp+0x64], ebx
        pop ebx
        public_6c05b9c : nop
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6c05b60)
    }
}

#undef public_6c05b9c
