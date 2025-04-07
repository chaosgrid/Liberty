#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63211f0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6321215 _public_6321215
#define public_6321236 _public_6321236
#define public_6321249 _public_6321249
#define public_6321258 _public_6321258
#define public_6321295 _public_6321295
#define public_63212a0 _public_63212a0

PROC_DECLARE(0x63211f0, internal_63211f0, public_63211f0);
extern "C" NAKED register_t __cdecl internal_63211f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_64018d8]
        cmp dword ptr ds : [public_64018c8], eax
        push ebx
        push esi
        push edi
        mov ebx, 0xFFFFFFFE
        mov dword ptr ss : [esp+0x14], ecx
        je public_6321215
        cmp dword ptr ds : [eax+0xC], ecx
        je public_6321236
        public_6321215 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_64018d8], eax
        public_6321236 : nop
        mov edx, dword ptr ds : [public_64018c8]
        xor edi, edi
        cmp eax, edx
        je public_6321249
        lea esi, ds:[eax+0x10]
        cmp esi, edi
        jne public_6321258
        public_6321249 : nop
        push ecx
        call public_6320290
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_63212a0
        public_6321258 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ds:[esi+0x10]
        call public_630dda0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea ecx, ds:[esi+0x28]
        call public_630dda0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, edi
        je public_6321295
        push 0x17
        push eax
        lea edx, ds:[esi+0x44]
        push edx
        call dword ptr ds : [public_6399234]
        add esp, 0xC
        mov word ptr ds : [esi+0x72], di
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_6321295 : nop
        mov word ptr ds : [esi+0x44], di
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_63212a0 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63211f0)
    }
}

#undef public_6321215
#undef public_6321236
#undef public_6321249
#undef public_6321258
#undef public_6321295
#undef public_63212a0
