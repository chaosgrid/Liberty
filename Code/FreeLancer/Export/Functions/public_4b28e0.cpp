#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b28e0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_4b2902 _public_4b2902
#define public_4b291f _public_4b291f
#define public_4b2937 _public_4b2937

PROC_DECLARE(0x4b28e0, internal_4b28e0, public_4b28e0);
extern "C" NAKED register_t __cdecl internal_4b28e0()
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
        jne public_4b2902
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4b2937
        public_4b2902 : nop
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
        jb public_4b291f
        mov eax, 0x1F
        public_4b291f : nop
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
        public_4b2937 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d51a4
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4b28e0)
    }
}

#undef public_4b2902
#undef public_4b291f
#undef public_4b2937
