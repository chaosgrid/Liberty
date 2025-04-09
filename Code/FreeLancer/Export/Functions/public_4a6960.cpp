#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a6960);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_4a6982 _public_4a6982
#define public_4a699f _public_4a699f
#define public_4a69b7 _public_4a69b7

PROC_DECLARE(0x4a6960, internal_4a6960, public_4a6960);
extern "C" NAKED register_t __cdecl internal_4a6960()
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
        jne public_4a6982
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4a69b7
        public_4a6982 : nop
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
        jb public_4a699f
        mov eax, 0x1F
        public_4a699f : nop
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
        public_4a69b7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d4600
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4a6960)
    }
}

#undef public_4a6982
#undef public_4a699f
#undef public_4a69b7
