#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6c40);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6e10);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd6ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd66d5 _public_6bd66d5
#define public_6bd66f7 _public_6bd66f7
#define public_6bd6779 _public_6bd6779
#define public_6bd67d1 _public_6bd67d1
#define public_6bd6848 _public_6bd6848
#define public_6bd6852 _public_6bd6852
#define public_6bd6881 _public_6bd6881
#define public_6bd68f5 _public_6bd68f5
#define public_6bd693c _public_6bd693c
#define public_6bd69aa _public_6bd69aa
#define public_6bd69b3 _public_6bd69b3
#define public_6bd69b8 _public_6bd69b8
#define public_6bd69d3 _public_6bd69d3

PROC_DECLARE(0x6bd66a0, internal_6bd66a0, public_6bd66a0);
extern "C" NAKED register_t __cdecl internal_6bd66a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        push edi
        je public_6bd6852
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6bd66f7
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        cmp eax, edx
        je public_6bd66f7
        lea ecx, ds:[eax+4]
        cmp ecx, edx
        mov dword ptr ds : [esi+0x1C], ecx
        jne public_6bd69b3
        lea ecx, ss:[esp+0x20]
        push ecx
        public_6bd66d5 : nop
        push eax
        call public_6bd6ee0
        add esp, 8
        mov ecx, esi
        call public_6bd6c40
        mov eax, dword ptr ds : [esi+0x2C]
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_6bd66f7 : nop
        push 0x1000
        call public_6c09d26
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6bd6779
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 2
        call public_6bd6e10
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+4], edi
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 4
        push ecx
        add edi, 0x800
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+4]
        mov ebx, edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [esi+0x1C], edx
        push ecx
        jmp public_6bd69b8
        public_6bd6779 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[edx+ecx*4-4]
        cmp eax, ecx
        jae public_6bd67d1
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [esi+0x20]
        push edx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [esi+0x1C], edx
        push ecx
        jmp public_6bd69b8
        public_6bd67d1 : nop
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebx, eax
        lea eax, ds:[ebx+ebx]
        push eax
        mov ecx, esi
        call public_6bd6e30
        lea ebx, ds:[eax+ebx*4]
        mov dword ptr ds : [ebx], edi
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        push ebx
        mov dword ptr ds : [edx+0xC], ecx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0x14]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [esi+0x1C], edx
        public_6bd6848 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6bd69b8
        public_6bd6852 : nop
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        je public_6bd69d3
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6bd6881
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        cmp eax, edx
        je public_6bd6881
        lea ecx, ds:[eax+4]
        cmp ecx, edx
        mov dword ptr ds : [esi+0x1C], ecx
        jne public_6bd6848
        lea edx, ss:[esp+0x20]
        push edx
        jmp public_6bd66d5
        public_6bd6881 : nop
        push 0x1000
        call public_6c09d26
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6bd68f5
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 2
        call public_6bd6e10
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 4
        push eax
        add edi, 0x800
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+4]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edi
        jmp public_6bd69aa
        public_6bd68f5 : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea edx, ds:[ecx+edx*4-4]
        cmp eax, edx
        jae public_6bd693c
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_6bd69aa
        public_6bd693c : nop
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebx, eax
        lea ecx, ds:[ebx+ebx]
        push ecx
        mov ecx, esi
        call public_6bd6e30
        lea ebx, ds:[eax+ebx*4]
        mov dword ptr ds : [ebx], edi
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6bd6eb0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        push ebx
        push edi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [eax+0xC], edx
        call public_6bd6eb0
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        public_6bd69aa : nop
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x1C], ecx
        public_6bd69b3 : nop
        lea edx, ss:[esp+0x20]
        push edx
        public_6bd69b8 : nop
        push eax
        call public_6bd6ee0
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x2C], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_6bd69d3 : nop
        pop edi
        pop esi
        mov eax, 4
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6bd66a0)
    }
}

#undef public_6bd66d5
#undef public_6bd66f7
#undef public_6bd6779
#undef public_6bd67d1
#undef public_6bd6848
#undef public_6bd6852
#undef public_6bd6881
#undef public_6bd68f5
#undef public_6bd693c
#undef public_6bd69aa
#undef public_6bd69b3
#undef public_6bd69b8
#undef public_6bd69d3
