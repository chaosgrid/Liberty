#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58fac0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_58fae2 _public_58fae2
#define public_58faff _public_58faff
#define public_58fb17 _public_58fb17

PROC_DECLARE(0x58fac0, internal_58fac0, public_58fac0);
extern "C" NAKED register_t __cdecl internal_58fac0()
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
        jne public_58fae2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_58fb17
        public_58fae2 : nop
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
        jb public_58faff
        mov eax, 0x1F
        public_58faff : nop
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
        public_58fb17 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e5318
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x58fac0)
    }
}

#undef public_58fae2
#undef public_58faff
#undef public_58fb17
