#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c46);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c52);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c58);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c5e);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c64);

#define public_65d1228 _public_65d1228
#define public_65d123a _public_65d123a
#define public_65d1268 _public_65d1268
#define public_65d128b _public_65d128b
#define public_65d12ef _public_65d12ef
#define public_65d131e _public_65d131e

PROC_DECLARE(0x65d1210, internal_65d1210, public_65d1210);
extern "C" NAKED register_t __cdecl internal_65d1210()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        je public_65d1228
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 0xC
        public_65d1228 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jle public_65d123a
        cmp eax, 0x100
        jg public_65d123a
        mov dword ptr ds : [esi+0x18], eax
        public_65d123a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push 6
        and eax, 0xFFFF
        push 1
        push 2
        mov dword ptr ds : [esi+0x1C], eax
        call public_65d6c64
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+8], eax
        jne public_65d1268
        call public_65d1330
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 0xC
        public_65d1268 : nop
        lea ecx, ss:[esp+0x18]
        push 4
        push ecx
        push 4
        push 6
        push eax
        mov dword ptr ss : [esp+0x2C], 1
        call public_65d6c5e
        cmp eax, 0xFFFFFFFF
        jne public_65d128b
        call public_65d1330
        public_65d128b : nop
        mov ax, word ptr ds : [esi+0x1C]
        xor edx, edx
        mov dword ptr ss : [esp+4], edx
        push eax
        mov dword ptr ss : [esp+0xC], edx
        mov word ptr ss : [esp+8], 2
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        call public_65d6c58
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+4]
        push 0x10
        push ecx
        push edx
        mov word ptr ss : [esp+0x12], ax
        mov dword ptr ss : [esp+0x14], 0
        call public_65d6c52
        cmp eax, 0xFFFFFFFF
        jne public_65d12ef
        call public_65d1330
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_65d6c4c
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 0xC
        public_65d12ef : nop
        mov ecx, dword ptr ds : [esi+8]
        push 5
        push ecx
        call public_65d6c46
        cmp eax, 0xFFFFFFFF
        jne public_65d131e
        call public_65d1330
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_65d6c4c
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 0xC
        public_65d131e : nop
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x65d1210)
    }
}

#undef public_65d1228
#undef public_65d123a
#undef public_65d1268
#undef public_65d128b
#undef public_65d12ef
#undef public_65d131e
