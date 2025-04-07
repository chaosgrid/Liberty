#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0300);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4a60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa51f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5510);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5540);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa5246 _public_6fa5246
#define public_6fa5261 _public_6fa5261
#define public_6fa527b _public_6fa527b
#define public_6fa52b4 _public_6fa52b4
#define public_6fa52d0 _public_6fa52d0
#define public_6fa52db _public_6fa52db
#define public_6fa52f7 _public_6fa52f7
#define public_6fa5310 _public_6fa5310
#define public_6fa532c _public_6fa532c
#define public_6fa5340 _public_6fa5340
#define public_6fa5356 _public_6fa5356
#define public_6fa5361 _public_6fa5361
#define public_6fa5379 _public_6fa5379
#define public_6fa5390 _public_6fa5390
#define public_6fa539a _public_6fa539a
#define public_6fa53ba _public_6fa53ba
#define public_6fa53c2 _public_6fa53c2
#define public_6fa53de _public_6fa53de
#define public_6fa53f0 _public_6fa53f0
#define public_6fa5408 _public_6fa5408
#define public_6fa5420 _public_6fa5420
#define public_6fa5442 _public_6fa5442
#define public_6fa5456 _public_6fa5456
#define public_6fa5480 _public_6fa5480
#define public_6fa5498 _public_6fa5498
#define public_6fa54bd _public_6fa54bd
#define public_6fa54e2 _public_6fa54e2
#define public_6fa54e5 _public_6fa54e5
#define public_6fa54e9 _public_6fa54e9

PROC_DECLARE(0x6fa51f0, internal_6fa51f0, public_6fa51f0);
extern "C" NAKED register_t __cdecl internal_6fa51f0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [edx]
        push ebx
        mov ebx, ecx
        mov byte ptr ds : [ebx], al
        mov cl, byte ptr ds : [edx+1]
        mov byte ptr ds : [ebx+1], cl
        mov al, byte ptr ds : [edx+2]
        mov byte ptr ds : [ebx+2], al
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ecx
        mov eax, dword ptr ds : [edx+8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+8], eax
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], ecx
        push edi
        lea esi, ds:[edx+0x10]
        lea edi, ds:[ebx+0x10]
        mov ecx, 0xC
        rep movsd
        mov eax, dword ptr ds : [edx+0x40]
        lea esi, ds:[edx+0x48]
        test esi, esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx+0x40], eax
        jne public_6fa5246
        mov dword ptr ds : [ebx+0x44], esi
        mov byte ptr ds : [ebx+0x48], 0
        jmp public_6fa527b
        public_6fa5246 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[ebx+0x48]
        jb public_6fa5261
        mov eax, 0x2F
        public_6fa5261 : nop
        mov ecx, eax
        mov edi, ebp
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x48], 0
        mov dword ptr ds : [ebx+0x44], eax
        public_6fa527b : nop
        mov ecx, dword ptr ds : [edx+0x78]
        mov dword ptr ds : [ebx+0x78], ecx
        mov eax, dword ptr ds : [edx+0x7C]
        mov dword ptr ds : [ebx+0x7C], eax
        mov ecx, dword ptr ds : [edx+0x80]
        lea ebp, ds:[edx+0x84]
        lea esi, ds:[ebx+0x84]
        cmp esi, ebp
        mov dword ptr ds : [ebx+0x80], ecx
        je public_6fa54e9
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        jne public_6fa52b4
        mov dword ptr ss : [esp+0x14], edi
        jmp public_6fa52d0
        public_6fa52b4 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edi
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        public_6fa52d0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6fa52db
        xor edx, edx
        jmp public_6fa52f7
        public_6fa52db : nop
        mov ebx, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        mov ebx, dword ptr ss : [esp+0x10]
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa52f7 : nop
        cmp dword ptr ss : [esp+0x14], edx
        ja public_6fa5390
        mov eax, dword ptr ss : [ebp+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, ecx
        je public_6fa532c
        mov edi, edi
        public_6fa5310 : nop
        push edi
        mov ecx, ebx
        call public_6fa5010
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0xF0
        add ebx, 0xF0
        cmp edi, eax
        jne public_6fa5310
        public_6fa532c : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], eax
        mov edi, ebx
        je public_6fa5356
        lea esp, ss:[esp]
        public_6fa5340 : nop
        mov edx, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0xF0
        cmp edi, eax
        jne public_6fa5340
        public_6fa5356 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6fa5361
        xor edx, edx
        jmp public_6fa5379
        public_6fa5361 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5379 : nop
        mov eax, dword ptr ds : [esi+4]
        imul edx, 0xF0
        mov ebx, dword ptr ss : [esp+0x10]
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6fa54e5
        public_6fa5390 : nop
        test edi, edi
        jne public_6fa539a
        mov dword ptr ss : [esp+0x14], edi
        jmp public_6fa53ba
        public_6fa539a : nop
        mov ebx, dword ptr ss : [ebp+8]
        sub ebx, edi
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        mov ebx, dword ptr ss : [esp+0x10]
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        public_6fa53ba : nop
        test ecx, ecx
        jne public_6fa53c2
        xor edx, edx
        jmp public_6fa53de
        public_6fa53c2 : nop
        mov ebx, dword ptr ds : [esi+0xC]
        sub ebx, ecx
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        mov ebx, dword ptr ss : [esp+0x10]
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa53de : nop
        cmp dword ptr ss : [esp+0x14], edx
        ja public_6fa5498
        test ecx, ecx
        jne public_6fa53f0
        xor edx, edx
        jmp public_6fa5408
        public_6fa53f0 : nop
        mov ebx, dword ptr ds : [esi+8]
        sub ebx, ecx
        mov eax, 0x88888889
        imul ebx
        add edx, ebx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa5408 : nop
        imul edx, 0xF0
        add edx, edi
        mov ebx, edx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_6fa5442
        lea ebx, ds:[ebx]
        public_6fa5420 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        call public_6fa5010
        mov edx, dword ptr ss : [esp+0x14]
        add edx, 0xF0
        add edi, 0xF0
        cmp edi, ebx
        mov dword ptr ss : [esp+0x14], edx
        jne public_6fa5420
        public_6fa5442 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ebx, eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov edi, ebx
        je public_6fa5480
        public_6fa5456 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push edx
        call public_6fa4a60
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, 0xF0
        add edi, 0xF0
        add esp, 8
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edx
        jne public_6fa5456
        public_6fa5480 : nop
        mov ecx, ebp
        call public_6fa5510
        imul eax, 0xF0
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        add eax, ecx
        jmp public_6fa54e2
        public_6fa5498 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6fa0300
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, ebp
        call public_6fa5510
        test eax, eax
        jge public_6fa54bd
        xor eax, eax
        public_6fa54bd : nop
        imul eax, 0xF0
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6fa5540
        mov dword ptr ds : [esi+0xC], eax
        public_6fa54e2 : nop
        mov dword ptr ds : [esi+8], eax
        public_6fa54e5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        public_6fa54e9 : nop
        mov edx, dword ptr ds : [edx+0x94]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x94], edx
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6fa51f0)
    }
}

#undef public_6fa5246
#undef public_6fa5261
#undef public_6fa527b
#undef public_6fa52b4
#undef public_6fa52d0
#undef public_6fa52db
#undef public_6fa52f7
#undef public_6fa5310
#undef public_6fa532c
#undef public_6fa5340
#undef public_6fa5356
#undef public_6fa5361
#undef public_6fa5379
#undef public_6fa5390
#undef public_6fa539a
#undef public_6fa53ba
#undef public_6fa53c2
#undef public_6fa53de
#undef public_6fa53f0
#undef public_6fa5408
#undef public_6fa5420
#undef public_6fa5442
#undef public_6fa5456
#undef public_6fa5480
#undef public_6fa5498
#undef public_6fa54bd
#undef public_6fa54e2
#undef public_6fa54e5
#undef public_6fa54e9
