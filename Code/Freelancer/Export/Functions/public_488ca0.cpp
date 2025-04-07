#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488ca0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_488cc2 _public_488cc2
#define public_488cdf _public_488cdf
#define public_488cf7 _public_488cf7

PROC_DECLARE(0x488ca0, internal_488ca0, public_488ca0);
extern "C" NAKED register_t __cdecl internal_488ca0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, eax
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [ebx+0xC], al
        mov dword ptr ds : [ebx], offset public_5cb554
        mov dword ptr ds : [ebx+4], eax
        jne public_488cc2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_488cf7
        public_488cc2 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebp, ds:[ebx+0xC]
        jb public_488cdf
        mov eax, 0x1F
        public_488cdf : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        public_488cf7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d2440
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x488ca0)
    }
}

#undef public_488cc2
#undef public_488cdf
#undef public_488cf7
