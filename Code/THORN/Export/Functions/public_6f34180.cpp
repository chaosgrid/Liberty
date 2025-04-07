#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f22e90);
CLANG_FORWARD_PROC_SYMBOL(public_6f23090);

#define public_6f343df _public_6f343df

PROC_DECLARE(0x6f34180, internal_6f34180, public_6f34180);
extern "C" NAKED register_t __cdecl internal_6f34180()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        je public_6f343df
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        lea edx, ss:[esp+0xC]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x24]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        push edi
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x24]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6f5a1b8]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        fld dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], ecx
        fmul st, st(2)
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        fmul st, st(2)
        mov edx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], ecx
        fmul st, st(2)
        mov dword ptr ss : [esp+0x34], edx
        sub esp, 0xC
        lea ecx, ss:[esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        fstp st(0)
        mov dword ptr ss : [esp+0x44], eax
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6f5a1b8]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        fld dword ptr ds : [esi]
        fld dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x18]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(3)
        fld dword ptr ss : [esp+0x24]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6f22d50
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        call public_6f22e90
        fdivr dword ptr ds : [public_6f5a1b8]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul st, st(1)
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], ecx
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+4], ecx
        fstp st(0)
        lea ecx, ss:[esp+0x30]
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x1C], eax
        call public_6f23090
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0x20], ecx
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x3C
        ret 0xC
        public_6f343df : nop
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6f34180)
    }
}

#undef public_6f343df
