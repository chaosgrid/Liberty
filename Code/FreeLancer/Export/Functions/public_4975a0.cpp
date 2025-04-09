#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4975a0);
CLANG_FORWARD_PROC_SYMBOL(public_4976e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);

#define public_4975e5 _public_4975e5
#define public_497622 _public_497622
#define public_497671 _public_497671
#define public_49769b _public_49769b
#define public_4976a9 _public_4976a9
#define public_4976ba _public_4976ba
#define public_4976d3 _public_4976d3

PROC_DECLARE(0x4975a0, internal_4975a0, public_4975a0);
extern "C" NAKED register_t __cdecl internal_4975a0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x7D0]
        test eax, eax
        jne public_4976d3
        mov eax, dword ptr ds : [ebx+0x810]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x80C]
        push eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_4a2f80
        mov eax, dword ptr ds : [ebx+0x400]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+8], ecx
        je public_4976d3
        push ebp
        push esi
        push edi
        public_4975e5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        mov cl, byte ptr ds : [eax+0x48]
        test cl, cl
        mov dword ptr ss : [esp+0x1C], eax
        je public_4976ba
        test byte ptr ds : [eax+4], 4
        je public_4976ba
        mov ebp, dword ptr ds : [eax+0x64]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x34]
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], esi
        jle public_4976ba
        public_497622 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6030]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x24]
        push ecx
        push esi
        mov ecx, ebp
        call dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+0x2C]
        push 0
        push 0
        lea edx, ss:[esp+0x1B]
        push edx
        push eax
        mov byte ptr ss : [esp+0x23], 0
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x23]
        or al, byte ptr ss : [esp+0x4C]
        add esp, 0x10
        test al, 1
        mov byte ptr ss : [esp+0x13], al
        je public_4976a9
        mov eax, dword ptr ds : [ebx+0x400]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4976a9
        public_497671 : nop
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        je public_49769b
        test byte ptr ds : [esi+4], 4
        je public_49769b
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x24]
        jne public_49769b
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        mov ecx, ebx
        call public_4976e0
        public_49769b : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x400]
        jne public_497671
        mov esi, dword ptr ss : [esp+0x18]
        public_4976a9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], esi
        jl public_497622
        public_4976ba : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [ebx+0x400]
        mov dword ptr ss : [esp+0x14], eax
        jne public_4975e5
        pop edi
        pop esi
        pop ebp
        public_4976d3 : nop
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x4975a0)
    }
}

#undef public_4975e5
#undef public_497622
#undef public_497671
#undef public_49769b
#undef public_4976a9
#undef public_4976ba
#undef public_4976d3
