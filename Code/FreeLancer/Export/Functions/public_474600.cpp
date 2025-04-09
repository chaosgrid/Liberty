#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_474600);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_474622 _public_474622
#define public_47463f _public_47463f
#define public_474657 _public_474657

PROC_DECLARE(0x474600, internal_474600, public_474600);
extern "C" NAKED register_t __cdecl internal_474600()
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
        jne public_474622
        mov byte ptr ds : [ebx+0xC], al
        jmp public_474657
        public_474622 : nop
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
        jb public_47463f
        mov eax, 0x1F
        public_47463f : nop
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
        public_474657 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d099c
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x474600)
    }
}

#undef public_474622
#undef public_47463f
#undef public_474657
