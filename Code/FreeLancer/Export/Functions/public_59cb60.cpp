#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59cb60);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_59cb82 _public_59cb82
#define public_59cb9f _public_59cb9f
#define public_59cbb7 _public_59cbb7

PROC_DECLARE(0x59cb60, internal_59cb60, public_59cb60);
extern "C" NAKED register_t __cdecl internal_59cb60()
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
        jne public_59cb82
        mov byte ptr ds : [ebx+0xC], al
        jmp public_59cbb7
        public_59cb82 : nop
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
        jb public_59cb9f
        mov eax, 0x1F
        public_59cb9f : nop
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
        public_59cbb7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e5db0
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x59cb60)
    }
}

#undef public_59cb82
#undef public_59cb9f
#undef public_59cbb7
