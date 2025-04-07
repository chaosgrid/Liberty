#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6355020);
CLANG_FORWARD_PROC_SYMBOL(public_6358350);

#define public_6358453 _public_6358453
#define public_6358548 _public_6358548

PROC_DECLARE(0x6358350, internal_6358350, public_6358350);
extern "C" NAKED register_t __cdecl internal_6358350()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0xB4]
        push edi
        fld dword ptr ds : [esi+0xB8]
        fld dword ptr ds : [esi+0xBC]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        fstp dword ptr ss : [esp+0x1C]
        test byte ptr ds : [ecx], 0xC
        jne public_6358453
        mov eax, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [eax+0x18]
        fld dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0x28]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x40], edx
        fmul dword ptr ss : [esp+0x10]
        lea edi, ds:[esi+0x64]
        push edi
        faddp 
        lea ebx, ds:[esi+0x84]
        fld dword ptr ds : [eax]
        push ebx
        fmul dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x24]
        push eax
        faddp 
        mov eax, dword ptr ds : [esi+0xF4]
        lea edx, ss:[esp+0x38]
        push edx
        fstp dword ptr ss : [esp+0x3C]
        push eax
        fmul dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x48]
        call public_6346cf0
        lea ecx, ds:[esi+0x24]
        push edi
        push ecx
        call public_6355020
        lea ecx, ds:[esi+0x44]
        push ebx
        push ecx
        call public_6355020
        public_6358453 : nop
        mov ecx, dword ptr ds : [esi+0xF0]
        test byte ptr ds : [ecx], 0xC
        jne public_6358548
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [public_63a5498]
        lea ebx, ds:[esi+0x74]
        fld dword ptr ss : [esp+0x24]
        push ebx
        fmul dword ptr ds : [public_63a5498]
        lea edi, ds:[esi+0x94]
        fld dword ptr ss : [esp+0x20]
        push edi
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x24]
        fld st(1)
        fstp dword ptr ss : [esp+0x28]
        fst dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x18]
        fld dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x28]
        fmul st, st(4)
        fld dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x48], edx
        fmul st, st(6)
        lea edx, ss:[esp+0x34]
        faddp 
        fld dword ptr ds : [eax]
        lea eax, ss:[esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ds : [esi+0xF8]
        faddp 
        push edx
        push eax
        fstp dword ptr ss : [esp+0x40]
        fmul st, st(3)
        fxch 
        fmul st, st(4)
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fstp st(0)
        call public_6346cf0
        lea ecx, ds:[esi+0x34]
        push ebx
        push ecx
        call public_6355020
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [esi+0x58]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [esi+0x5C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0x54]
        fstp dword ptr ds : [esi+0x54]
        fstp dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x5C], ecx
        public_6358548 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6358350)
    }
}

#undef public_6358453
#undef public_6358548
