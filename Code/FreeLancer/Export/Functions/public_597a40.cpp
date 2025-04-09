#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597a40);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_597a62 _public_597a62
#define public_597a7f _public_597a7f
#define public_597a97 _public_597a97

PROC_DECLARE(0x597a40, internal_597a40, public_597a40);
extern "C" NAKED register_t __cdecl internal_597a40()
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
        jne public_597a62
        mov byte ptr ds : [ebx+0xC], al
        jmp public_597a97
        public_597a62 : nop
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
        jb public_597a7f
        mov eax, 0x1F
        public_597a7f : nop
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
        public_597a97 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e5664
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x597a40)
    }
}

#undef public_597a62
#undef public_597a7f
#undef public_597a97
