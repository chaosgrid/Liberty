#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306020);

#define public_6306044 _public_6306044
#define public_6306060 _public_6306060

PROC_DECLARE(0x6306020, internal_6306020, public_6306020);
extern "C" NAKED register_t __cdecl internal_6306020()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor eax, eax
        test esi, esi
        je public_6306060
        or ecx, 0xFFFFFFFF
        push ebx
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jb public_6306044
        lea eax, ds:[ecx-1]
        public_6306044 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        public_6306060 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6306020)
    }
}

#undef public_6306044
#undef public_6306060
