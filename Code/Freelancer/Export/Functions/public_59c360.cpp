#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c360);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_59c382 _public_59c382
#define public_59c39f _public_59c39f
#define public_59c3b7 _public_59c3b7

PROC_DECLARE(0x59c360, internal_59c360, public_59c360);
extern "C" NAKED register_t __cdecl internal_59c360()
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
        jne public_59c382
        mov byte ptr ds : [ebx+0xC], al
        jmp public_59c3b7
        public_59c382 : nop
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
        jb public_59c39f
        mov eax, 0x1F
        public_59c39f : nop
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
        public_59c3b7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e5a5c
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x59c360)
    }
}

#undef public_59c382
#undef public_59c39f
#undef public_59c3b7
