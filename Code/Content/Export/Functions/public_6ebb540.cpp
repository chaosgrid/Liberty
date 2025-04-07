#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb540);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f67740);

#define public_6ebb616 _public_6ebb616

PROC_DECLARE(0x6ebb540, internal_6ebb540, public_6ebb540);
extern "C" NAKED register_t __cdecl internal_6ebb540()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ebb616
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6ebb616
        lea edx, ss:[esp+0x14]
        push edx
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [esi+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
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
        fcomp dword ptr ss : [esp+0x4C]
        fnstsw ax
        test ah, 0x41
        jne public_6ebb616
        mov edx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x20]
        push eax
        mov eax, dword ptr ds : [edx+0x10]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call dword ptr ds : [public_6fb3664]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        call public_6f478c0
        mov edx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x48], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x54], edx
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6f67740
        add esp, 0x10
        public_6ebb616 : nop
        pop edi
        pop esi
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6ebb540)
    }
}

#undef public_6ebb616
