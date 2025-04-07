#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f25070);
CLANG_FORWARD_PROC_SYMBOL(public_6f37f70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fd80);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ff10);
CLANG_FORWARD_PROC_SYMBOL(public_6f40120);
CLANG_FORWARD_PROC_SYMBOL(public_6f401b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40230);
CLANG_FORWARD_PROC_SYMBOL(public_6f44dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58c26);

#define public_6f3827f _public_6f3827f
#define public_6f3829d _public_6f3829d
#define public_6f382d3 _public_6f382d3
#define public_6f382d5 _public_6f382d5
#define public_6f382e4 _public_6f382e4
#define public_6f38361 _public_6f38361
#define public_6f38368 _public_6f38368
#define public_6f383be _public_6f383be
#define public_6f383cc _public_6f383cc
#define public_6f383e3 _public_6f383e3
#define public_6f38400 _public_6f38400
#define public_6f38414 _public_6f38414
#define public_6f3841a _public_6f3841a
#define public_6f38432 _public_6f38432
#define public_6f38438 _public_6f38438
#define public_6f38464 _public_6f38464
#define public_6f384a3 _public_6f384a3
#define public_6f384b0 _public_6f384b0
#define public_6f384e2 _public_6f384e2
#define public_6f384f5 _public_6f384f5
#define public_6f38552 _public_6f38552
#define public_6f38554 _public_6f38554
#define public_6f38561 _public_6f38561
#define public_6f38563 _public_6f38563
#define public_6f38572 _public_6f38572

PROC_DECLARE(0x6f38250, internal_6f38250, public_6f38250);
extern "C" NAKED register_t __cdecl internal_6f38250()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58c26 @0x6f38258*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58c26
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi+0x2C]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_6f3827f
        mov ecx, esi
        call public_6f37f70
        public_6f3827f : nop
        mov edi, dword ptr ss : [esp+0x64]
        cmp edi, ebx
        jne public_6f3829d
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        public_6f3829d : nop
        mov eax, dword ptr ds : [esi+0x100]
        push ebp
        or ebp, 0xFFFFFFFF
        cmp eax, ebx
        mov dword ptr ss : [esp+0x68], ebp
        mov byte ptr ss : [esp+0x64], 0
        jne public_6f382e4
        push 0x14
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x64], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x5C], ebx
        je public_6f382d3
        mov ecx, eax
        call public_6f25070
        jmp public_6f382d5
        public_6f382d3 : nop
        xor eax, eax
        public_6f382d5 : nop
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ds : [esi+0x100], eax
        mov byte ptr ss : [esp+0x64], 1
        public_6f382e4 : nop
        mov ecx, dword ptr ds : [esi+0x100]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x10]
        test eax, eax
        jl public_6f3841a
        mov ecx, dword ptr ds : [esi+0x100]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi+0x100]
        mov dword ptr ds : [esi+0x20], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        push edi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x100]
        mov dword ptr ds : [esi+0x2C], 2
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [esi+0x20], eax
        mov eax, ebp
        sub eax, ecx
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x68], ecx
        jg public_6f38361
        mov edx, dword ptr ss : [esp+0x64]
        push ebx
        push edx
        push ebp
        push ecx
        call public_6f40120
        add esp, 0x10
        jmp public_6f38414
        public_6f38361 : nop
        cmp eax, 0x10
        mov edi, ecx
        jle public_6f383e3
        public_6f38368 : nop
        mov eax, dword ptr ss : [esp+0x64]
        push eax
        push eax
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov eax, ebp
        sub eax, edi
        sar eax, 2
        cdq 
        sub eax, edx
        mov edx, dword ptr ds : [edi]
        sar eax, 1
        mov ecx, dword ptr ds : [edi+eax*4]
        push ecx
        push edx
        call public_6f401b0
        add esp, 0x10
        push eax
        push ebp
        push edi
        call public_6f40230
        mov ebx, eax
        mov eax, ebp
        mov ecx, ebx
        sub eax, ebx
        sub ecx, edi
        add esp, 0x10
        and eax, 0xFFFFFFFC
        and ecx, 0xFFFFFFFC
        cmp eax, ecx
        push 0
        jg public_6f383be
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        push ebp
        push ebx
        call public_6f3fd80
        mov ebp, ebx
        jmp public_6f383cc
        public_6f383be : nop
        mov eax, dword ptr ss : [esp+0x68]
        push eax
        push ebx
        push edi
        call public_6f3fd80
        mov edi, ebx
        public_6f383cc : nop
        mov ecx, ebp
        sub ecx, edi
        and ecx, 0xFFFFFFFC
        add esp, 0x10
        cmp ecx, 0x40
        jg public_6f38368
        mov ecx, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ss : [esp+0x14]
        public_6f383e3 : nop
        mov ebx, dword ptr ss : [esp+0x64]
        push 0
        lea edi, ds:[ecx+0x40]
        push ebx
        push edi
        push ecx
        call public_6f40120
        add esp, 0x10
        cmp edi, ebp
        je public_6f38414
        nop 
        lea esp, ss:[esp]
        public_6f38400 : nop
        mov edx, dword ptr ds : [edi]
        push ebx
        push edx
        push edi
        call public_6f3ff10
        add edi, 4
        add esp, 0xC
        cmp edi, ebp
        jne public_6f38400
        public_6f38414 : nop
        xor ebx, ebx
        mov dword ptr ss : [esp+0x68], ebx
        public_6f3841a : nop
        mov al, byte ptr ss : [esp+0x64]
        test al, al
        je public_6f38438
        mov ecx, dword ptr ds : [esi+0x100]
        cmp ecx, ebx
        je public_6f38432
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f38432 : nop
        mov dword ptr ds : [esi+0x100], ebx
        public_6f38438 : nop
        cmp dword ptr ss : [esp+0x68], ebx
        jl public_6f38572
        mov eax, dword ptr ds : [esi+0xA0]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x64], edi
        jbe public_6f38572
        lea ebp, ds:[esi+0xA4]
        public_6f38464 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x1C]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 0
        call public_6f3c5d0
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        sub eax, 3
        je public_6f384a3
        dec eax
        jne public_6f384b0
        mov dword ptr ss : [esp+0x10], edi
        inc ebx
        jmp public_6f384b0
        public_6f384a3 : nop
        mov eax, dword ptr ss : [esp+0x64]
        inc eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x64], eax
        public_6f384b0 : nop
        mov eax, dword ptr ds : [esi+0xA0]
        inc edi
        cmp edi, eax
        jb public_6f38464
        mov ebp, 1
        cmp ebx, ebp
        jne public_6f38572
        cmp dword ptr ss : [esp+0x64], ebp
        jne public_6f38572
        mov eax, dword ptr ds : [esi+0xBC]
        mov ecx, dword ptr ds : [esi+0xC0]
        cmp eax, ecx
        je public_6f384f5
        public_6f384e2 : nop
        mov edx, dword ptr ds : [eax]
        cmp dword ptr ds : [edx+0x10], 2
        je public_6f38572
        add eax, 4
        cmp eax, ecx
        jne public_6f384e2
        public_6f384f5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        xor edi, edi
        or ebx, 0xFFFFFFFF
        push 0x54
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x50], edi
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [esp+0x64], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x5C], ebp
        je public_6f38552
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, eax
        call public_6f44dc0
        jmp public_6f38554
        public_6f38552 : nop
        xor eax, eax
        public_6f38554 : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x5C], ebx
        je public_6f38561
        add eax, 0x28
        jmp public_6f38563
        public_6f38561 : nop
        xor eax, eax
        public_6f38563 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        push esi
        call dword ptr ds : [ecx+0x98]
        public_6f38572 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x68]
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6f38250)
    }
}

#undef public_6f3827f
#undef public_6f3829d
#undef public_6f382d3
#undef public_6f382d5
#undef public_6f382e4
#undef public_6f38361
#undef public_6f38368
#undef public_6f383be
#undef public_6f383cc
#undef public_6f383e3
#undef public_6f38400
#undef public_6f38414
#undef public_6f3841a
#undef public_6f38432
#undef public_6f38438
#undef public_6f38464
#undef public_6f384a3
#undef public_6f384b0
#undef public_6f384e2
#undef public_6f384f5
#undef public_6f38552
#undef public_6f38554
#undef public_6f38561
#undef public_6f38563
#undef public_6f38572
