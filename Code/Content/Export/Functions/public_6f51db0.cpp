#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38170);
CLANG_FORWARD_PROC_SYMBOL(public_6f51db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f51de0 _public_6f51de0
#define public_6f51dfc _public_6f51dfc
#define public_6f51dff _public_6f51dff
#define public_6f51e12 _public_6f51e12
#define public_6f51e30 _public_6f51e30
#define public_6f51e4c _public_6f51e4c
#define public_6f51e4f _public_6f51e4f
#define public_6f51e74 _public_6f51e74
#define public_6f51e90 _public_6f51e90
#define public_6f51e93 _public_6f51e93
#define public_6f51eb3 _public_6f51eb3
#define public_6f51eb7 _public_6f51eb7

PROC_DECLARE(0x6f51db0, internal_6f51db0, public_6f51db0);
extern "C" NAKED register_t __cdecl internal_6f51db0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x24]
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        lea esi, ds:[ecx+0xC4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], eax
        cmp edi, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6f51dfc
        lea esp, ss:[esp]
        public_6f51de0 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f51dff
        mov eax, dword ptr ds : [esi+8]
        add edi, 0xC
        cmp edi, eax
        jne public_6f51de0
        public_6f51dfc : nop
        mov edi, dword ptr ds : [esi+8]
        public_6f51dff : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f51e12
        inc dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        add esp, 0x1C
        ret 8
        public_6f51e12 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, eax
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ecx
        je public_6f51e4c
        lea ecx, ds:[ecx]
        public_6f51e30 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f51e4f
        mov eax, dword ptr ds : [esi+8]
        add edi, 0xC
        cmp edi, eax
        jne public_6f51e30
        public_6f51e4c : nop
        mov edi, dword ptr ds : [esi+8]
        public_6f51e4f : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_6f51eb7
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov ecx, esi
        call public_6f38170
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        mov byte ptr ss : [esp+0x30], 1
        je public_6f51e90
        public_6f51e74 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f51eb3
        mov eax, dword ptr ds : [esi+8]
        add edi, 0xC
        cmp edi, eax
        jne public_6f51e74
        public_6f51e90 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f51e93 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], esi
        call public_6fa6e80
        pop edi
        pop esi
        pop ebp
        add esp, 0x1C
        ret 8
        public_6f51eb3 : nop
        mov esi, edi
        jmp public_6f51e93
        public_6f51eb7 : nop
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x34], 0
        call public_6fa6e80
        pop edi
        pop esi
        pop ebp
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6f51db0)
    }
}

#undef public_6f51de0
#undef public_6f51dfc
#undef public_6f51dff
#undef public_6f51e12
#undef public_6f51e30
#undef public_6f51e4c
#undef public_6f51e4f
#undef public_6f51e74
#undef public_6f51e90
#undef public_6f51e93
#undef public_6f51eb3
#undef public_6f51eb7
