#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632bd50);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_632bdab _public_632bdab

PROC_DECLARE(0x632bd50, internal_632bd50, public_632bd50);
extern "C" NAKED register_t __cdecl internal_632bd50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        lea esi, ds:[ebx+ebx+2]
        mov eax, esi
        add eax, 3
        push edi
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, esi
        mov esi, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        cmp ebx, 2
        rep movsb
        jle public_632bdab
        cmp word ptr ds : [eax], 0x30
        jne public_632bdab
        cmp word ptr ds : [eax+2], 0x78
        jne public_632bdab
        push 0x10
        push 0
        push eax
        call dword ptr ds : [public_6399274]
        add esp, 0xC
        lea esp, ss:[ebp-0xC]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 8
        public_632bdab : nop
        push 0xA
        push 0
        push eax
        call dword ptr ds : [public_6399270]
        add esp, 0xC
        lea esp, ss:[ebp-0xC]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x632bd50)
    }
}

#undef public_632bdab
