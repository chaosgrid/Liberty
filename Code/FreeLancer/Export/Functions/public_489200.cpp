#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_489200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_48921e _public_48921e
#define public_489222 _public_489222
#define public_48923d _public_48923d
#define public_489265 _public_489265
#define public_48927a _public_48927a
#define public_489299 _public_489299
#define public_4892a5 _public_4892a5
#define public_4892b8 _public_4892b8
#define public_4892cb _public_4892cb
#define public_4892e6 _public_4892e6
#define public_4892fd _public_4892fd
#define public_489310 _public_489310
#define public_489335 _public_489335
#define public_48934b _public_48934b
#define public_48936b _public_48936b
#define public_489379 _public_489379
#define public_48938e _public_48938e
#define public_4893a2 _public_4893a2
#define public_4893bd _public_4893bd
#define public_4893d5 _public_4893d5
#define public_489401 _public_489401

PROC_DECLARE(0x489200, internal_489200, public_489200);
extern "C" NAKED register_t __cdecl internal_489200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ss : [esp+8]
        je public_489401
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[ecx+8]
        lea ebx, ds:[eax+8]
        jmp public_489222
        public_48921e : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_489222 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, ecx
        cmp eax, edi
        jae public_48923d
        mov edi, eax
        public_48923d : nop
        lea edx, ds:[ebx-4]
        lea ebp, ds:[esi-4]
        cmp ebp, edx
        jne public_489265
        push eax
        lea ebp, ds:[esi-4]
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        jmp public_4892fd
        public_489265 : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_4892cb
        cmp edi, ecx
        jne public_4892cb
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        jne public_48927a
        mov eax, dword ptr ds : [public_5c700c]
        public_48927a : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4892cb
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_4892a5
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_489299
        cmp cl, 0xFF
        je public_489299
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_4892a5
        public_489299 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_4892a5 : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        jne public_4892b8
        mov eax, dword ptr ds : [public_5c700c]
        public_4892b8 : nop
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_4892fd
        public_4892cb : nop
        push 1
        lea ecx, ds:[esi-4]
        push edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4892fd
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        jne public_4892e6
        mov eax, dword ptr ds : [public_5c700c]
        public_4892e6 : nop
        push edi
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ds:[esi-4]
        call dword ptr ds : [public_5c7054]
        public_4892fd : nop
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edi, ecx
        cmp eax, edi
        jae public_489310
        mov edi, eax
        public_489310 : nop
        lea ebp, ds:[esi+0xC]
        lea edx, ds:[ebx+0xC]
        cmp ebp, edx
        jne public_489335
        push eax
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6f8c]
        jmp public_4893d5
        public_489335 : nop
        xor edx, edx
        cmp edi, edx
        jbe public_4893a2
        cmp edi, ecx
        jne public_4893a2
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, edx
        jne public_48934b
        mov eax, dword ptr ds : [public_5c700c]
        public_48934b : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4893a2
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edx
        je public_489379
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_48936b
        cmp cl, 0xFF
        je public_48936b
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_489379
        public_48936b : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        xor edx, edx
        public_489379 : nop
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, edx
        jne public_48938e
        mov eax, dword ptr ds : [public_5c700c]
        public_48938e : nop
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [esi+0x18], edx
        inc byte ptr ds : [eax-1]
        jmp public_4893d5
        public_4893a2 : nop
        push 1
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_4893d5
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        jne public_4893bd
        mov eax, dword ptr ds : [public_5c700c]
        public_4893bd : nop
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c7054]
        public_4893d5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x24
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x24
        add esi, 0x24
        add ebx, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_48921e
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_489401 : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x489200)
    }
}

#undef public_48921e
#undef public_489222
#undef public_48923d
#undef public_489265
#undef public_48927a
#undef public_489299
#undef public_4892a5
#undef public_4892b8
#undef public_4892cb
#undef public_4892e6
#undef public_4892fd
#undef public_489310
#undef public_489335
#undef public_48934b
#undef public_48936b
#undef public_489379
#undef public_48938e
#undef public_4893a2
#undef public_4893bd
#undef public_4893d5
#undef public_489401
