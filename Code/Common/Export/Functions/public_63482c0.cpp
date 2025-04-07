#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bdf0);
CLANG_FORWARD_PROC_SYMBOL(public_63482c0);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

#define public_6348345 _public_6348345

PROC_DECLARE(0x63482c0, internal_63482c0, public_63482c0);
extern "C" NAKED register_t __cdecl internal_63482c0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [esi+0x30]
        push edi
        mov edi, ecx
        fsub dword ptr ds : [edi+0x30]
        lea eax, ds:[ebx+0x30]
        push eax
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x34]
        push ecx
        fsub dword ptr ds : [edi+0x34]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x38]
        fsub dword ptr ds : [edi+0x38]
        fstp dword ptr ss : [esp+0x1C]
        call public_6366010
        fld dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+0x10]
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+0x20]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+0x14]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi+0x18]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+0x44]
        public_6348345 : nop
        fld dword ptr ds : [esi+0x24]
        add eax, 0x10
        dec ecx
        fmul dword ptr ds : [eax-0x10]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax-0x18]
        faddp 
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [eax-0x14]
        faddp 
        fld dword ptr ds : [esi+0x18]
        fmul dword ptr ds : [eax-0x14]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax-0x18]
        faddp 
        fld dword ptr ds : [esi+0x28]
        fmul dword ptr ds : [eax-0x10]
        faddp 
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [eax-0x18]
        fld dword ptr ds : [esi+0x20]
        fmul dword ptr ds : [eax-0x10]
        faddp 
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [eax-0x14]
        mov dword ptr ds : [eax-0x10], edx
        faddp 
        fstp dword ptr ds : [eax-0x18]
        fstp dword ptr ds : [eax-0x14]
        jne public_6348345
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_628bdf0
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ds:[ebx+0x10]
        call public_628bdf0
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ds:[ebx+0x20]
        call public_628bdf0
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x63482c0)
    }
}

#undef public_6348345
