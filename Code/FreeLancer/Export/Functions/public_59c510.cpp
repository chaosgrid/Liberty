#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c510);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_59c532 _public_59c532
#define public_59c54f _public_59c54f
#define public_59c567 _public_59c567

PROC_DECLARE(0x59c510, internal_59c510, public_59c510);
extern "C" NAKED register_t __cdecl internal_59c510()
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
        jne public_59c532
        mov byte ptr ds : [ebx+0xC], al
        jmp public_59c567
        public_59c532 : nop
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
        jb public_59c54f
        mov eax, 0x1F
        public_59c54f : nop
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
        public_59c567 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e5adc
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x59c510)
    }
}

#undef public_59c532
#undef public_59c54f
#undef public_59c567
