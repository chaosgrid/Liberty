#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_635b150);
CLANG_FORWARD_PROC_SYMBOL(public_63645d0);
CLANG_FORWARD_PROC_SYMBOL(public_6364ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6364d90);

#define public_6364d45 _public_6364d45
#define public_6364d77 _public_6364d77

PROC_DECLARE(0x6364ce0, internal_6364ce0, public_6364ce0);
extern "C" NAKED register_t __cdecl internal_6364ce0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov ebx, ecx
        mov ecx, dword ptr ss : [ebp]
        push edi
        lea eax, ss:[esp+0x18]
        add ecx, 0x4C
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_634d860
        mov edi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push ecx
        call public_635b150
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_6364d45
        push esi
        push edi
        push ebp
        mov ecx, ebx
        call public_63645d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6364d45 : nop
        fld dword ptr ss : [esp+0x14]
        push esi
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6364d77
        mov edx, edi
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4e0]
        add eax, edi
        push eax
        push ebp
        mov ecx, ebx
        call public_63645d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6364d77 : nop
        push edi
        push ebp
        mov ecx, ebx
        call public_6364d90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6364ce0)
    }
}

#undef public_6364d45
#undef public_6364d77
