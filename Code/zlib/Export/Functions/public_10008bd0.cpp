#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008540);
CLANG_FORWARD_PROC_SYMBOL(public_10008ac0);
CLANG_FORWARD_PROC_SYMBOL(public_10008b00);
CLANG_FORWARD_PROC_SYMBOL(public_10008b50);

#define public_10008bf1 _public_10008bf1
#define public_10008c00 _public_10008c00
#define public_10008c22 _public_10008c22
#define public_10008c3b _public_10008c3b
#define public_10008c56 _public_10008c56
#define public_10008c8a _public_10008c8a
#define public_10008ca1 _public_10008ca1

PROC_DECLARE(0x10008bd0, internal_10008bd0, public_10008bd0);
extern "C" NAKED register_t __cdecl internal_10008bd0()
{
    __asm
    {
        sub esp, 0x108
        push esi
        mov esi, dword ptr ss : [esp+0x110]
        test esi, esi
        jne public_10008bf1
        mov eax, 0xFFFFFF9A
        pop esi
        add esp, 0x108
        ret 0xC
        public_10008bf1 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x118]
        push ebp
        mov eax, ebx
        push edi
        lea edx, ds:[eax+1]
        public_10008c00 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_10008c00
        sub eax, edx
        cmp eax, 0x100
        jb public_10008c22
        pop edi
        pop ebp
        pop ebx
        mov eax, 0xFFFFFF9A
        pop esi
        add esp, 0x108
        ret 0xC
        public_10008c22 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        jne public_10008c3b
        pop edi
        pop ebp
        pop ebx
        mov eax, 0xFFFFFF9C
        pop esi
        add esp, 0x108
        ret 0xC
        public_10008c3b : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
        push esi
        mov dword ptr ss : [esp+0x14], eax
        call public_10008b00
        test eax, eax
        jne public_10008c8a
        mov edi, dword ptr ss : [esp+0x124]
        public_10008c56 : nop
        push 0
        push 0
        push 0
        push 0
        push 0x100
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0
        push esi
        call public_10008ac0
        push edi
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_10008540
        test eax, eax
        je public_10008ca1
        push esi
        call public_10008b50
        test eax, eax
        je public_10008c56
        public_10008c8a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x30], ebp
        pop ebp
        pop ebx
        mov dword ptr ds : [esi+0x34], ecx
        pop esi
        add esp, 0x108
        ret 0xC
        public_10008ca1 : nop
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 0x108
        ret 0xC
        UNREACHABLE_TRAP(0x10008bd0)
    }
}

#undef public_10008bf1
#undef public_10008c00
#undef public_10008c22
#undef public_10008c3b
#undef public_10008c56
#undef public_10008c8a
#undef public_10008ca1
