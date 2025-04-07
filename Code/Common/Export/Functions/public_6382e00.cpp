#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6382e00);
CLANG_FORWARD_PROC_SYMBOL(public_63850d0);

#define public_6382e29 _public_6382e29
#define public_6382e43 _public_6382e43

PROC_DECLARE(0x6382e00, internal_6382e00, public_6382e00);
extern "C" NAKED register_t __cdecl internal_6382e00()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_636ec10
        push eax
        call public_636ec70
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+8], eax
        je public_6382e43
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_6382e43
        public_6382e29 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_6382e29
        public_6382e43 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_658b24c]
        push edx
        dec eax
        push eax
        call public_63850d0
        lea ecx, ss:[esp+0x10]
        push ecx
        mov esi, eax
        call public_636ecc0
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6382e00)
    }
}

#undef public_6382e29
#undef public_6382e43
