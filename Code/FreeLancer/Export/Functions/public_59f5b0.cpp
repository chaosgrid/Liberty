#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_55e830);
CLANG_FORWARD_PROC_SYMBOL(public_55e870);
CLANG_FORWARD_PROC_SYMBOL(public_59f590);
CLANG_FORWARD_PROC_SYMBOL(public_59f5b0);
CLANG_FORWARD_PROC_SYMBOL(public_59f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_59f618 _public_59f618
#define public_59f61d _public_59f61d
#define public_59f625 _public_59f625
#define public_59f637 _public_59f637
#define public_59f644 _public_59f644
#define public_59f660 _public_59f660
#define public_59f674 _public_59f674
#define public_59f6d7 _public_59f6d7
#define public_59f736 _public_59f736
#define public_59f753 _public_59f753
#define public_59f770 _public_59f770
#define public_59f78e _public_59f78e
#define public_59f7a0 _public_59f7a0
#define public_59f7bb _public_59f7bb
#define public_59f7bf _public_59f7bf

PROC_DECLARE(0x59f5b0, internal_59f5b0, public_59f5b0);
extern "C" NAKED register_t __cdecl internal_59f5b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_59f6d7
        test ebx, ebx
        je public_59f618
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
        ja public_59f61d
        public_59f618 : nop
        mov ebp, 1
        public_59f61d : nop
        test ebx, ebx
        jne public_59f625
        xor edx, edx
        jmp public_59f637
        public_59f625 : nop
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_59f637 : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_59f644
        xor eax, eax
        public_59f644 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_59f674
        public_59f660 : nop
        push ebx
        push ebp
        call public_59f7e0
        add ebx, 0xC
        add esp, 8
        add ebp, 0xC
        cmp ebx, edi
        jne public_59f660
        public_59f674 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_59f7e0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0xC
        push ebp
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
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_59f590
        inc eax
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_59f7bf
        public_59f6d7 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_59f753
        lea edx, ds:[edi+0xC]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_55e830
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_55e870
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_59f7bb
        public_59f736 : nop
        mov edx, ebp
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [edx+8]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ds : [edi+8], edx
        jne public_59f736
        jmp public_59f7bb
        public_59f753 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, esi
        call public_55e830
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0xC]
        cmp edi, eax
        je public_59f78e
        lea ebx, ds:[ebx]
        public_59f770 : nop
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
        jne public_59f770
        public_59f78e : nop
        lea eax, ds:[edi+0xC]
        cmp edi, eax
        je public_59f7bb
        mov ecx, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_59f7a0 : nop
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        mov ebx, edi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ebx+8], edx
        jne public_59f7a0
        public_59f7bb : nop
        add dword ptr ds : [esi+8], 0xC
        public_59f7bf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        lea eax, ds:[eax+eax*2]
        pop ebp
        lea eax, ds:[ecx+eax*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x59f5b0)
    }
}

#undef public_59f618
#undef public_59f61d
#undef public_59f625
#undef public_59f637
#undef public_59f644
#undef public_59f660
#undef public_59f674
#undef public_59f6d7
#undef public_59f736
#undef public_59f753
#undef public_59f770
#undef public_59f78e
#undef public_59f7a0
#undef public_59f7bb
#undef public_59f7bf
