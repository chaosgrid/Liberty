#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54fee0);

#define public_54ff4d _public_54ff4d
#define public_54ff53 _public_54ff53
#define public_54ff6a _public_54ff6a
#define public_54ff70 _public_54ff70
#define public_54ff88 _public_54ff88
#define public_54ff8e _public_54ff8e
#define public_54ffa4 _public_54ffa4
#define public_54ffaa _public_54ffaa
#define public_54ffc1 _public_54ffc1
#define public_54ffc7 _public_54ffc7
#define public_54ffe6 _public_54ffe6

PROC_DECLARE(0x54fee0, internal_54fee0, public_54fee0);
extern "C" NAKED register_t __cdecl internal_54fee0()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ds : [ecx+0x64]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        push esi
        lea edx, ds:[ecx+0x4C]
        push edi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x68]
        mov esi, dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax+4]
        add ecx, 0x58
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+8]
        mov eax, edx
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], esi
        fstp dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], esi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax]
        mov esi, ecx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c75dc]
        pop edi
        pop esi
        fnstsw ax
        test ah, 5
        jp public_54ff4d
        fld dword ptr ds : [edx]
        jmp public_54ff53
        public_54ff4d : nop
        fld dword ptr ds : [public_5c75dc]
        public_54ff53 : nop
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54ff6a
        fld dword ptr ds : [edx+4]
        jmp public_54ff70
        public_54ff6a : nop
        fld dword ptr ds : [public_5c75dc]
        public_54ff70 : nop
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54ff88
        fld dword ptr ds : [edx+8]
        jmp public_54ff8e
        public_54ff88 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54ff8e : nop
        fstp dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54ffa4
        fld dword ptr ds : [ecx]
        jmp public_54ffaa
        public_54ffa4 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54ffaa : nop
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54ffc1
        fld dword ptr ds : [ecx+4]
        jmp public_54ffc7
        public_54ffc1 : nop
        fld dword ptr ds : [public_5c75dc]
        public_54ffc7 : nop
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54ffe6
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 8
        public_54ffe6 : nop
        mov dword ptr ds : [ecx+8], 0x3F800000
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x54fee0)
    }
}

#undef public_54ff4d
#undef public_54ff53
#undef public_54ff6a
#undef public_54ff70
#undef public_54ff88
#undef public_54ff8e
#undef public_54ffa4
#undef public_54ffaa
#undef public_54ffc1
#undef public_54ffc7
#undef public_54ffe6
