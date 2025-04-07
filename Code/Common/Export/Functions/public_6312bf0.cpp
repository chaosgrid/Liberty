#include "Common-PCH.h"


#define public_6312c18 _public_6312c18
#define public_6312c1c _public_6312c1c
#define public_6312c6b _public_6312c6b
#define public_6312c76 _public_6312c76
#define public_6312ca7 _public_6312ca7
#define public_6312cc8 _public_6312cc8

PROC_DECLARE(0x6312bf0, internal_6312bf0, public_6312bf0);
extern "C" NAKED register_t __cdecl internal_6312bf0()
{
    __asm
    {
        push ebx
        push ebp
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, 4
        push edi
        lea ebx, ds:[ecx-1]
        jl public_6312c18
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        add esi, 0xFFFFFFFC
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], esi
        jmp public_6312c1c
        public_6312c18 : nop
        mov edx, dword ptr ss : [esp+0x14]
        public_6312c1c : nop
        cmp edx, 0xFFFFFFFF
        je public_6312cc8
        cmp edx, 0x4000
        jae public_6312cc8
        cmp edx, ebx
        mov ecx, dword ptr ds : [eax+0xC]
        ja public_6312c76
        cmp edx, ecx
        mov ebx, dword ptr ss : [esp+0x14]
        jg public_6312c6b
        test edx, edx
        jl public_6312c6b
        je public_6312c6b
        mov esi, dword ptr ds : [eax+8]
        mov ecx, edx
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        add esi, edx
        sub ecx, edx
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], ecx
        public_6312c6b : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [edx+ebx], 0
        pop ebx
        ret 8
        public_6312c76 : nop
        cmp ebx, ecx
        jg public_6312ca7
        test ebx, ebx
        jl public_6312ca7
        je public_6312ca7
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        add esi, ebx
        sub ecx, ebx
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], ecx
        public_6312ca7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ebx+ecx], 0
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        sub edx, ebx
        add esi, edx
        pop edi
        mov dword ptr ds : [eax+8], esi
        pop esi
        sub ecx, edx
        pop ebp
        mov dword ptr ds : [eax+0xC], ecx
        pop ebx
        ret 8
        public_6312cc8 : nop
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [edx], 0
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6312bf0)
    }
}

#undef public_6312c18
#undef public_6312c1c
#undef public_6312c6b
#undef public_6312c76
#undef public_6312ca7
#undef public_6312cc8
