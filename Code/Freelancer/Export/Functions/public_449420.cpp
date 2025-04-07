#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_4488f0);
CLANG_FORWARD_PROC_SYMBOL(public_449420);
CLANG_FORWARD_PROC_SYMBOL(public_449e10);
CLANG_FORWARD_PROC_SYMBOL(public_44d1c0);
CLANG_FORWARD_PROC_SYMBOL(public_456930);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_555a60);
CLANG_FORWARD_PROC_SYMBOL(public_555a90);
CLANG_FORWARD_PROC_SYMBOL(public_555ca0);
CLANG_FORWARD_PROC_SYMBOL(public_556ca0);
CLANG_FORWARD_PROC_SYMBOL(public_557130);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9b66);

#define public_449480 _public_449480
#define public_449494 _public_449494
#define public_4494a6 _public_4494a6
#define public_4494ba _public_4494ba
#define public_4494d0 _public_4494d0
#define public_4494e4 _public_4494e4
#define public_449520 _public_449520
#define public_449536 _public_449536
#define public_44954c _public_44954c
#define public_449552 _public_449552
#define public_449564 _public_449564
#define public_449575 _public_449575
#define public_449581 _public_449581
#define public_449591 _public_449591
#define public_4495a0 _public_4495a0
#define public_4495d5 _public_4495d5
#define public_4495ec _public_4495ec
#define public_449610 _public_449610
#define public_449629 _public_449629

PROC_DECLARE(0x449420, internal_449420, public_449420);
extern "C" NAKED register_t __cdecl internal_449420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9b66 @0x449422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9b66
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5cbea0
        mov dword ptr ds : [esi+0x30], offset public_5cbe98
        mov ecx, offset public_66d2d0
        mov dword ptr ss : [esp+0x20], 4
        call public_456930
        mov eax, dword ptr ds : [esi+0x1088]
        mov ebp, dword ptr ds : [public_5c60c8]
        xor edi, edi
        test eax, eax
        jle public_449494
        lea ebx, ds:[esi+0x1038]
        lea esp, ss:[esp]
        public_449480 : nop
        push ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x1088]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_449480
        public_449494 : nop
        mov eax, dword ptr ds : [esi+0x10DC]
        xor edi, edi
        test eax, eax
        jle public_4494ba
        lea ebx, ds:[esi+0x108C]
        public_4494a6 : nop
        push ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x10DC]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_4494a6
        public_4494ba : nop
        mov eax, dword ptr ds : [esi+0x1130]
        xor edi, edi
        test eax, eax
        jle public_4494e4
        lea ebx, ds:[esi+0x10E0]
        lea esp, ss:[esp]
        public_4494d0 : nop
        push ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x1130]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_4494d0
        public_4494e4 : nop
        mov ecx, esi
        call public_44d1c0
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0x1A8]
        add eax, 0x1A4
        xor ebp, ebp
        cmp ecx, ebp
        je public_449552
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebp
        jle public_449552
        mov eax, dword ptr ds : [esi+0x101C]
        xor ebx, ebx
        cmp eax, ebp
        jle public_44954c
        lea edi, ds:[esi+0x81C]
        lea ecx, ds:[ecx]
        public_449520 : nop
        mov ebp, dword ptr ds : [edi]
        test ebp, ebp
        je public_449536
        mov ecx, ebp
        call public_401e90
        push ebp
        call public_5b7e1d
        add esp, 4
        public_449536 : nop
        mov dword ptr ds : [edi], 0
        mov eax, dword ptr ds : [esi+0x101C]
        inc ebx
        add edi, 4
        cmp ebx, eax
        jl public_449520
        xor ebp, ebp
        public_44954c : nop
        mov dword ptr ds : [esi+0x101C], ebp
        public_449552 : nop
        mov eax, dword ptr ds : [esi+0x818]
        xor ebx, ebx
        cmp eax, ebp
        jle public_449591
        lea edi, ds:[esi+0x618]
        public_449564 : nop
        mov eax, dword ptr ds : [edi]
        cmp byte ptr ds : [eax+0x49], 1
        jne public_449575
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x48], eax
        public_449575 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebp
        je public_449581
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_449581 : nop
        mov dword ptr ds : [edi], ebp
        mov eax, dword ptr ds : [esi+0x818]
        inc ebx
        add edi, 4
        cmp ebx, eax
        jl public_449564
        public_449591 : nop
        mov dword ptr ds : [esi+0x818], ebp
        xor edi, edi
        lea esp, ss:[esp]
        public_4495a0 : nop
        push edi
        mov ecx, esi
        call public_449e10
        inc edi
        cmp edi, 0x40
        jl public_4495a0
        mov eax, dword ptr ds : [esi+0x500]
        push eax
        call public_556ca0
        mov eax, dword ptr ds : [esi+0x2E4]
        add esp, 4
        xor edi, edi
        cmp eax, ebp
        mov dword ptr ds : [esi+0x500], ebp
        jle public_4495ec
        lea ebx, ds:[esi+0xE4]
        public_4495d5 : nop
        push ebx
        call public_557130
        mov eax, dword ptr ds : [esi+0x2E4]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_4495d5
        public_4495ec : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x2E4], ebp
        mov dword ptr ds : [esi+0x4E8], ebp
        mov eax, dword ptr ds : [ecx+0xB4]
        xor ebx, ebx
        cmp eax, ebp
        jle public_449629
        lea ebp, ds:[esi+0x4C]
        lea edi, ds:[esi+0x64]
        lea ecx, ds:[ecx]
        public_449610 : nop
        push edi
        mov ecx, ebp
        call public_555ca0
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0xB4]
        inc ebx
        add edi, 4
        cmp ebx, eax
        jl public_449610
        public_449629 : nop
        lea edi, ds:[esi+0x4C]
        mov ecx, edi
        call public_555a90
        mov ecx, dword ptr ds : [esi+0x40]
        or ebx, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        call dword ptr ds : [public_5c622c]
        push 0x3F800000
        call public_412070
        add esp, 4
        lea ecx, ds:[esi+0x1020]
        mov byte ptr ss : [esp+0x20], 3
        call public_4488f0
        lea ecx, ds:[esi+0x504]
        mov byte ptr ss : [esp+0x20], 2
        call public_4de730
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        call public_555a60
        lea ecx, ds:[esi+0x30]
        mov byte ptr ss : [esp+0x20], 0
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebx
        call public_5594b0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x449420)
    }
}

#undef public_449480
#undef public_449494
#undef public_4494a6
#undef public_4494ba
#undef public_4494d0
#undef public_4494e4
#undef public_449520
#undef public_449536
#undef public_44954c
#undef public_449552
#undef public_449564
#undef public_449575
#undef public_449581
#undef public_449591
#undef public_4495a0
#undef public_4495d5
#undef public_4495ec
#undef public_449610
#undef public_449629
