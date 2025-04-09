#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd250);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_4bd272 _public_4bd272
#define public_4bd28f _public_4bd28f
#define public_4bd2a7 _public_4bd2a7

PROC_DECLARE(0x4bd250, internal_4bd250, public_4bd250);
extern "C" NAKED register_t __cdecl internal_4bd250()
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
        jne public_4bd272
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4bd2a7
        public_4bd272 : nop
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
        jb public_4bd28f
        mov eax, 0x1F
        public_4bd28f : nop
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
        public_4bd2a7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d5dbc
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4bd250)
    }
}

#undef public_4bd272
#undef public_4bd28f
#undef public_4bd2a7
