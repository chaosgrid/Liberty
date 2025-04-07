#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57ec50);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_57ec72 _public_57ec72
#define public_57ec8f _public_57ec8f
#define public_57eca7 _public_57eca7

PROC_DECLARE(0x57ec50, internal_57ec50, public_57ec50);
extern "C" NAKED register_t __cdecl internal_57ec50()
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
        jne public_57ec72
        mov byte ptr ds : [ebx+0xC], al
        jmp public_57eca7
        public_57ec72 : nop
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
        jb public_57ec8f
        mov eax, 0x1F
        public_57ec8f : nop
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
        public_57eca7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e4960
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x57ec50)
    }
}

#undef public_57ec72
#undef public_57ec8f
#undef public_57eca7
