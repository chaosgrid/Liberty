#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_6370660);
CLANG_FORWARD_PROC_SYMBOL(public_6372240);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_6372258 _public_6372258

PROC_DECLARE(0x6372240, internal_6372240, public_6372240);
extern "C" NAKED register_t __cdecl internal_6372240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b834]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, eax
        jne public_6372258
        mov dword ptr ds : [public_658b834], 0
        public_6372258 : nop
        push esi
        call public_6370660
        lea eax, ds:[esi+0xC]
        push eax
        call public_636e740
        push 0x18
        push esi
        call public_6377fe0
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6372240)
    }
}

#undef public_6372258
