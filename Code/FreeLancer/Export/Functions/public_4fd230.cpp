#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d80);
CLANG_FORWARD_PROC_SYMBOL(public_4fd230);
CLANG_FORWARD_PROC_SYMBOL(public_4fd420);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4fd250 _public_4fd250
#define public_4fd263 _public_4fd263
#define public_4fd274 _public_4fd274
#define public_4fd284 _public_4fd284
#define public_4fd2bb _public_4fd2bb
#define public_4fd2fd _public_4fd2fd
#define public_4fd31a _public_4fd31a
#define public_4fd327 _public_4fd327
#define public_4fd338 _public_4fd338
#define public_4fd349 _public_4fd349
#define public_4fd371 _public_4fd371
#define public_4fd37d _public_4fd37d
#define public_4fd3bf _public_4fd3bf
#define public_4fd3d3 _public_4fd3d3
#define public_4fd3da _public_4fd3da
#define public_4fd408 _public_4fd408
#define public_4fd40c _public_4fd40c
#define public_4fd417 _public_4fd417

PROC_DECLARE(0x4fd230, internal_4fd230, public_4fd230);
extern "C" NAKED register_t __cdecl internal_4fd230()
{
    __asm
    {
        sub esp, 0x68
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+8], ebx
        je public_4fd417
        push ebp
        push esi
        lea ebx, ds:[ebx]
        public_4fd250 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        lea esi, ds:[edi+8]
        mov ebp, edi
        mov edi, dword ptr ds : [edi]
        je public_4fd263
        mov eax, dword ptr ds : [eax+0x40]
        jmp public_4fd284
        public_4fd263 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_4fd274
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x9C]
        jmp public_4fd284
        public_4fd274 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4fd40c
        mov eax, dword ptr ds : [0x40]
        public_4fd284 : nop
        cmp eax, 0xFFFFFFFF
        je public_4fd40c
        mov ecx, dword ptr ss : [esp+0x7C]
        push eax
        push ecx
        call dword ptr ds : [public_5c65e4]
        add esp, 8
        test al, al
        je public_4fd408
        mov eax, dword ptr ss : [esp+0x80]
        test eax, eax
        jne public_4fd31a
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_4fd2bb
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_4fd2bb : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4fd2fd
        lea ecx, ss:[esp+0x18]
        call public_4215b0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_4fd2fd : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_4fd3d3
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        jmp public_4fd3d3
        public_4fd31a : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_4fd327
        test byte ptr ds : [eax+8], 2
        je public_4fd349
        public_4fd327 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4fd338
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_4fd349
        public_4fd338 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4fd371
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_4fd371
        public_4fd349 : nop
        mov ebx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ds : [ebx+0x2C]
        lea ecx, ds:[ebx+0x28]
        push esi
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        call public_4fd420
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_4fd3da
        push ebx
        call public_4f7d80
        jmp public_4fd3da
        public_4fd371 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_4fd37d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4fd37d : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4fd3bf
        lea ecx, ss:[esp+0x48]
        call public_4215b0
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x70], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_4fd3bf : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_4fd3d3
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_4fd3d3 : nop
        mov ecx, esi
        call public_502d90
        public_4fd3da : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, esi
        call public_502d90
        push ebp
        call public_5b7e1d
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_4fd40c
        public_4fd408 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_4fd40c : nop
        cmp edi, dword ptr ds : [ebx+4]
        jne public_4fd250
        pop esi
        pop ebp
        public_4fd417 : nop
        pop edi
        pop ebx
        add esp, 0x68
        ret 8
        UNREACHABLE_TRAP(0x4fd230)
    }
}

#undef public_4fd250
#undef public_4fd263
#undef public_4fd274
#undef public_4fd284
#undef public_4fd2bb
#undef public_4fd2fd
#undef public_4fd31a
#undef public_4fd327
#undef public_4fd338
#undef public_4fd349
#undef public_4fd371
#undef public_4fd37d
#undef public_4fd3bf
#undef public_4fd3d3
#undef public_4fd3da
#undef public_4fd408
#undef public_4fd40c
#undef public_4fd417
