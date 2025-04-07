#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10008410);
CLANG_FORWARD_PROC_SYMBOL(public_10008470);
CLANG_FORWARD_PROC_SYMBOL(public_10008cb0);

#define public_10008ceb _public_10008ceb
#define public_10008d06 _public_10008d06
#define public_10008d15 _public_10008d15
#define public_10008d2e _public_10008d2e
#define public_10008d47 _public_10008d47
#define public_10008d62 _public_10008d62
#define public_10008d78 _public_10008d78
#define public_10008d7d _public_10008d7d
#define public_10008d96 _public_10008d96
#define public_10008db6 _public_10008db6
#define public_10008dcd _public_10008dcd
#define public_10008de8 _public_10008de8
#define public_10008dff _public_10008dff
#define public_10008e1a _public_10008e1a
#define public_10008e31 _public_10008e31
#define public_10008e50 _public_10008e50
#define public_10008e5e _public_10008e5e
#define public_10008e7a _public_10008e7a

PROC_DECLARE(0x10008cb0, internal_10008cb0, public_10008cb0);
extern "C" NAKED register_t __cdecl internal_10008cb0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp], edi
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x20]
        push edi
        add edx, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        push eax
        push ecx
        call dword ptr ds : [esi+0x10]
        test eax, eax
        je public_10008ceb
        pop edi
        or eax, 0xFFFFFFFF
        pop ebp
        pop ecx
        ret 
        public_10008ceb : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008d06
        or edi, 0xFFFFFFFF
        jmp public_10008d15
        public_10008d06 : nop
        cmp dword ptr ss : [esp+0x10], 0x4034B50
        je public_10008d15
        mov edi, 0xFFFFFF99
        public_10008d15 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10008d2e
        or edi, 0xFFFFFFFF
        public_10008d2e : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10008d47
        or edi, 0xFFFFFFFF
        public_10008d47 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10008d62
        or edi, 0xFFFFFFFF
        jmp public_10008d7d
        public_10008d62 : nop
        test edi, edi
        jne public_10008d7d
        mov eax, dword ptr ds : [esi+0x54]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_10008d78
        test eax, eax
        je public_10008d7d
        cmp eax, 8
        je public_10008d7d
        public_10008d78 : nop
        mov edi, 0xFFFFFF99
        public_10008d7d : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008d96
        or edi, 0xFFFFFFFF
        public_10008d96 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x10]
        push ebx
        push ecx
        mov ecx, esi
        call public_10008470
        mov bl, byte ptr ss : [esp+0x10]
        add esp, 4
        test eax, eax
        je public_10008db6
        or edi, 0xFFFFFFFF
        jmp public_10008dcd
        public_10008db6 : nop
        test edi, edi
        jne public_10008dcd
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [esi+0x5C]
        je public_10008dcd
        test bl, 8
        jne public_10008dcd
        mov edi, 0xFFFFFF99
        public_10008dcd : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008de8
        or edi, 0xFFFFFFFF
        jmp public_10008dff
        public_10008de8 : nop
        test edi, edi
        jne public_10008dff
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [esi+0x60]
        je public_10008dff
        test bl, 8
        jne public_10008dff
        mov edi, 0xFFFFFF99
        public_10008dff : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_10008470
        add esp, 4
        test eax, eax
        je public_10008e1a
        or edi, 0xFFFFFFFF
        jmp public_10008e31
        public_10008e1a : nop
        test edi, edi
        jne public_10008e31
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x64]
        je public_10008e31
        test bl, 8
        jne public_10008e31
        mov edi, 0xFFFFFF99
        public_10008e31 : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_10008410
        mov ebx, dword ptr ss : [esp+0x18]
        add esp, 4
        test eax, eax
        je public_10008e50
        or edi, 0xFFFFFFFF
        jmp public_10008e5e
        public_10008e50 : nop
        test edi, edi
        jne public_10008e5e
        cmp ebx, dword ptr ds : [esi+0x68]
        je public_10008e5e
        mov edi, 0xFFFFFF99
        public_10008e5e : nop
        add dword ptr ss : [ebp], ebx
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_10008410
        add esp, 4
        test eax, eax
        je public_10008e7a
        or edi, 0xFFFFFFFF
        public_10008e7a : nop
        mov eax, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ebx+eax+0x1E]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp]
        add ecx, eax
        pop ebx
        mov eax, edi
        pop edi
        mov dword ptr ss : [ebp], ecx
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10008cb0)
    }
}

#undef public_10008ceb
#undef public_10008d06
#undef public_10008d15
#undef public_10008d2e
#undef public_10008d47
#undef public_10008d62
#undef public_10008d78
#undef public_10008d7d
#undef public_10008d96
#undef public_10008db6
#undef public_10008dcd
#undef public_10008de8
#undef public_10008dff
#undef public_10008e1a
#undef public_10008e31
#undef public_10008e50
#undef public_10008e5e
#undef public_10008e7a
