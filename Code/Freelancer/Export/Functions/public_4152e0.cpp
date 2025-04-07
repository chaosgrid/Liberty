#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4127d0);
CLANG_FORWARD_PROC_SYMBOL(public_4152e0);
CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_415314 _public_415314
#define public_415321 _public_415321
#define public_415325 _public_415325
#define public_41536b _public_41536b
#define public_415370 _public_415370
#define public_415378 _public_415378
#define public_41537d _public_41537d
#define public_415388 _public_415388
#define public_415426 _public_415426
#define public_415466 _public_415466
#define public_415473 _public_415473
#define public_415480 _public_415480
#define public_415499 _public_415499
#define public_4154aa _public_4154aa

PROC_DECLARE(0x4152e0, internal_4152e0, public_4152e0);
extern "C" NAKED register_t __cdecl internal_4152e0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [public_6105b0]
        push esi
        xor esi, esi
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ebx
        je public_415499
        mov eax, dword ptr ds : [ebx+0x14]
        cmp eax, esi
        je public_415499
        mov ecx, dword ptr ds : [eax+0x24]
        push ebp
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_415325
        public_415314 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_415325
        public_415321 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_415325 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0x24], esi
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x20], esi
        mov eax, dword ptr ds : [public_616648]
        mov ecx, dword ptr ds : [public_61664c]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], edx
        mov edi, eax
        jae public_415426
        mov edx, dword ptr ds : [public_616644]
        cmp edx, esi
        je public_41536b
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_415370
        public_41536b : nop
        mov ecx, 1
        public_415370 : nop
        cmp edx, esi
        jne public_415378
        xor eax, eax
        jmp public_41537d
        public_415378 : nop
        sub eax, edx
        sar eax, 2
        public_41537d : nop
        lea ebp, ds:[eax+ecx]
        cmp ebp, esi
        mov eax, ebp
        jge public_415388
        xor eax, eax
        public_415388 : nop
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
        mov ebx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[esi+eax*4+4]
        mov dword ptr ds : [public_616644], esi
        mov dword ptr ds : [public_616648], ecx
        xor esi, esi
        jmp public_415480
        public_415426 : nop
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
        je public_415473
        public_415466 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_415466
        public_415473 : nop
        add dword ptr ds : [public_616648], 4
        lea ebx, ds:[ebx]
        public_415480 : nop
        cmp dword ptr ss : [esp+0x14], esi
        jne public_415321
        cmp dword ptr ss : [esp+0x18], esi
        jne public_415314
        pop edi
        pop ebp
        mov dword ptr ds : [ebx+0x14], esi
        public_415499 : nop
        cmp dword ptr ds : [ebx+0x14], esi
        jne public_4154aa
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, ebx
        call public_4127d0
        public_4154aa : nop
        mov eax, dword ptr ds : [ebx+0x14]
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4152e0)
    }
}

#undef public_415314
#undef public_415321
#undef public_415325
#undef public_41536b
#undef public_415370
#undef public_415378
#undef public_41537d
#undef public_415388
#undef public_415426
#undef public_415466
#undef public_415473
#undef public_415480
#undef public_415499
#undef public_4154aa
