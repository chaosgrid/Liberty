#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d830);
CLANG_FORWARD_PROC_SYMBOL(public_40df40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40d866 _public_40d866
#define public_40d868 _public_40d868
#define public_40d870 _public_40d870
#define public_40d875 _public_40d875
#define public_40d881 _public_40d881
#define public_40d8a6 _public_40d8a6
#define public_40d8ba _public_40d8ba
#define public_40d8c4 _public_40d8c4
#define public_40d8e0 _public_40d8e0
#define public_40d8f8 _public_40d8f8
#define public_40d900 _public_40d900
#define public_40d913 _public_40d913
#define public_40d953 _public_40d953
#define public_40d970 _public_40d970
#define public_40d99e _public_40d99e
#define public_40d9a2 _public_40d9a2
#define public_40d9b9 _public_40d9b9
#define public_40d9d0 _public_40d9d0
#define public_40d9e4 _public_40d9e4
#define public_40d9f0 _public_40d9f0
#define public_40da01 _public_40da01
#define public_40da17 _public_40da17
#define public_40da30 _public_40da30
#define public_40da54 _public_40da54
#define public_40da60 _public_40da60
#define public_40da75 _public_40da75
#define public_40da82 _public_40da82
#define public_40da93 _public_40da93
#define public_40da96 _public_40da96

PROC_DECLARE(0x40d830, internal_40d830, public_40d830);
extern "C" NAKED register_t __cdecl internal_40d830()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0xC]
        push esi
        mov esi, dword ptr ds : [edx+8]
        sub eax, esi
        sar eax, 3
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], edx
        jae public_40d970
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        je public_40d866
        mov eax, esi
        sub eax, edx
        sar eax, 3
        cmp ebp, eax
        jb public_40d868
        public_40d866 : nop
        mov eax, ebp
        public_40d868 : nop
        test edx, edx
        jne public_40d870
        xor esi, esi
        jmp public_40d875
        public_40d870 : nop
        sub esi, edx
        sar esi, 3
        public_40d875 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_40d881
        xor eax, eax
        public_40d881 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        je public_40d8ba
        public_40d8a6 : nop
        push esi
        push edi
        call public_40df40
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_40d8a6
        public_40d8ba : nop
        test ebp, ebp
        mov esi, edi
        jbe public_40d8e0
        mov dword ptr ss : [esp+0x1C], ebp
        public_40d8c4 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_40df40
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_40d8c4
        public_40d8e0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*8]
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_40d913
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_40d900
        public_40d8f8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_40d900 : nop
        add eax, esi
        push esi
        push eax
        call public_40df40
        add esi, 8
        add esp, 8
        cmp esi, edi
        jne public_40d8f8
        public_40d913 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_5b7e1d
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 4
        test edx, edx
        jne public_40d953
        xor ecx, ecx
        mov ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_40d953 : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        sar ecx, 3
        add ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_40d970 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, esi
        sub eax, edi
        sar eax, 3
        cmp eax, ebp
        jae public_40da17
        lea eax, ds:[ebp*8]
        mov dword ptr ss : [esp+0x20], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_40d9b9
        sub eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_40d9a2
        public_40d99e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_40d9a2 : nop
        add eax, ebx
        push ebx
        push eax
        call public_40df40
        add ebx, 8
        add esp, 8
        cmp ebx, esi
        jne public_40d99e
        mov edx, dword ptr ss : [esp+0x10]
        public_40d9b9 : nop
        mov esi, dword ptr ds : [edx+8]
        mov ebx, dword ptr ss : [esp+0x24]
        mov ecx, esi
        sub ecx, edi
        sar ecx, 3
        sub ebp, ecx
        je public_40d9e4
        nop 
        lea esp, ss:[esp]
        public_40d9d0 : nop
        push ebx
        push esi
        call public_40df40
        add esp, 8
        add esi, 8
        dec ebp
        jne public_40d9d0
        mov edx, dword ptr ss : [esp+0x10]
        public_40d9e4 : nop
        mov ecx, dword ptr ds : [edx+8]
        cmp edi, ecx
        mov eax, edi
        je public_40da01
        lea ecx, ds:[ecx]
        public_40d9f0 : nop
        mov esi, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_40d9f0
        public_40da01 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add ecx, eax
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_40da17 : nop
        test ebp, ebp
        jbe public_40da96
        shl ebp, 3
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_40da54
        lea ebx, ds:[ebx]
        public_40da30 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push ecx
        call public_40df40
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 8
        add ebx, 8
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_40da30
        mov edx, dword ptr ss : [esp+0x10]
        public_40da54 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, ecx
        sub eax, ebp
        cmp edi, eax
        je public_40da75
        nop 
        public_40da60 : nop
        mov esi, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        jne public_40da60
        public_40da75 : nop
        lea esi, ds:[edi+ebp]
        cmp edi, esi
        mov eax, edi
        je public_40da93
        mov ecx, dword ptr ss : [esp+0x24]
        public_40da82 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        add eax, 8
        cmp eax, esi
        jne public_40da82
        public_40da93 : nop
        add dword ptr ds : [edx+8], ebp
        public_40da96 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x40d830)
    }
}

#undef public_40d866
#undef public_40d868
#undef public_40d870
#undef public_40d875
#undef public_40d881
#undef public_40d8a6
#undef public_40d8ba
#undef public_40d8c4
#undef public_40d8e0
#undef public_40d8f8
#undef public_40d900
#undef public_40d913
#undef public_40d953
#undef public_40d970
#undef public_40d99e
#undef public_40d9a2
#undef public_40d9b9
#undef public_40d9d0
#undef public_40d9e4
#undef public_40d9f0
#undef public_40da01
#undef public_40da17
#undef public_40da30
#undef public_40da54
#undef public_40da60
#undef public_40da75
#undef public_40da82
#undef public_40da93
#undef public_40da96
