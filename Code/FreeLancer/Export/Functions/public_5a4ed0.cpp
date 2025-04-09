#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dab0);
CLANG_FORWARD_PROC_SYMBOL(public_5a4ed0);

#define public_5a4ef2 _public_5a4ef2
#define public_5a4f0f _public_5a4f0f
#define public_5a4f27 _public_5a4f27

PROC_DECLARE(0x5a4ed0, internal_5a4ed0, public_5a4ed0);
extern "C" NAKED register_t __cdecl internal_5a4ed0()
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
        jne public_5a4ef2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_5a4f27
        public_5a4ef2 : nop
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
        jb public_5a4f0f
        mov eax, 0x1F
        public_5a4f0f : nop
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
        public_5a4f27 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e6218
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a4ed0)
    }
}

#undef public_5a4ef2
#undef public_5a4f0f
#undef public_5a4f27
