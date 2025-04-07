#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72b0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4630);

#define public_4d4652 _public_4d4652
#define public_4d466f _public_4d466f
#define public_4d4687 _public_4d4687

PROC_DECLARE(0x4d4630, internal_4d4630, public_4d4630);
extern "C" NAKED register_t __cdecl internal_4d4630()
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
        mov dword ptr ds : [ebx], offset public_5d6e30
        mov dword ptr ds : [ebx+4], eax
        jne public_4d4652
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4d4687
        public_4d4652 : nop
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
        jb public_4d466f
        mov eax, 0x1F
        public_4d466f : nop
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
        public_4d4687 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_4c72b0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d7c0c
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4d4630)
    }
}

#undef public_4d4652
#undef public_4d466f
#undef public_4d4687
