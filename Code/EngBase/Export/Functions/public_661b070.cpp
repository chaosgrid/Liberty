#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661b070);

#define public_661b0c4 _public_661b0c4
#define public_661b0da _public_661b0da
#define public_661b112 _public_661b112

PROC_DECLARE(0x661b070, internal_661b070, public_661b070);
extern "C" NAKED register_t __cdecl internal_661b070()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [esi+0x24]
        or edx, 1
        test eax, eax
        mov dword ptr ds : [esi+0x34], edx
        je public_661b112
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        cmp dword ptr ss : [esp+8], 8
        je public_661b112
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+4], eax
        mov al, byte ptr ds : [esi+0x34]
        test al, 2
        je public_661b0da
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661b0c4
        mov dword ptr ss : [esp+4], 0
        jmp public_661b0da
        public_661b0c4 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+4], eax
        public_661b0da : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        public_661b112 : nop
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x661b070)
    }
}

#undef public_661b0c4
#undef public_661b0da
#undef public_661b112
