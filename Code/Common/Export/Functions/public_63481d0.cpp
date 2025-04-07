#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bdf0);
CLANG_FORWARD_PROC_SYMBOL(public_63481d0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

#define public_6348205 _public_6348205

PROC_DECLARE(0x63481d0, internal_63481d0, public_63481d0);
extern "C" NAKED register_t __cdecl internal_63481d0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0x30]
        push ecx
        mov ecx, edi
        call public_6348580
        lea edx, ss:[esp+0x20]
        lea ebx, ss:[esp+0x24]
        sub edx, edi
        lea ecx, ss:[esp+0x20]
        lea eax, ds:[edi+4]
        sub ebx, edi
        mov ebp, 3
        public_6348205 : nop
        fld dword ptr ds : [esi]
        add ecx, 0x10
        fmul dword ptr ds : [eax-4]
        fld dword ptr ds : [esi+0x20]
        add eax, 0x10
        dec ebp
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [eax-0x10]
        faddp 
        fstp dword ptr ds : [ecx-0x10]
        fld dword ptr ds : [esi+0x24]
        fmul dword ptr ds : [eax-0xC]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [eax-0x10]
        faddp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax-0x14]
        faddp 
        fstp dword ptr ds : [edx+eax-0x10]
        fld dword ptr ds : [esi+0x28]
        fmul dword ptr ds : [eax-0xC]
        fld dword ptr ds : [esi+0x18]
        fmul dword ptr ds : [eax-0x10]
        faddp 
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax-0x14]
        faddp 
        fstp dword ptr ds : [ebx+eax-0x10]
        jne public_6348205
        fld dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x30]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x28]
        push edx
        fstp dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0x10]
        call public_628bdf0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ds:[esi+0x20]
        call public_628bdf0
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x34]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi+0x38]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [edi+0x30]
        pop edi
        mov dword ptr ds : [esi+0x38], ecx
        fstp dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x34]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x63481d0)
    }
}

#undef public_6348205
