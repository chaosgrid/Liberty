#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);

#define public_6ed0175 _public_6ed0175
#define public_6ed0193 _public_6ed0193

PROC_DECLARE(0x6ed0160, internal_6ed0160, public_6ed0160);
extern "C" NAKED register_t __cdecl internal_6ed0160()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_6ed0175
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_6ed0175 : nop
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
        cmp eax, 0x30
        lea ebx, ds:[edx+4]
        jb public_6ed0193
        mov eax, 0x2F
        public_6ed0193 : nop
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
        UNREACHABLE_TRAP(0x6ed0160)
    }
}

#undef public_6ed0175
#undef public_6ed0193
