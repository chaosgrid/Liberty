#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec52a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);
CLANG_FORWARD_PROC_SYMBOL(public_6ecef70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecef90);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf230);

#define public_6ec52c0 _public_6ec52c0
#define public_6ec52d3 _public_6ec52d3
#define public_6ec52d6 _public_6ec52d6
#define public_6ec52da _public_6ec52da
#define public_6ec5339 _public_6ec5339
#define public_6ec5351 _public_6ec5351
#define public_6ec535b _public_6ec535b
#define public_6ec535f _public_6ec535f
#define public_6ec5370 _public_6ec5370
#define public_6ec53ab _public_6ec53ab
#define public_6ec53ba _public_6ec53ba
#define public_6ec53db _public_6ec53db
#define public_6ec53fc _public_6ec53fc
#define public_6ec540a _public_6ec540a
#define public_6ec5429 _public_6ec5429
#define public_6ec5435 _public_6ec5435
#define public_6ec5451 _public_6ec5451
#define public_6ec546c _public_6ec546c
#define public_6ec5473 _public_6ec5473
#define public_6ec5496 _public_6ec5496

PROC_DECLARE(0x6ec52a0, internal_6ec52a0, public_6ec52a0);
extern "C" NAKED register_t __cdecl internal_6ec52a0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6ec52da
        lea esp, ss:[esp]
        public_6ec52c0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6ec52d3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ec52d6
        public_6ec52d3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ec52d6 : nop
        cmp ebp, edx
        jne public_6ec52c0
        public_6ec52da : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ec5451
        push 0
        push esi
        mov ecx, edi
        call public_6ecef70
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ecf230
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ec5339
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ec5339
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6ec5339
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec535f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec535f
        public_6ec5339 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ec5351
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec535b
        public_6ec5351 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ec535b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ec535b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ec535f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6ec5435
        lea ecx, ds:[ecx]
        public_6ec5370 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6ec5435
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec53db
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ec53ab
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ec5429
        public_6ec53ab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec53ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ecec60
        public_6ec53ba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6ec55d0
        jmp public_6ec5429
        public_6ec53db : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ec53fc
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6ec5429
        public_6ec53fc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ec540a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ec55d0
        public_6ec540a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6ecec60
        public_6ec5429 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ec5370
        public_6ec5435 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6ec5451 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6ec546c
        cmp esi, dword ptr ds : [ecx]
        je public_6ec5473
        lea ecx, ss:[esp+0x10]
        call public_6ecef90
        mov edx, dword ptr ss : [esp+0x10]
        public_6ec546c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6ec5496
        public_6ec5473 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ec5ea0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6ec5496 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec52a0)
    }
}

#undef public_6ec52c0
#undef public_6ec52d3
#undef public_6ec52d6
#undef public_6ec52da
#undef public_6ec5339
#undef public_6ec5351
#undef public_6ec535b
#undef public_6ec535f
#undef public_6ec5370
#undef public_6ec53ab
#undef public_6ec53ba
#undef public_6ec53db
#undef public_6ec53fc
#undef public_6ec540a
#undef public_6ec5429
#undef public_6ec5435
#undef public_6ec5451
#undef public_6ec546c
#undef public_6ec5473
#undef public_6ec5496
