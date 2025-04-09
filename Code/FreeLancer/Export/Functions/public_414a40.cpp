#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_414a8f _public_414a8f
#define public_414aa5 _public_414aa5
#define public_414ab2 _public_414ab2
#define public_414ab6 _public_414ab6
#define public_414afc _public_414afc
#define public_414b01 _public_414b01
#define public_414b09 _public_414b09
#define public_414b0e _public_414b0e
#define public_414b19 _public_414b19
#define public_414bb7 _public_414bb7
#define public_414bf7 _public_414bf7
#define public_414c04 _public_414c04
#define public_414c10 _public_414c10
#define public_414c29 _public_414c29
#define public_414c37 _public_414c37

PROC_DECLARE(0x414a40, internal_414a40, public_414a40);
extern "C" NAKED register_t __cdecl internal_414a40()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [public_6105b0]
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x20], eax
        mov dword ptr ss : [esp+0x14], esi
        je public_414c37
        mov ecx, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x20], eax
        je public_414c37
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x18]
        jne public_414a8f
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [esi+0x1C]
        je public_414c37
        public_414a8f : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_414c29
        mov edx, dword ptr ds : [eax+0x24]
        push ebp
        push edi
        mov dword ptr ss : [esp+0x18], edx
        jmp public_414ab6
        public_414aa5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_414ab6
        public_414ab2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_414ab6 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0x24], ebx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [edx+0x20], ebx
        mov eax, dword ptr ds : [public_616648]
        mov ecx, dword ptr ds : [public_61664c]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_414bb7
        mov edx, dword ptr ds : [public_616644]
        cmp edx, ebx
        je public_414afc
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_414b01
        public_414afc : nop
        mov ecx, 1
        public_414b01 : nop
        cmp edx, ebx
        jne public_414b09
        xor eax, eax
        jmp public_414b0e
        public_414b09 : nop
        sub eax, edx
        sar eax, 2
        public_414b0e : nop
        lea ebp, ds:[eax+ecx]
        cmp ebp, ebx
        mov eax, ebp
        jge public_414b19
        xor eax, eax
        public_414b19 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_616644]
        push esi
        push edi
        push eax
        mov ecx, offset public_616640
        call public_597c70
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ebx, eax
        push 1
        push ebx
        mov ecx, offset public_616640
        call public_427730
        mov edx, dword ptr ds : [public_616648]
        add ebx, 4
        push ebx
        push edx
        push edi
        mov ecx, offset public_616640
        call public_597c70
        mov eax, dword ptr ds : [public_616648]
        mov ecx, dword ptr ds : [public_616644]
        push eax
        push ecx
        mov ecx, offset public_616640
        call public_53aaa0
        mov edx, dword ptr ds : [public_616644]
        push edx
        call public_5b7e1d
        lea eax, ds:[esi+ebp*4]
        add esp, 4
        mov ecx, offset public_616640
        mov dword ptr ds : [public_61664c], eax
        call public_5ad970
        lea ecx, ds:[esi+eax*4+4]
        mov dword ptr ds : [public_616644], esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_616648], ecx
        xor ebx, ebx
        jmp public_414c10
        public_414bb7 : nop
        lea edx, ds:[eax+4]
        push edx
        push eax
        push eax
        mov ecx, offset public_616640
        call public_597c70
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_616648]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_616640
        call public_427730
        mov ecx, dword ptr ds : [public_616648]
        cmp edi, ecx
        mov eax, edi
        je public_414c04
        public_414bf7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_414bf7
        public_414c04 : nop
        add dword ptr ds : [public_616648], 4
        nop 
        lea esp, ss:[esp]
        public_414c10 : nop
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_414ab2
        cmp dword ptr ss : [esp+0x18], ebx
        jne public_414aa5
        pop edi
        pop ebp
        mov dword ptr ds : [esi+0x14], ebx
        public_414c29 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], ecx
        public_414c37 : nop
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x1C]
        pop esi
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x414a40)
    }
}

#undef public_414a8f
#undef public_414aa5
#undef public_414ab2
#undef public_414ab6
#undef public_414afc
#undef public_414b01
#undef public_414b09
#undef public_414b0e
#undef public_414b19
#undef public_414bb7
#undef public_414bf7
#undef public_414c04
#undef public_414c10
#undef public_414c29
#undef public_414c37
