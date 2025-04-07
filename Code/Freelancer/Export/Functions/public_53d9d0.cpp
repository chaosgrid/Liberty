#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb10);

#define public_53da0e _public_53da0e
#define public_53da87 _public_53da87

PROC_DECLARE(0x53d9d0, internal_53d9d0, public_53d9d0);
extern "C" NAKED register_t __cdecl internal_53d9d0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53da87
        mov ecx, dword ptr ds : [esi+0x114]
        cmp ecx, 1
        jne public_53da0e
        add esi, 4
        push esi
        push 0
        push eax
        call public_54bb10
        add esp, 0xC
        pop esi
        add esp, 0x30
        ret 8
        public_53da0e : nop
        cmp ecx, 2
        jne public_53da87
        lea ecx, ds:[esi+0x108]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], edx
        add esi, 4
        push esi
        lea edx, ss:[esp+8]
        push edx
        push eax
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], ecx
        call public_54bb10
        add esp, 0xC
        public_53da87 : nop
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x53d9d0)
    }
}

#undef public_53da0e
#undef public_53da87
