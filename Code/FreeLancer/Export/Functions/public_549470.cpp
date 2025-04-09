#include "Freelancer-PCH.h"


#define public_54948d _public_54948d
#define public_54948f _public_54948f
#define public_54949c _public_54949c
#define public_5494f9 _public_5494f9
#define public_549504 _public_549504
#define public_549506 _public_549506
#define public_54952b _public_54952b
#define public_54952d _public_54952d
#define public_5495e3 _public_5495e3
#define public_549614 _public_549614

PROC_DECLARE(0x549470, internal_549470, public_549470);
extern "C" NAKED register_t __cdecl internal_549470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        push esi
        xor ebx, ebx
        cmp eax, ebx
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xC0]
        je public_54948d
        add eax, 8
        jmp public_54948f
        public_54948d : nop
        xor eax, eax
        public_54948f : nop
        cmp eax, dword ptr ds : [edi]
        je public_54949c
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_54949c : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_5495e3
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_5495e3
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_5494f9
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_5494f9
        add eax, 0xC
        cmp eax, ebx
        je public_5494f9
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_5494f9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_5494f9
        cmp dword ptr ds : [eax+0x218], ebx
        je public_5494f9
        mov dword ptr ds : [esi+0x150], 0x42480000
        mov dword ptr ds : [esi+0x14C], 0x3F59999A
        public_5494f9 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_549504
        lea ecx, ds:[eax-8]
        jmp public_549506
        public_549504 : nop
        xor ecx, ecx
        public_549506 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_54952b
        lea ecx, ds:[eax-8]
        jmp public_54952d
        public_54952b : nop
        xor ecx, ecx
        public_54952d : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x104]
        mov edx, ecx
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [esi+0x150]
        fnstsw ax
        test ah, 0x41
        jne public_549614
        fdivr dword ptr ds : [public_5c75dc]
        mov edx, dword ptr ds : [esi+0x150]
        mov dword ptr ss : [esp+0x28], edx
        pop edi
        pop esi
        pop ebx
        fld st(0)
        fmul dword ptr ds : [ecx]
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], eax
        add esp, 0x18
        ret 4
        public_5495e3 : nop
        mov dword ptr ds : [esi+0xF8], ebx
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0x100], ebx
        pop edi
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        mov dword ptr ds : [esi+0x104], 0xBF800000
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
        public_549614 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x549470)
    }
}

#undef public_54948d
#undef public_54948f
#undef public_54949c
#undef public_5494f9
#undef public_549504
#undef public_549506
#undef public_54952b
#undef public_54952d
#undef public_5495e3
#undef public_549614
