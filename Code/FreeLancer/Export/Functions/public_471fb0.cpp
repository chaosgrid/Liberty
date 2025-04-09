#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471fb0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_471fd2 _public_471fd2
#define public_471fef _public_471fef
#define public_472007 _public_472007

PROC_DECLARE(0x471fb0, internal_471fb0, public_471fb0);
extern "C" NAKED register_t __cdecl internal_471fb0()
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
        jne public_471fd2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_472007
        public_471fd2 : nop
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
        jb public_471fef
        mov eax, 0x1F
        public_471fef : nop
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
        public_472007 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d04e4
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x471fb0)
    }
}

#undef public_471fd2
#undef public_471fef
#undef public_472007
