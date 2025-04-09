#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48b150);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_48b172 _public_48b172
#define public_48b18f _public_48b18f
#define public_48b1a7 _public_48b1a7

PROC_DECLARE(0x48b150, internal_48b150, public_48b150);
extern "C" NAKED register_t __cdecl internal_48b150()
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
        jne public_48b172
        mov byte ptr ds : [ebx+0xC], al
        jmp public_48b1a7
        public_48b172 : nop
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
        jb public_48b18f
        mov eax, 0x1F
        public_48b18f : nop
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
        public_48b1a7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d2690
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x48b150)
    }
}

#undef public_48b172
#undef public_48b18f
#undef public_48b1a7
