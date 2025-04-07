#include "Common-PCH.h"


#define public_62bcc78 _public_62bcc78
#define public_62bcc81 _public_62bcc81

PROC_DECLARE(0x62bcbf0, internal_62bcbf0, public_62bcbf0);
extern "C" NAKED register_t __cdecl internal_62bcbf0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_62bcc81
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        fsub dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        fsub dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0xC]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x30]
        fsubr dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_6399408]
        fst dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bcc78
        mov dword ptr ds : [esi+4], 0
        fstp st(0)
        pop esi
        add esp, 0xC
        ret 4
        public_62bcc78 : nop
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+4]
        fstp st(0)
        public_62bcc81 : nop
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62bcbf0)
    }
}

#undef public_62bcc78
#undef public_62bcc81
