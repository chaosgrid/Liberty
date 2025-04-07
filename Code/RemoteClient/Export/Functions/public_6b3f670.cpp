#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3f670);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3f6b4 _public_6b3f6b4

PROC_DECLARE(0x6b3f670, internal_6b3f670, public_6b3f670);
extern "C" NAKED register_t __cdecl internal_6b3f670()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        mov ebp, ecx
        je public_6b3f6b4
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jbe public_6b3f6b4
        push ebx
        lea ebx, ds:[eax+1]
        lea eax, ds:[ebx*4]
        push edi
        push eax
        call public_6b6a134
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
        public_6b3f6b4 : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6b3f670)
    }
}

#undef public_6b3f6b4
