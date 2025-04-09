#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_525200);

#define public_5252e2 _public_5252e2
#define public_5252fd _public_5252fd
#define public_525318 _public_525318
#define public_525470 _public_525470

PROC_DECLARE(0x525200, internal_525200, public_525200);
extern "C" NAKED register_t __cdecl internal_525200()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        call dword ptr ds : [public_5c70cc]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi+0x10]
        push 1
        lea eax, ss:[esp+0x50]
        push eax
        push ecx
        push edx
        call dword ptr ds : [public_5c6808]
        mov edi, dword ptr ds : [public_5c71dc]
        add esp, 0x18
        call edi
        mov dword ptr ss : [esp+0x6C], eax
        fild dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [public_5dce9c]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x6C]
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5dce9c]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0xC]
        call edi
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5dce9c]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x6C]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x6C]
        fnstsw ax
        test ah, 0x41
        je public_5252e2
        fchs 
        public_5252e2 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        je public_5252fd
        fchs 
        public_5252fd : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_525318
        fchs 
        public_525318 : nop
        mov eax, dword ptr ds : [esi+0x10]
        fxch st(2)
        fmul dword ptr ss : [esp+0x70]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c6804]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x50]
        call dword ptr ds : [public_5c6800]
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [public_5c67fc]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call ebx
        call edi
        mov dword ptr ss : [esp+0x88], eax
        fild dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0x84]
        call edi
        mov dword ptr ss : [esp+0x88], eax
        fild dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [public_5caeec]
        fmul dword ptr ss : [esp+0x8C]
        fadd st(0), st
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x8C]
        fadd st(0), st
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x54]
        call edi
        mov dword ptr ss : [esp+0x88], eax
        fild dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [esi+0x10]
        lea eax, ss:[esp+0x38]
        push eax
        fmul dword ptr ss : [esp+0x90]
        push ecx
        fmul dword ptr ds : [public_5dce9c]
        fsub dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x48]
        call dword ptr ds : [public_5c67f8]
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        call ebx
        mov ecx, dword ptr ds : [eax]
        add esp, 0x28
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0xC0]
        test ecx, ecx
        pop edi
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        pop esi
        mov dword ptr ss : [esp+0x14], eax
        pop ebx
        je public_525470
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0xC]
        public_525470 : nop
        add esp, 0x5C
        ret 0xC
        UNREACHABLE_TRAP(0x525200)
    }
}

#undef public_5252e2
#undef public_5252fd
#undef public_525318
#undef public_525470
