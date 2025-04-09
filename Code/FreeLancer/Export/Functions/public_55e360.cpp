#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e830);
CLANG_FORWARD_PROC_SYMBOL(public_55e870);
CLANG_FORWARD_PROC_SYMBOL(public_59f590);
CLANG_FORWARD_PROC_SYMBOL(public_59f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_55e3c7 _public_55e3c7
#define public_55e3cc _public_55e3cc
#define public_55e3d4 _public_55e3d4
#define public_55e3e6 _public_55e3e6
#define public_55e3f3 _public_55e3f3
#define public_55e410 _public_55e410
#define public_55e424 _public_55e424
#define public_55e48d _public_55e48d
#define public_55e4f0 _public_55e4f0
#define public_55e520 _public_55e520
#define public_55e537 _public_55e537
#define public_55e555 _public_55e555
#define public_55e560 _public_55e560
#define public_55e57d _public_55e57d

PROC_DECLARE(0x55e360, internal_55e360, public_55e360);
extern "C" NAKED register_t __cdecl internal_55e360()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [ecx+0x10]
        push esi
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        mov edi, ecx
        jae public_55e48d
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_55e3c7
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_55e3cc
        public_55e3c7 : nop
        mov ebp, 1
        public_55e3cc : nop
        test ebx, ebx
        jne public_55e3d4
        xor edx, edx
        jmp public_55e3e6
        public_55e3d4 : nop
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_55e3e6 : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_55e3f3
        xor eax, eax
        public_55e3f3 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x24], eax
        mov ebx, eax
        je public_55e424
        nop 
        public_55e410 : nop
        push ebp
        push ebx
        call public_59f7e0
        add ebp, 0xC
        add esp, 8
        add ebx, 0xC
        cmp ebp, edi
        jne public_55e410
        public_55e424 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_55e870
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 0xC
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_55e830
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_59f590
        inc eax
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_55e48d : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_55e520
        lea edx, ds:[edi+0xC]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_55e830
        mov ebx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push ebx
        mov ecx, esi
        call public_55e870
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_55e57d
        lea ebx, ds:[ebx]
        public_55e4f0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ecx+8], edx
        jne public_55e4f0
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 0xC
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_55e520 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, esi
        call public_55e830
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0xC]
        cmp edi, eax
        je public_55e555
        public_55e537 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        jne public_55e537
        public_55e555 : nop
        lea ecx, ds:[edi+0xC]
        cmp edi, ecx
        mov eax, edi
        je public_55e57d
        mov edi, edi
        public_55e560 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x18]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edx+8], edi
        jne public_55e560
        public_55e57d : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 0xC
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x55e360)
    }
}

#undef public_55e3c7
#undef public_55e3cc
#undef public_55e3d4
#undef public_55e3e6
#undef public_55e3f3
#undef public_55e410
#undef public_55e424
#undef public_55e48d
#undef public_55e4f0
#undef public_55e520
#undef public_55e537
#undef public_55e555
#undef public_55e560
#undef public_55e57d
