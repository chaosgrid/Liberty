#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b72e10);

#define public_6b72e6c _public_6b72e6c
#define public_6b72e73 _public_6b72e73
#define public_6b72e7e _public_6b72e7e

PROC_DECLARE(0x6b72e10, internal_6b72e10, public_6b72e10);
extern "C" NAKED register_t __cdecl internal_6b72e10()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov ebx, ecx
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        lea edi, ds:[ebx+0x20]
        mov dword ptr ds : [ebx+0x124], ecx
        inc ecx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_6b72e7e
        mov dword ptr ds : [ebx+0x23C], ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        test al, al
        je public_6b72e7e
        mov eax, dword ptr ds : [ebx+0x124]
        test eax, eax
        jle public_6b72e73
        mov cl, byte ptr ds : [eax+ebx+0x1F]
        cmp cl, 0x5C
        je public_6b72e6c
        cmp cl, 0x2F
        jne public_6b72e73
        public_6b72e6c : nop
        dec eax
        mov dword ptr ds : [ebx+0x124], eax
        public_6b72e73 : nop
        mov eax, dword ptr ds : [ebx+0x124]
        mov byte ptr ds : [ebx+eax+0x20], 0x5C
        public_6b72e7e : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b72e10)
    }
}

#undef public_6b72e6c
#undef public_6b72e73
#undef public_6b72e7e
