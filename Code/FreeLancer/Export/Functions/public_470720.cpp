#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_470720);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_470742 _public_470742
#define public_47075f _public_47075f
#define public_470777 _public_470777

PROC_DECLARE(0x470720, internal_470720, public_470720);
extern "C" NAKED register_t __cdecl internal_470720()
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
        jne public_470742
        mov byte ptr ds : [ebx+0xC], al
        jmp public_470777
        public_470742 : nop
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
        jb public_47075f
        mov eax, 0x1F
        public_47075f : nop
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
        public_470777 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d025c
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x470720)
    }
}

#undef public_470742
#undef public_47075f
#undef public_470777
