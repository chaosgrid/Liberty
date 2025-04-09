#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6b80);
CLANG_FORWARD_PROC_SYMBOL(public_583b90);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);
CLANG_FORWARD_PROC_SYMBOL(public_585a90);
CLANG_FORWARD_PROC_SYMBOL(public_585bd0);
CLANG_FORWARD_PROC_SYMBOL(public_585d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4c62c3 _public_4c62c3
#define public_4c631b _public_4c631b
#define public_4c6340 _public_4c6340
#define public_4c6358 _public_4c6358
#define public_4c636f _public_4c636f
#define public_4c6379 _public_4c6379
#define public_4c6391 _public_4c6391
#define public_4c63cc _public_4c63cc

PROC_DECLARE(0x4c62b0, internal_4c62b0, public_4c62b0);
extern "C" NAKED register_t __cdecl internal_4c62b0()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        push edi
        je public_4c62c3
        call public_583b90
        public_4c62c3 : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_4c63cc
        push eax
        call dword ptr ds : [public_5c61fc]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        mov dword ptr ss : [esp+0xC], ebp
        je public_4c63cc
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x1C]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_5c618c]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        mov byte ptr ds : [esi+0x28], 0
        je public_4c631b
        push 0
        push 0
        call public_585d90
        mov ecx, dword ptr ds : [esi]
        push 0
        push 0
        push 0xFFFFFFFF
        call public_585bd0
        public_4c631b : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x28], al
        je public_4c6340
        push eax
        push 1
        lea edx, ss:[ebp+8]
        push edx
        call public_585a90
        mov ecx, dword ptr ds : [esi]
        push edi
        call public_5850f0
        public_4c6340 : nop
        push ebx
        push edi
        mov ecx, esi
        call public_4c6b80
        mov ebx, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_4c6379
        mov ebp, dword ptr ds : [public_5c629c]
        public_4c6358 : nop
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_4c636f
        push esi
        lea ecx, ds:[edi+8]
        call dword ptr ds : [public_5c6460]
        public_4c636f : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_4c6358
        mov ebp, dword ptr ss : [esp+0x10]
        public_4c6379 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        pop ebx
        je public_4c6391
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_4c6391 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_4c63cc
        mov edi, dword ptr ds : [eax]
        call public_4c4f70
        fmul dword ptr ds : [public_5ca230]
        call public_5b7ec0
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push 0x64
        push 0x40
        call dword ptr ds : [edi+0xA8]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x408
        push 3
        call dword ptr ds : [eax+0xA8]
        public_4c63cc : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4c62b0)
    }
}

#undef public_4c62c3
#undef public_4c631b
#undef public_4c6340
#undef public_4c6358
#undef public_4c636f
#undef public_4c6379
#undef public_4c6391
#undef public_4c63cc
