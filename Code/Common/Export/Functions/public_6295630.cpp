#include "Common-PCH.h"


#define public_6295686 _public_6295686
#define public_6295699 _public_6295699
#define public_62956aa _public_62956aa
#define public_62956b6 _public_62956b6

PROC_DECLARE(0x6295630, internal_6295630, public_6295630);
extern "C" NAKED register_t __cdecl internal_6295630()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x44]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62956aa
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_6295699
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        fadd dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x10]
        add ecx, eax
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_6295686
        dec ecx
        mov dword ptr ds : [esi+0x28], ecx
        jmp public_62956b6
        public_6295686 : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x28], ecx
        fsub dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x10]
        jmp public_62956b6
        public_6295699 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0xC]
        add ecx, eax
        pop edi
        mov dword ptr ds : [esi+0x28], ecx
        pop esi
        ret 8
        public_62956aa : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ss : [esp+0xC]
        add edx, ecx
        mov dword ptr ds : [esi+0x28], edx
        public_62956b6 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edi+0x38]
        fmul dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x40]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6295630)
    }
}

#undef public_6295686
#undef public_6295699
#undef public_62956aa
#undef public_62956b6
