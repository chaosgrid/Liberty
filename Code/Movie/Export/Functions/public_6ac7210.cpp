#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3660);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4390);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7210);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7570);

#define public_6ac7270 _public_6ac7270
#define public_6ac73c3 _public_6ac73c3
#define public_6ac7559 _public_6ac7559

PROC_DECLARE(0x6ac7210, internal_6ac7210, public_6ac7210);
extern "C" NAKED register_t __cdecl internal_6ac7210()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        mov ebx, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, dword ptr ds : [eax]
        push edi
        mov esi, dword ptr ds : [edi]
        lea ecx, ss:[ebp+esi*4]
        lea eax, ss:[ebp+esi*8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea edx, ds:[ebx+esi*4]
        lea ecx, ds:[ebx+esi*8]
        push eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x1C], ecx
        call public_6ac3450
        test eax, eax
        je public_6ac7270
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        push edx
        push eax
        push ebx
        call public_6ac7570
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        add esp, 0x18
        ret 0x10
        public_6ac7270 : nop
        cmp dword ptr ds : [edi+8], 2
        jl public_6ac73c3
        mov ebx, dword ptr ss : [esp+0x38]
        lea eax, ds:[esi+esi*2]
        push edi
        push ebx
        lea ecx, ds:[ebx+esi*4]
        lea edx, ds:[ebx+esi*8]
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ds:[ebx+eax*4]
        push ebp
        push ebp
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x20], ecx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x2C]
        push edi
        push edx
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x38]
        push edi
        push esi
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        push edi
        push esi
        push esi
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x34]
        push edi
        push esi
        add eax, 0x104
        push esi
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push ecx
        push edx
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push eax
        push eax
        push ebx
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x38]
        push edi
        push ecx
        push edx
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        push edi
        push ebx
        push ebx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ebp, dword ptr ss : [esp+0x30]
        push edi
        push ebp
        push esi
        push ebx
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push esi
        push eax
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        push ebx
        push ebp
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        push ecx
        push ebx
        push esi
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 0x10
        public_6ac73c3 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ds:[esi+esi*2]
        lea eax, ds:[ebx+esi*4]
        push edi
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ds:[ebx+esi*8]
        push ebx
        lea eax, ds:[ebx+edx*4]
        shl esi, 4
        push ebp
        push ebp
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x48], eax
        add esi, ebx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ecx, dword ptr ss : [esp+0x38]
        push edi
        push ecx
        push ebx
        push ebx
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x38]
        push edi
        push eax
        push eax
        push ebx
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        push edi
        push ebx
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        push edi
        push ebx
        push ebx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov edx, dword ptr ss : [esp+0x34]
        push edi
        push ebx
        add edx, 4
        push ebx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x38]
        push edi
        push eax
        push ebx
        push eax
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push esi
        push eax
        push eax
        call public_6ac30a0
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edi
        push eax
        push ecx
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        push edi
        push esi
        push esi
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        push ebx
        push esi
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        push edi
        push esi
        push esi
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov ebp, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x38]
        push edi
        push ebp
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        push edi
        push ebp
        push ebx
        push ebp
        call public_6ac3660
        test eax, eax
        je public_6ac7559
        push edi
        push ebp
        push ebx
        push ebp
        call public_6ac3660
        test eax, eax
        je public_6ac7559
        push edi
        push ebx
        push ebp
        push ebx
        call public_6ac3660
        test eax, eax
        je public_6ac7559
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x38]
        push edi
        push ebp
        push ebx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac7559
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        push 0xFFFFFFFF
        push esi
        call public_6ac4390
        push edi
        push ebp
        push esi
        push ebp
        call public_6ac3660
        test eax, eax
        je public_6ac7559
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 0x10
        public_6ac7559 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x6ac7210)
    }
}

#undef public_6ac7270
#undef public_6ac73c3
#undef public_6ac7559
