#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411f00);

#define public_411f24 _public_411f24
#define public_411f40 _public_411f40

PROC_DECLARE(0x411f00, internal_411f00, public_411f00);
extern "C" NAKED register_t __cdecl internal_411f00()
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
        jne public_411f24
        mov dword ptr ds : [edx], esi
        pop esi
        mov byte ptr ds : [ebx], 0
        mov eax, edx
        pop ebx
        ret 4
        public_411f24 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_411f40
        mov eax, 0x7F
        public_411f40 : nop
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
        UNREACHABLE_TRAP(0x411f00)
    }
}

#undef public_411f24
#undef public_411f40
