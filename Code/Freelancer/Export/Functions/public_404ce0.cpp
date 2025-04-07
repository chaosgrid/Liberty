#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404ce0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_404d31 _public_404d31
#define public_404d40 _public_404d40

PROC_DECLARE(0x404ce0, internal_404ce0, public_404ce0);
extern "C" NAKED register_t __cdecl internal_404ce0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ds : [ebx+4]
        add eax, edi
        cmp eax, ecx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ds : [ebx+4], eax
        jle public_404d40
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        imul eax, 0x2C
        push ebp
        push esi
        push eax
        call public_5b7e84
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        test esi, esi
        mov ebp, eax
        je public_404d31
        mov ecx, edi
        imul ecx, 0x2C
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x10]
        public_404d31 : nop
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_5b7e1d
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], ebp
        pop ebp
        public_404d40 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, edi
        imul eax, 0x2C
        pop edi
        add eax, ecx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x404ce0)
    }
}

#undef public_404d31
#undef public_404d40
