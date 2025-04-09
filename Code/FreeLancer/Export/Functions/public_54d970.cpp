#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54d970);

#define public_54d9fc _public_54d9fc
#define public_54da02 _public_54da02
#define public_54da19 _public_54da19
#define public_54da1f _public_54da1f
#define public_54da37 _public_54da37
#define public_54da3d _public_54da3d
#define public_54da53 _public_54da53
#define public_54da59 _public_54da59
#define public_54da70 _public_54da70
#define public_54da76 _public_54da76
#define public_54da95 _public_54da95

PROC_DECLARE(0x54d970, internal_54d970, public_54d970);
extern "C" NAKED register_t __cdecl internal_54d970()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        push esi
        lea edx, ds:[ecx+0xC]
        add ecx, 0x18
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+8]
        mov eax, edx
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], esi
        fstp dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], esi
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+8]
        mov eax, ecx
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], esi
        fstp dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], esi
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c75dc]
        pop esi
        fnstsw ax
        test ah, 5
        jp public_54d9fc
        fld dword ptr ds : [edx]
        jmp public_54da02
        public_54d9fc : nop
        fld dword ptr ds : [public_5c75dc]
        public_54da02 : nop
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54da19
        fld dword ptr ds : [edx+4]
        jmp public_54da1f
        public_54da19 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54da1f : nop
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54da37
        fld dword ptr ds : [edx+8]
        jmp public_54da3d
        public_54da37 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54da3d : nop
        fstp dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54da53
        fld dword ptr ds : [ecx]
        jmp public_54da59
        public_54da53 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54da59 : nop
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54da70
        fld dword ptr ds : [ecx+4]
        jmp public_54da76
        public_54da70 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54da76 : nop
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54da95
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 8
        public_54da95 : nop
        mov dword ptr ds : [ecx+8], 0x3F800000
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x54d970)
    }
}

#undef public_54d9fc
#undef public_54da02
#undef public_54da19
#undef public_54da1f
#undef public_54da37
#undef public_54da3d
#undef public_54da53
#undef public_54da59
#undef public_54da70
#undef public_54da76
#undef public_54da95
