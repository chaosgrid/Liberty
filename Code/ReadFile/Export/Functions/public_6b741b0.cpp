#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b73fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b741b0);
CLANG_FORWARD_PROC_SYMBOL(public_6b74350);
CLANG_FORWARD_PROC_SYMBOL(public_6b76450);
CLANG_FORWARD_PROC_SYMBOL(public_6b76470);
CLANG_FORWARD_PROC_SYMBOL(public_6b76b00);
CLANG_FORWARD_PROC_SYMBOL(public_6b76bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76be0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76c30);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b741e3 _public_6b741e3
#define public_6b741f1 _public_6b741f1
#define public_6b7427a _public_6b7427a
#define public_6b74284 _public_6b74284
#define public_6b7428e _public_6b7428e
#define public_6b74299 _public_6b74299
#define public_6b742bc _public_6b742bc
#define public_6b742e0 _public_6b742e0
#define public_6b74342 _public_6b74342

PROC_DECLARE(0x6b741b0, internal_6b741b0, public_6b741b0);
extern "C" NAKED register_t __cdecl internal_6b741b0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebp, ebp
        mov eax, dword ptr ds : [edi+0x120]
        cmp eax, ebp
        je public_6b741e3
        mov edx, dword ptr ds : [edi+0x130]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edi+0x120]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        jmp public_6b74299
        public_6b741e3 : nop
        cmp edi, dword ptr ds : [public_6b7a224]
        jne public_6b741f1
        mov dword ptr ds : [public_6b7a224], ebp
        public_6b741f1 : nop
        mov ebx, dword ptr ds : [edi+0x14C]
        lea esi, ds:[edi+0x148]
        lea edx, ss:[esp+0x14]
        mov ecx, esi
        push edx
        call public_6b76bd0
        mov eax, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, esi
        call public_6b76be0
        mov eax, dword ptr ds : [edi+0x130]
        cmp eax, 0xFFFFFFFF
        je public_6b7428e
        mov dword ptr ss : [esp+0x14], eax
        lea edx, ss:[esp+0x14]
        lea esi, ds:[edi+0x134]
        lea eax, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, esi
        call public_6b76470
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_6b7427a
        mov ebp, dword ptr ds : [eax+0xC]
        lea ebx, ds:[eax+0x10]
        lea ecx, ds:[ebx+4]
        call public_6b72dd0
        push ebp
        mov dword ptr ds : [ebx], 0xFFFFFFFF
        call dword ptr ds : [public_6b79014]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, esi
        call public_6b76450
        xor ebp, ebp
        jmp public_6b74284
        public_6b7427a : nop
        mov dword ptr ds : [edi+0x11C], 6
        public_6b74284 : nop
        mov dword ptr ds : [edi+0x130], 0xFFFFFFFF
        public_6b7428e : nop
        lea ecx, ds:[edi+0x134]
        call public_6b74350
        public_6b74299 : nop
        lea eax, ds:[edi+0x154]
        push eax
        call dword ptr ds : [public_6b79034]
        mov ebx, dword ptr ds : [edi+0x14C]
        lea esi, ds:[edi+0x148]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6b742e0
        public_6b742bc : nop
        lea ecx, ss:[esp+0x18]
        push ebp
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6b76c30
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        mov ecx, esi
        call public_6b73fc0
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6b742bc
        public_6b742e0 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6b782a0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x138]
        lea esi, ds:[edi+0x134]
        add esp, 4
        lea edx, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6b76b00
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b782a0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push ecx
        mov dword ptr ds : [esi+0x10], ebp
        call public_6b782a0
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x120]
        add esp, 8
        cmp eax, ebp
        je public_6b74342
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x120], ebp
        public_6b74342 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6b741b0)
    }
}

#undef public_6b741e3
#undef public_6b741f1
#undef public_6b7427a
#undef public_6b74284
#undef public_6b7428e
#undef public_6b74299
#undef public_6b742bc
#undef public_6b742e0
#undef public_6b74342
