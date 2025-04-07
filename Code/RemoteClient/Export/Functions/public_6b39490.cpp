#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a250);

#define public_6b394d2 _public_6b394d2

PROC_DECLARE(0x6b39490, internal_6b39490, public_6b39490);
extern "C" NAKED register_t __cdecl internal_6b39490()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ebx+1]
        push esi
        add eax, 3
        push edi
        and eax, 0xFFFFFFFC
        call public_6b6a250
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, esp
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push eax
        mov byte ptr ds : [eax+ebx], 0
        call dword ptr ds : [public_6b6b108]
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_6b394d2
        mov dword ptr ds : [eax], ebx
        public_6b394d2 : nop
        xor eax, eax
        lea esp, ss:[ebp-0xC]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6b39490)
    }
}

#undef public_6b394d2
