#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0dfa0);

#define public_6f0dfb5 _public_6f0dfb5
#define public_6f0dfd5 _public_6f0dfd5

PROC_DECLARE(0x6f0dfa0, internal_6f0dfa0, public_6f0dfa0);
extern "C" NAKED register_t __cdecl internal_6f0dfa0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_6f0dfb5
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_6f0dfb5 : nop
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
        cmp eax, 0x100
        lea ebx, ds:[edx+4]
        jb public_6f0dfd5
        mov eax, 0xFF
        public_6f0dfd5 : nop
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
        UNREACHABLE_TRAP(0x6f0dfa0)
    }
}

#undef public_6f0dfb5
#undef public_6f0dfd5
