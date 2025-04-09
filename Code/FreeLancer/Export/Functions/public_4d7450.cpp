#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72b0);
CLANG_FORWARD_PROC_SYMBOL(public_4d7450);

#define public_4d7472 _public_4d7472
#define public_4d748f _public_4d748f
#define public_4d74a7 _public_4d74a7

PROC_DECLARE(0x4d7450, internal_4d7450, public_4d7450);
extern "C" NAKED register_t __cdecl internal_4d7450()
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
        mov dword ptr ds : [ebx], offset public_5d6e30
        mov dword ptr ds : [ebx+4], eax
        jne public_4d7472
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4d74a7
        public_4d7472 : nop
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
        jb public_4d748f
        mov eax, 0x1F
        public_4d748f : nop
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
        public_4d74a7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_4c72b0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d81d8
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4d7450)
    }
}

#undef public_4d7472
#undef public_4d748f
#undef public_4d74a7
