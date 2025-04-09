#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_48d5d2 _public_48d5d2
#define public_48d5ef _public_48d5ef
#define public_48d607 _public_48d607

PROC_DECLARE(0x48d5b0, internal_48d5b0, public_48d5b0);
extern "C" NAKED register_t __cdecl internal_48d5b0()
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
        jne public_48d5d2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_48d607
        public_48d5d2 : nop
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
        jb public_48d5ef
        mov eax, 0x1F
        public_48d5ef : nop
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
        public_48d607 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d2d90
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x48d5b0)
    }
}

#undef public_48d5d2
#undef public_48d5ef
#undef public_48d607
