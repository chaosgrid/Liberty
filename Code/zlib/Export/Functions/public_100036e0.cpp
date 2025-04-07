#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001a80);
CLANG_FORWARD_PROC_SYMBOL(public_100036e0);
CLANG_FORWARD_PROC_SYMBOL(public_10005840);
CLANG_FORWARD_PROC_SYMBOL(public_1000a458);
CLANG_FORWARD_PROC_SYMBOL(public_1000a45e);

#define public_10003730 _public_10003730
#define public_1000374c _public_1000374c

PROC_DECLARE(0x100036e0, internal_100036e0, public_100036e0);
extern "C" NAKED register_t __cdecl internal_100036e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_1000374c
        cmp byte ptr ds : [esi+0x5C], 0x72
        jne public_1000374c
        mov eax, dword ptr ds : [esi+0x44]
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi+0x38], 0
        mov dword ptr ds : [esi+0x3C], 0
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], eax
        call public_10001a80
        mov dword ptr ds : [esi+0x4C], eax
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        jne public_10003730
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
        call public_1000a45e
        add esp, 4
        xor eax, eax
        pop esi
        ret 4
        public_10003730 : nop
        push esi
        call public_10005840
        mov edx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [esi+0x40]
        push 0
        push edx
        push eax
        call public_1000a458
        add esp, 0xC
        pop esi
        ret 4
        public_1000374c : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x100036e0)
    }
}

#undef public_10003730
#undef public_1000374c
