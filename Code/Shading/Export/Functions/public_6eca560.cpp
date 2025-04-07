#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca560);
CLANG_FORWARD_PROC_SYMBOL(public_6eca5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eca5bc _public_6eca5bc

PROC_DECLARE(0x6eca560, internal_6eca560, public_6eca560);
extern "C" NAKED register_t __cdecl internal_6eca560()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_6eca5d0
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        cmp edi, ebx
        je public_6eca5bc
        push edi
        call public_6ed0c5c
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], edi
        lea ecx, ds:[esi+0x84]
        mov dword ptr ds : [public_6ed57f8], eax
        lea eax, ds:[esi+0x88]
        mov dword ptr ds : [public_6ed57fc], eax
        mov dword ptr ds : [public_6ed5800], ecx
        mov edx, dword ptr ds : [esi+0x80]
        add esp, 4
        mov dword ptr ds : [public_6ed5804], edx
        mov dword ptr ds : [public_6ed5808], eax
        mov dword ptr ds : [public_6ed580c], ecx
        public_6eca5bc : nop
        pop edi
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eca560)
    }
}

#undef public_6eca5bc
