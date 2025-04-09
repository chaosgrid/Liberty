#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597b50);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_597b72 _public_597b72
#define public_597b8f _public_597b8f
#define public_597ba7 _public_597ba7

PROC_DECLARE(0x597b50, internal_597b50, public_597b50);
extern "C" NAKED register_t __cdecl internal_597b50()
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
        jne public_597b72
        mov byte ptr ds : [ebx+0xC], al
        jmp public_597ba7
        public_597b72 : nop
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
        jb public_597b8f
        mov eax, 0x1F
        public_597b8f : nop
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
        public_597ba7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e566c
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x597b50)
    }
}

#undef public_597b72
#undef public_597b8f
#undef public_597ba7
