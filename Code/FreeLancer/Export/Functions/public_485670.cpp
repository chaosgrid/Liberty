#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_485670);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_485692 _public_485692
#define public_4856af _public_4856af
#define public_4856c7 _public_4856c7

PROC_DECLARE(0x485670, internal_485670, public_485670);
extern "C" NAKED register_t __cdecl internal_485670()
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
        jne public_485692
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4856c7
        public_485692 : nop
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
        jb public_4856af
        mov eax, 0x1F
        public_4856af : nop
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
        public_4856c7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d1d20
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x485670)
    }
}

#undef public_485692
#undef public_4856af
#undef public_4856c7
