#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec1f0);

#define public_6eec214 _public_6eec214
#define public_6eec22e _public_6eec22e

PROC_DECLARE(0x6eec1f0, internal_6eec1f0, public_6eec1f0);
extern "C" NAKED register_t __cdecl internal_6eec1f0()
{
    __asm
    {
        push ebx
        mov edx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6eec214
        mov dword ptr ds : [edx], esi
        pop esi
        mov byte ptr ds : [ebx], 0
        mov eax, edx
        pop ebx
        ret 4
        public_6eec214 : nop
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
        jb public_6eec22e
        mov eax, 0x3F
        public_6eec22e : nop
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
        pop esi
        mov dword ptr ds : [edx], eax
        mov eax, edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eec1f0)
    }
}

#undef public_6eec214
#undef public_6eec22e
