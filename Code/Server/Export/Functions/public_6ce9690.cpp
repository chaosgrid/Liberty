#include "Server-PCH.h"


#define public_6ce96b5 _public_6ce96b5
#define public_6ce96bd _public_6ce96bd
#define public_6ce9720 _public_6ce9720
#define public_6ce9782 _public_6ce9782
#define public_6ce9799 _public_6ce9799
#define public_6ce97b0 _public_6ce97b0
#define public_6ce97c3 _public_6ce97c3
#define public_6ce97fa _public_6ce97fa
#define public_6ce9811 _public_6ce9811
#define public_6ce9837 _public_6ce9837
#define public_6ce989b _public_6ce989b
#define public_6ce98b2 _public_6ce98b2
#define public_6ce98c9 _public_6ce98c9
#define public_6ce98dc _public_6ce98dc
#define public_6ce9910 _public_6ce9910
#define public_6ce9927 _public_6ce9927

PROC_DECLARE(0x6ce9690, internal_6ce9690, public_6ce9690);
extern "C" NAKED register_t __cdecl internal_6ce9690()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push esi
        push edi
        je public_6ce96b5
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce96bd
        public_6ce96b5 : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6ce96bd : nop
        mov edi, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [edi+0x18]
        fld dword ptr ds : [edx+4]
        push 0x1EE0
        fld st(0)
        lea ecx, ss:[esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6d655d4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6d655d0]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_6d64204]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x48]
        lea ebp, ds:[eax+0xE4]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d6428c]
        mov esi, eax
        test esi, esi
        je public_6ce9811
        lea ecx, ds:[ecx]
        public_6ce9720 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ss : [esp+0x38]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6ce9782
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6ce9782 : nop
        fcom dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 5
        jp public_6ce9799
        fstp st(0)
        mov dword ptr ss : [esp+0x5C], 3
        jmp public_6ce97c3
        public_6ce9799 : nop
        fcom dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_6ce97b0
        fstp st(0)
        mov dword ptr ss : [esp+0x5C], 2
        jmp public_6ce97c3
        public_6ce97b0 : nop
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_6ce97fa
        mov dword ptr ss : [esp+0x5C], 1
        public_6ce97c3 : nop
        fild dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [edi+0x18]
        fmul dword ptr ds : [public_6d655cc]
        fmul dword ptr ds : [ecx+0xC]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x5C]
        call dword ptr ds : [public_6d64288]
        fld dword ptr ds : [eax+0x28]
        mov eax, dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x210]
        public_6ce97fa : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d6428c]
        mov esi, eax
        test esi, esi
        jne public_6ce9720
        public_6ce9811 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[edx+0x144]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x20], 1
        call dword ptr ds : [public_6d64284]
        mov esi, eax
        test esi, esi
        je public_6ce9927
        public_6ce9837 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d64280]
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d6427c]
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ss : [esp+0x44]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6ce989b
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6ce989b : nop
        fcom dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 5
        jp public_6ce98b2
        fstp st(0)
        mov dword ptr ss : [esp+0x5C], 3
        jmp public_6ce98dc
        public_6ce98b2 : nop
        fcom dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_6ce98c9
        fstp st(0)
        mov dword ptr ss : [esp+0x5C], 2
        jmp public_6ce98dc
        public_6ce98c9 : nop
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_6ce9910
        mov dword ptr ss : [esp+0x5C], 1
        public_6ce98dc : nop
        fild dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, esi
        fmul dword ptr ds : [public_6d655cc]
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x5C]
        call dword ptr ds : [public_6d64278]
        mov eax, dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x218]
        public_6ce9910 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d64284]
        mov esi, eax
        test esi, esi
        jne public_6ce9837
        public_6ce9927 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6ce9690)
    }
}

#undef public_6ce96b5
#undef public_6ce96bd
#undef public_6ce9720
#undef public_6ce9782
#undef public_6ce9799
#undef public_6ce97b0
#undef public_6ce97c3
#undef public_6ce97fa
#undef public_6ce9811
#undef public_6ce9837
#undef public_6ce989b
#undef public_6ce98b2
#undef public_6ce98c9
#undef public_6ce98dc
#undef public_6ce9910
#undef public_6ce9927
