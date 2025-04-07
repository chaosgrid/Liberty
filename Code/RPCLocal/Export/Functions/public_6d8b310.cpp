#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8b386 _public_6d8b386
#define public_6d8b38d _public_6d8b38d
#define public_6d8b398 _public_6d8b398
#define public_6d8b39f _public_6d8b39f
#define public_6d8b3b0 _public_6d8b3b0
#define public_6d8b3c0 _public_6d8b3c0
#define public_6d8b3d7 _public_6d8b3d7
#define public_6d8b3ec _public_6d8b3ec
#define public_6d8b3f4 _public_6d8b3f4
#define public_6d8b3fb _public_6d8b3fb
#define public_6d8b403 _public_6d8b403
#define public_6d8b40a _public_6d8b40a
#define public_6d8b416 _public_6d8b416
#define public_6d8b41d _public_6d8b41d
#define public_6d8b424 _public_6d8b424
#define public_6d8b434 _public_6d8b434
#define public_6d8b444 _public_6d8b444
#define public_6d8b45c _public_6d8b45c
#define public_6d8b471 _public_6d8b471
#define public_6d8b484 _public_6d8b484
#define public_6d8b498 _public_6d8b498
#define public_6d8b49f _public_6d8b49f
#define public_6d8b4a5 _public_6d8b4a5
#define public_6d8b4c8 _public_6d8b4c8
#define public_6d8b4cb _public_6d8b4cb
#define public_6d8b4e0 _public_6d8b4e0

PROC_DECLARE(0x6d8b310, internal_6d8b310, public_6d8b310);
extern "C" NAKED register_t __cdecl internal_6d8b310()
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
        call public_6d96300
        test eax, eax
        jne public_6d8b4e0
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
        call public_6d8f510
        mov edx, dword ptr ss : [esp+0x10]
        add esi, 0x10
        lea ebx, ds:[edx+0x30]
        cmp ebx, esi
        je public_6d8b4cb
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d8b386
        xor edi, edi
        jmp public_6d8b38d
        public_6d8b386 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6d8b38d : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6d8b398
        xor ecx, ecx
        jmp public_6d8b39f
        public_6d8b398 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6d8b39f : nop
        cmp edi, ecx
        ja public_6d8b3ec
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6d8b3c0
        lea ebx, ds:[ebx]
        public_6d8b3b0 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d8b3b0
        public_6d8b3c0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d8b3d7
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6d8b4cb
        public_6d8b3d7 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 1
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6d8b4cb
        public_6d8b3ec : nop
        test eax, eax
        jne public_6d8b3f4
        xor edi, edi
        jmp public_6d8b3fb
        public_6d8b3f4 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6d8b3fb : nop
        test edx, edx
        jne public_6d8b403
        xor ecx, ecx
        jmp public_6d8b40a
        public_6d8b403 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 1
        public_6d8b40a : nop
        cmp edi, ecx
        ja public_6d8b484
        test edx, edx
        jne public_6d8b416
        xor ecx, ecx
        jmp public_6d8b41d
        public_6d8b416 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6d8b41d : nop
        lea ecx, ds:[eax+ecx*2]
        cmp eax, ecx
        je public_6d8b434
        public_6d8b424 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6d8b424
        public_6d8b434 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, ecx
        je public_6d8b45c
        public_6d8b444 : nop
        push edi
        push ebp
        call public_6d8cb50
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 2
        add esp, 8
        add ebp, 2
        cmp edi, eax
        jne public_6d8b444
        public_6d8b45c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d8b471
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        xor esi, esi
        lea eax, ds:[edx+esi*2]
        jmp public_6d8b4c8
        public_6d8b471 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        sub esi, eax
        sar esi, 1
        lea eax, ds:[edx+esi*2]
        jmp public_6d8b4c8
        public_6d8b484 : nop
        push edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6d8b498
        xor eax, eax
        jmp public_6d8b49f
        public_6d8b498 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        public_6d8b49f : nop
        test eax, eax
        jge public_6d8b4a5
        xor eax, eax
        public_6d8b4a5 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6db1f8a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6db3028]
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8b4c8 : nop
        mov dword ptr ds : [ebx+8], eax
        public_6d8b4cb : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebx
        public_6d8b4e0 : nop
        pop ebp
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d8b310)
    }
}

#undef public_6d8b386
#undef public_6d8b38d
#undef public_6d8b398
#undef public_6d8b39f
#undef public_6d8b3b0
#undef public_6d8b3c0
#undef public_6d8b3d7
#undef public_6d8b3ec
#undef public_6d8b3f4
#undef public_6d8b3fb
#undef public_6d8b403
#undef public_6d8b40a
#undef public_6d8b416
#undef public_6d8b41d
#undef public_6d8b424
#undef public_6d8b434
#undef public_6d8b444
#undef public_6d8b45c
#undef public_6d8b471
#undef public_6d8b484
#undef public_6d8b498
#undef public_6d8b49f
#undef public_6d8b4a5
#undef public_6d8b4c8
#undef public_6d8b4cb
#undef public_6d8b4e0
