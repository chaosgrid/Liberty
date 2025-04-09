#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_50be15 _public_50be15
#define public_50be4d _public_50be4d
#define public_50be6f _public_50be6f
#define public_50bec0 _public_50bec0
#define public_50bee2 _public_50bee2
#define public_50bf10 _public_50bf10
#define public_50bf16 _public_50bf16

PROC_DECLARE(0x50bd70, internal_50bd70, public_50bd70);
extern "C" NAKED register_t __cdecl internal_50bd70()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ebx+0x30]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [ebx+0x30]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_675074]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x2C]
        rep movsd
        jne public_50be15
        call public_5b73e0
        mov dword ptr ds : [public_675074], eax
        public_50be15 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x24]
        fabs 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_50be4d
        fstp st(0)
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_50be6f
        public_50be4d : nop
        fsub dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [ebx+0x30]
        fsubr qword ptr ds : [public_5c89b8]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_50bf16
        public_50be6f : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fst dword ptr ss : [esp+0x60]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        je public_50bf10
        fld dword ptr ss : [esp+0x60]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_50bec0
        fld dword ptr ss : [esp+0xC]
        pop edi
        fsub dword ptr ss : [esp+0x5C]
        pop esi
        fld dword ptr ss : [esp+4]
        pop ebx
        fsub dword ptr ss : [esp+0xC]
        fdivp 
        fmul dword ptr ss : [esp+8]
        add esp, 0x50
        ret 4
        public_50bec0 : nop
        fld dword ptr ss : [esp+0x60]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_50bee2
        fld dword ptr ds : [public_5c75dc]
        pop edi
        fmul dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        add esp, 0x50
        ret 4
        public_50bee2 : nop
        fld dword ptr ss : [esp+0x60]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_50bf10
        fld dword ptr ss : [esp+0x60]
        pop edi
        fsub dword ptr ss : [esp+0xC]
        pop esi
        fld dword ptr ss : [esp+0x14]
        pop ebx
        fsub dword ptr ss : [esp+4]
        fdivp 
        fmul dword ptr ss : [esp+8]
        add esp, 0x50
        ret 4
        public_50bf10 : nop
        fld dword ptr ds : [public_5c7474]
        public_50bf16 : nop
        fmul dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x50bd70)
    }
}

#undef public_50be15
#undef public_50be4d
#undef public_50be6f
#undef public_50bec0
#undef public_50bee2
#undef public_50bf10
#undef public_50bf16
