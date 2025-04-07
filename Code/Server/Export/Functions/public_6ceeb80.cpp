#include "Server-PCH.h"


#define public_6ceec0c _public_6ceec0c
#define public_6ceec23 _public_6ceec23
#define public_6ceec3a _public_6ceec3a
#define public_6ceec4d _public_6ceec4d
#define public_6ceec80 _public_6ceec80

PROC_DECLARE(0x6ceeb80, internal_6ceeb80, public_6ceeb80);
extern "C" NAKED register_t __cdecl internal_6ceeb80()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x18]
        fld dword ptr ds : [eax+4]
        push edi
        fld st(0)
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x10]
        fmul st, st(1)
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        push eax
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6d655d4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6d655d0]
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x64]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(4)
        fmul st, st(5)
        fsubp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6ceec0c
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6ceec0c : nop
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ceec23
        fstp st(0)
        mov dword ptr ss : [esp+0x24], 3
        jmp public_6ceec4d
        public_6ceec23 : nop
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6ceec3a
        fstp st(0)
        mov dword ptr ss : [esp+0x24], 2
        jmp public_6ceec4d
        public_6ceec3a : nop
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_6ceec80
        mov dword ptr ss : [esp+0x24], 1
        public_6ceec4d : nop
        mov ecx, dword ptr ds : [edi+0x10]
        call dword ptr ds : [public_6d6419c]
        fld dword ptr ds : [eax+0x28]
        fild dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edi]
        fmul dword ptr ds : [public_6d655cc]
        push eax
        push ecx
        fmul dword ptr ds : [ecx+0xC]
        mov ecx, edi
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [edx+0x1B0]
        public_6ceec80 : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6ceeb80)
    }
}

#undef public_6ceec0c
#undef public_6ceec23
#undef public_6ceec3a
#undef public_6ceec4d
#undef public_6ceec80
