#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46bd90);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_46bdb2 _public_46bdb2
#define public_46bdcf _public_46bdcf
#define public_46bde7 _public_46bde7

PROC_DECLARE(0x46bd90, internal_46bd90, public_46bd90);
extern "C" NAKED register_t __cdecl internal_46bd90()
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
        jne public_46bdb2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_46bde7
        public_46bdb2 : nop
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
        jb public_46bdcf
        mov eax, 0x1F
        public_46bdcf : nop
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
        public_46bde7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5cfea8
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46bd90)
    }
}

#undef public_46bdb2
#undef public_46bdcf
#undef public_46bde7
