#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001000);
CLANG_FORWARD_PROC_SYMBOL(public_100014e1);
CLANG_FORWARD_PROC_SYMBOL(public_1000151f);
CLANG_FORWARD_PROC_SYMBOL(public_10003040);
CLANG_FORWARD_PROC_SYMBOL(public_10003180);

#define public_100031a7 _public_100031a7
#define public_100031bc _public_100031bc
#define public_100031d9 _public_100031d9

PROC_DECLARE(0x10003180, internal_10003180, public_10003180);
extern "C" NAKED register_t __cdecl internal_10003180()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x2C], 0x7FFF
        mov eax, dword ptr ds : [public_1000d008]
        jne public_100031a7
        test eax, eax
        jne public_100031a7
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push esi
        call public_10001000
        add esp, 8
        pop esi
        ret 
        public_100031a7 : nop
        cmp eax, 1
        jne public_100031bc
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        push esi
        call public_1000151f
        add esp, 8
        pop esi
        ret 
        public_100031bc : nop
        cmp eax, 2
        jne public_100031d9
        call public_100014e1
        and eax, 0xF00
        cmp eax, 0x600
        sbb edx, edx
        inc edx
        mov dword ptr ds : [public_1000d008], edx
        public_100031d9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push esi
        call public_10003040
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10003180)
    }
}

#undef public_100031a7
#undef public_100031bc
#undef public_100031d9
