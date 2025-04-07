#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274100);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62996e0);
CLANG_FORWARD_PROC_SYMBOL(public_6299880);
CLANG_FORWARD_PROC_SYMBOL(public_63038b0);

#define public_6299768 _public_6299768

PROC_DECLARE(0x62996e0, internal_62996e0, public_62996e0);
extern "C" NAKED register_t __cdecl internal_62996e0()
{
    __asm
    {
        sub esp, 0x6C
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6299768
        mov ecx, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [public_6399040]
        imul ecx, 0x34
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+edi+0x54]
        lea esi, ds:[ecx+edi+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6274100
        add esi, 0x28
        push esi
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6299880
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        public_6299768 : nop
        mov eax, dword ptr ss : [esp+0x80]
        fld dword ptr ds : [eax+8]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ds : [edi+0xC]
        fld dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        faddp 
        mov dword ptr ds : [edx+4], ecx
        fld dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+8], eax
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fdivp 
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x2C], ecx
        fmul st, st(1)
        lea ecx, ds:[edi+0x30]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], edx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], eax
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], eax
        lea eax, ss:[esp+0x2C]
        push eax
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_63038b0
        add esp, 8
        add edi, 0xC
        mov ecx, 9
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x6C
        ret 0xC
        UNREACHABLE_TRAP(0x62996e0)
    }
}

#undef public_6299768
