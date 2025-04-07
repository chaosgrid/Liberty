#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46bf90);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_46bfb2 _public_46bfb2
#define public_46bfcf _public_46bfcf
#define public_46bfe7 _public_46bfe7

PROC_DECLARE(0x46bf90, internal_46bf90, public_46bf90);
extern "C" NAKED register_t __cdecl internal_46bf90()
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
        jne public_46bfb2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_46bfe7
        public_46bfb2 : nop
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
        jb public_46bfcf
        mov eax, 0x1F
        public_46bfcf : nop
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
        public_46bfe7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5cffa8
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46bf90)
    }
}

#undef public_46bfb2
#undef public_46bfcf
#undef public_46bfe7
