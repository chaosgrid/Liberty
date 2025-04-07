#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ca50);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_59ca72 _public_59ca72
#define public_59ca8f _public_59ca8f
#define public_59caa7 _public_59caa7

PROC_DECLARE(0x59ca50, internal_59ca50, public_59ca50);
extern "C" NAKED register_t __cdecl internal_59ca50()
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
        jne public_59ca72
        mov byte ptr ds : [ebx+0xC], al
        jmp public_59caa7
        public_59ca72 : nop
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
        jb public_59ca8f
        mov eax, 0x1F
        public_59ca8f : nop
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
        public_59caa7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e5da8
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x59ca50)
    }
}

#undef public_59ca72
#undef public_59ca8f
#undef public_59caa7
