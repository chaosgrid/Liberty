#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_6364890);
CLANG_FORWARD_PROC_SYMBOL(public_63651c0);
CLANG_FORWARD_PROC_SYMBOL(public_6365280);

#define public_6365227 _public_6365227
#define public_636525e _public_636525e

PROC_DECLARE(0x63651c0, internal_63651c0, public_63651c0);
extern "C" NAKED register_t __cdecl internal_63651c0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ebp
        push ecx
        call public_635ae60
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
        push ecx
        call public_635b150
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x20
        fnstsw ax
        test ah, 1
        je public_6365227
        mov edx, dword ptr ss : [esp+0x2C]
        push esi
        push ebp
        push edi
        push edx
        mov ecx, ebx
        call public_6364890
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x10
        public_6365227 : nop
        fld dword ptr ss : [esp+0x14]
        push esi
        fcomp dword ptr ds : [public_63a53d4]
        push ebp
        fnstsw ax
        test ah, 1
        je public_636525e
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, edi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        add ecx, edi
        push ecx
        push edx
        mov ecx, ebx
        call public_6364890
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x10
        public_636525e : nop
        mov eax, dword ptr ss : [esp+0x34]
        push edi
        push eax
        mov ecx, ebx
        call public_6365280
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x63651c0)
    }
}

#undef public_6365227
#undef public_636525e
