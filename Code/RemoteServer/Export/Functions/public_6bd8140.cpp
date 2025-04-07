#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd90d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd81b6 _public_6bd81b6
#define public_6bd81bd _public_6bd81bd
#define public_6bd81c8 _public_6bd81c8
#define public_6bd81cf _public_6bd81cf
#define public_6bd81e0 _public_6bd81e0
#define public_6bd81f0 _public_6bd81f0
#define public_6bd8207 _public_6bd8207
#define public_6bd821c _public_6bd821c
#define public_6bd8224 _public_6bd8224
#define public_6bd822b _public_6bd822b
#define public_6bd8233 _public_6bd8233
#define public_6bd823a _public_6bd823a
#define public_6bd8246 _public_6bd8246
#define public_6bd824d _public_6bd824d
#define public_6bd8254 _public_6bd8254
#define public_6bd8264 _public_6bd8264
#define public_6bd8274 _public_6bd8274
#define public_6bd828c _public_6bd828c
#define public_6bd82a1 _public_6bd82a1
#define public_6bd82b4 _public_6bd82b4
#define public_6bd82c8 _public_6bd82c8
#define public_6bd82cf _public_6bd82cf
#define public_6bd82d5 _public_6bd82d5
#define public_6bd82f8 _public_6bd82f8
#define public_6bd82fb _public_6bd82fb
#define public_6bd830e _public_6bd830e

PROC_DECLARE(0x6bd8140, internal_6bd8140, public_6bd8140);
extern "C" NAKED register_t __cdecl internal_6bd8140()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 2
        push 1
        mov dword ptr ss : [esp+0x14], ebp
        call public_6be1750
        test eax, eax
        jne public_6bd830e
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        add ecx, 0x24
        mov dword ptr ss : [esp+0x24], edx
        call public_6bda4c0
        mov edx, dword ptr ss : [esp+0x10]
        add esi, 0x10
        lea ebx, ds:[edx+0x30]
        cmp ebx, esi
        je public_6bd82fb
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6bd81b6
        xor edi, edi
        jmp public_6bd81bd
        public_6bd81b6 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6bd81bd : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6bd81c8
        xor ecx, ecx
        jmp public_6bd81cf
        public_6bd81c8 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6bd81cf : nop
        cmp edi, ecx
        ja public_6bd821c
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6bd81f0
        lea ebx, ds:[ebx]
        public_6bd81e0 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6bd81e0
        public_6bd81f0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6bd8207
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6bd82fb
        public_6bd8207 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 1
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6bd82fb
        public_6bd821c : nop
        test eax, eax
        jne public_6bd8224
        xor edi, edi
        jmp public_6bd822b
        public_6bd8224 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6bd822b : nop
        test edx, edx
        jne public_6bd8233
        xor ecx, ecx
        jmp public_6bd823a
        public_6bd8233 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 1
        public_6bd823a : nop
        cmp edi, ecx
        ja public_6bd82b4
        test edx, edx
        jne public_6bd8246
        xor ecx, ecx
        jmp public_6bd824d
        public_6bd8246 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6bd824d : nop
        lea ecx, ds:[eax+ecx*2]
        cmp eax, ecx
        je public_6bd8264
        public_6bd8254 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6bd8254
        public_6bd8264 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, ecx
        je public_6bd828c
        public_6bd8274 : nop
        push edi
        push ebp
        call public_6bd90d0
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 2
        add esp, 8
        add ebp, 2
        cmp edi, eax
        jne public_6bd8274
        public_6bd828c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6bd82a1
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        xor esi, esi
        lea eax, ds:[edx+esi*2]
        jmp public_6bd82f8
        public_6bd82a1 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        sub esi, eax
        sar esi, 1
        lea eax, ds:[edx+esi*2]
        jmp public_6bd82f8
        public_6bd82b4 : nop
        push edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6bd82c8
        xor eax, eax
        jmp public_6bd82cf
        public_6bd82c8 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        public_6bd82cf : nop
        test eax, eax
        jge public_6bd82d5
        xor eax, eax
        public_6bd82d5 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6c09d26
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6c0b04c]
        mov dword ptr ds : [ebx+0xC], eax
        public_6bd82f8 : nop
        mov dword ptr ds : [ebx+8], eax
        public_6bd82fb : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x170]
        pop edi
        pop esi
        pop ebx
        public_6bd830e : nop
        pop ebp
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6bd8140)
    }
}

#undef public_6bd81b6
#undef public_6bd81bd
#undef public_6bd81c8
#undef public_6bd81cf
#undef public_6bd81e0
#undef public_6bd81f0
#undef public_6bd8207
#undef public_6bd821c
#undef public_6bd8224
#undef public_6bd822b
#undef public_6bd8233
#undef public_6bd823a
#undef public_6bd8246
#undef public_6bd824d
#undef public_6bd8254
#undef public_6bd8264
#undef public_6bd8274
#undef public_6bd828c
#undef public_6bd82a1
#undef public_6bd82b4
#undef public_6bd82c8
#undef public_6bd82cf
#undef public_6bd82d5
#undef public_6bd82f8
#undef public_6bd82fb
#undef public_6bd830e
