#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ef80);
CLANG_FORWARD_PROC_SYMBOL(public_62904d0);

#define public_628ef93 _public_628ef93
#define public_628efaf _public_628efaf

PROC_DECLARE(0x628ef80, internal_628ef80, public_628ef80);
extern "C" NAKED register_t __cdecl internal_628ef80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_628efaf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_628ef93 : nop
        push esi
        push edi
        call public_62904d0
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_628ef93
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_628efaf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x628ef80)
    }
}

#undef public_628ef93
#undef public_628efaf
