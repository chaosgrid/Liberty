#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f243d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f2440c _public_6f2440c

PROC_DECLARE(0x6f243d0, internal_6f243d0, public_6f243d0);
extern "C" NAKED register_t __cdecl internal_6f243d0()
{
    __asm
    {
        sub esp, 0x60
        mov eax, dword ptr ss : [esp+0x68]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x6C]
        fcos 
        mov dword ptr ss : [esp+0x34], 0
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6fd0750]
        test eax, eax
        fsin 
        fmul dword ptr ds : [ecx]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        jne public_6f2440c
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd0750], eax
        public_6f2440c : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        push edi
        lea edx, ss:[esp+0x38]
        push edx
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov edi, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[edi+0x24]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x2C], eax
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], edx
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6fb444c]
        fld dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb444c]
        mov dword ptr ss : [esp+0x14], eax
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6fb444c]
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], edx
        fmul dword ptr ss : [esp+0x28]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x64], edx
        rep movsd
        pop edi
        pop esi
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6f243d0)
    }
}

#undef public_6f2440c
