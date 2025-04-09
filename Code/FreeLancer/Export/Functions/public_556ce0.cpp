#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556ce0);

PROC_DECLARE(0x556ce0, internal_556ce0, public_556ce0);
extern "C" NAKED register_t __cdecl internal_556ce0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+0x10]
        fadd st(0), st
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        fmul dword ptr ds : [public_5c901c]
        mov edx, dword ptr ds : [eax+0xC]
        inc ecx
        mov dword ptr ss : [esp+0xC], ecx
        fptan 
        mov ecx, dword ptr ds : [eax+4]
        sub edx, ecx
        inc edx
        mov ecx, 0x3F800000
        xor eax, eax
        mov dword ptr ss : [esp+4], edx
        fstp st(0)
        fst dword ptr ds : [esi+0x24]
        fld st(0)
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x40], ecx
        mov dword ptr ds : [esi+0x44], eax
        fstp dword ptr ds : [esi+0x48]
        fld dword ptr ds : [esi+0x48]
        fld dword ptr ds : [esi+0x44]
        fld dword ptr ds : [esi+0x40]
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
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [esi+0x40]
        fstp dword ptr ds : [esi+0x40]
        fld st(0)
        fmul dword ptr ds : [esi+0x44]
        fstp dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [esi+0x48]
        fstp dword ptr ds : [esi+0x48]
        fld dword ptr ds : [esi+0x30]
        fdiv dword ptr ds : [esi+0x24]
        fstp dword ptr ds : [esi+0x38]
        fild dword ptr ss : [esp+0xC]
        fidiv dword ptr ss : [esp+4]
        fst dword ptr ds : [esi+0x2C]
        fdivr dword ptr ds : [esi+0x24]
        fst dword ptr ds : [esi+0x28]
        fld st(0)
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], ecx
        fstp dword ptr ds : [esi+0x54]
        fld dword ptr ds : [esi+0x54]
        fld dword ptr ds : [esi+0x50]
        fld dword ptr ds : [esi+0x4C]
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
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [esi+0x4C]
        fstp dword ptr ds : [esi+0x4C]
        fld st(0)
        fmul dword ptr ds : [esi+0x50]
        fstp dword ptr ds : [esi+0x50]
        fmul dword ptr ds : [esi+0x54]
        fstp dword ptr ds : [esi+0x54]
        fld dword ptr ds : [esi+0x34]
        fdiv dword ptr ds : [esi+0x28]
        fchs 
        fstp dword ptr ds : [esi+0x3C]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x556ce0)
    }
}
