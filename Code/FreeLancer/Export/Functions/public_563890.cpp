#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_563890);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_5638b2 _public_5638b2
#define public_5638cf _public_5638cf
#define public_5638e7 _public_5638e7

PROC_DECLARE(0x563890, internal_563890, public_563890);
extern "C" NAKED register_t __cdecl internal_563890()
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
        jne public_5638b2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_5638e7
        public_5638b2 : nop
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
        jb public_5638cf
        mov eax, 0x1F
        public_5638cf : nop
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
        public_5638e7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e21d8
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x563890)
    }
}

#undef public_5638b2
#undef public_5638cf
#undef public_5638e7
