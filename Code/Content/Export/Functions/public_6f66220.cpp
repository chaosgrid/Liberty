#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b550);
CLANG_FORWARD_PROC_SYMBOL(public_6f6b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f66254 _public_6f66254
#define public_6f66266 _public_6f66266
#define public_6f66287 _public_6f66287
#define public_6f6628d _public_6f6628d
#define public_6f662a4 _public_6f662a4
#define public_6f662b4 _public_6f662b4
#define public_6f662dc _public_6f662dc
#define public_6f662f1 _public_6f662f1
#define public_6f66322 _public_6f66322
#define public_6f66341 _public_6f66341
#define public_6f66347 _public_6f66347
#define public_6f66354 _public_6f66354
#define public_6f66356 _public_6f66356
#define public_6f66365 _public_6f66365
#define public_6f66370 _public_6f66370
#define public_6f663be _public_6f663be
#define public_6f663c7 _public_6f663c7
#define public_6f663de _public_6f663de
#define public_6f663f4 _public_6f663f4
#define public_6f66410 _public_6f66410
#define public_6f66428 _public_6f66428
#define public_6f66431 _public_6f66431

PROC_DECLARE(0x6f66220, internal_6f66220, public_6f66220);
extern "C" NAKED register_t __cdecl internal_6f66220()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, 0xFFFFFFFF
        push esi
        push edi
        je public_6f66431
        call public_6f75f20
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        call public_6f75f20
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ss : [esp+0x1C]
        je public_6f662a4
        public_6f66254 : nop
        mov eax, dword ptr ds : [ecx+0xF0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebx, ds:[ecx+0xF0]
        je public_6f6628d
        public_6f66266 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x154], ebp
        jne public_6f66287
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        call public_6f937c0
        public_6f66287 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx]
        jne public_6f66266
        public_6f6628d : nop
        lea ecx, ss:[esp+0x20]
        call public_6f24610
        call public_6f75f20
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6f66254
        public_6f662a4 : nop
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f662f1
        public_6f662b4 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f662dc
        cmp dword ptr ds : [eax+0x154], ebp
        jne public_6f662dc
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x1C]
        push edx
        push 1
        push eax
        mov ecx, edi
        call public_6f937c0
        public_6f662dc : nop
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0bc0]
        jne public_6f662b4
        public_6f662f1 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        mov eax, ebx
        sub eax, esi
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x1C], esi
        jg public_6f66365
        cmp esi, ebx
        je public_6f66431
        lea edi, ds:[esi+4]
        cmp edi, ebx
        je public_6f66431
        mov ebp, dword ptr ss : [esp+0x20]
        public_6f66322 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x14C]
        cmp eax, dword ptr ds : [edx+0x14C]
        jl public_6f66341
        push ebp
        push ecx
        push edi
        call public_6f6b0f0
        add esp, 0xC
        jmp public_6f66356
        public_6f66341 : nop
        cmp esi, edi
        mov eax, edi
        je public_6f66354
        public_6f66347 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, esi
        mov dword ptr ds : [eax+4], edx
        jne public_6f66347
        public_6f66354 : nop
        mov dword ptr ds : [esi], ecx
        public_6f66356 : nop
        add edi, 4
        cmp edi, ebx
        jne public_6f66322
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f66365 : nop
        cmp eax, 0x10
        mov ebp, dword ptr ss : [esp+0x20]
        mov edi, ebx
        jle public_6f663de
        public_6f66370 : nop
        mov eax, dword ptr ds : [edi-4]
        push ebp
        push ebp
        push eax
        mov eax, edi
        sub eax, esi
        sar eax, 2
        cdq 
        sub eax, edx
        mov edx, dword ptr ds : [esi]
        sar eax, 1
        mov ecx, dword ptr ds : [esi+eax*4]
        push ecx
        push edx
        call public_6f6b550
        add esp, 0x10
        push eax
        push edi
        push esi
        call public_6f6b5a0
        mov ebx, eax
        mov eax, edi
        mov ecx, ebx
        add esp, 0x10
        sub eax, ebx
        sub ecx, esi
        and eax, 0xFFFFFFFC
        and ecx, 0xFFFFFFFC
        cmp eax, ecx
        push 0
        push ebp
        jg public_6f663be
        push edi
        push ebx
        call public_6f6aff0
        mov edi, ebx
        jmp public_6f663c7
        public_6f663be : nop
        push ebx
        push esi
        call public_6f6aff0
        mov esi, ebx
        public_6f663c7 : nop
        mov edx, edi
        sub edx, esi
        and edx, 0xFFFFFFFC
        add esp, 0x10
        cmp edx, 0x40
        jg public_6f66370
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f663de : nop
        push 0
        push ebp
        lea edi, ds:[esi+0x40]
        push edi
        push esi
        call public_6f6b4c0
        mov esi, edi
        add esp, 0x10
        cmp esi, ebx
        je public_6f66431
        public_6f663f4 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi-4]
        mov ebp, dword ptr ds : [edi+0x14C]
        cmp ebp, dword ptr ds : [ecx+0x14C]
        lea eax, ds:[esi-4]
        mov edx, esi
        jge public_6f66428
        lea esp, ss:[esp]
        public_6f66410 : nop
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax-4]
        mov ebp, dword ptr ds : [edi+0x14C]
        mov edx, eax
        sub eax, 4
        cmp ebp, dword ptr ds : [ecx+0x14C]
        jl public_6f66410
        public_6f66428 : nop
        add esi, 4
        cmp esi, ebx
        mov dword ptr ds : [edx], edi
        jne public_6f663f4
        public_6f66431 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f66220)
    }
}

#undef public_6f66254
#undef public_6f66266
#undef public_6f66287
#undef public_6f6628d
#undef public_6f662a4
#undef public_6f662b4
#undef public_6f662dc
#undef public_6f662f1
#undef public_6f66322
#undef public_6f66341
#undef public_6f66347
#undef public_6f66354
#undef public_6f66356
#undef public_6f66365
#undef public_6f66370
#undef public_6f663be
#undef public_6f663c7
#undef public_6f663de
#undef public_6f663f4
#undef public_6f66410
#undef public_6f66428
#undef public_6f66431
