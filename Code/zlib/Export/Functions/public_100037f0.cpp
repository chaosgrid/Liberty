#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100033e0);
CLANG_FORWARD_PROC_SYMBOL(public_100035e0);
CLANG_FORWARD_PROC_SYMBOL(public_10003780);

#define public_10003802 _public_10003802
#define public_10003830 _public_10003830

PROC_DECLARE(0x100037f0, internal_100037f0, public_100037f0);
extern "C" NAKED register_t __cdecl internal_100037f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_10003802
        mov eax, 0xFFFFFFFE
        pop esi
        ret 4
        public_10003802 : nop
        cmp byte ptr ds : [esi+0x5C], 0x77
        jne public_10003830
        push 4
        mov eax, esi
        call public_100035e0
        add esp, 4
        test eax, eax
        jne public_10003830
        mov eax, dword ptr ds : [esi+0x4C]
        push ebx
        mov ebx, dword ptr ds : [esi+0x40]
        call public_10003780
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0x40]
        call public_10003780
        pop ebx
        public_10003830 : nop
        call public_100033e0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x100037f0)
    }
}

#undef public_10003802
#undef public_10003830
