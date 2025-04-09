#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cebc0);

#define public_4cebd5 _public_4cebd5
#define public_4cebf3 _public_4cebf3

PROC_DECLARE(0x4cebc0, internal_4cebc0, public_4cebc0);
extern "C" NAKED register_t __cdecl internal_4cebc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_4cebd5
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_4cebd5 : nop
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea ebx, ds:[edx+4]
        jb public_4cebf3
        mov eax, 0x3F
        public_4cebf3 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop ebp
        mov byte ptr ds : [eax+ebx], 0
        pop ebx
        mov dword ptr ds : [edx], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4cebc0)
    }
}

#undef public_4cebd5
#undef public_4cebf3
