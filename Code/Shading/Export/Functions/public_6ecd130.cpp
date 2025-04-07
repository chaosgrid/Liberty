#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);

#define public_6ecd140 _public_6ecd140
#define public_6ecd177 _public_6ecd177
#define public_6ecd17f _public_6ecd17f
#define public_6ecd1b1 _public_6ecd1b1
#define public_6ecd1ba _public_6ecd1ba

PROC_DECLARE(0x6ecd130, internal_6ecd130, public_6ecd130);
extern "C" NAKED register_t __cdecl internal_6ecd130()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        jne public_6ecd140
        or eax, eax
        pop ecx
        ret 0x10
        public_6ecd140 : nop
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_6ecd1ba
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x28]
        push eax
        mov ecx, esi
        call public_6ec6120
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ecd177
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ecd177
        lea eax, ss:[esp+0x14]
        jmp public_6ecd17f
        public_6ecd177 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ecd17f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x2C]
        je public_6ecd1ba
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6ecd1b1
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_6ed1028]
        add esp, 0xC
        mov byte ptr ds : [edi+esi-1], 0
        pop edi
        xor ebx, ebx
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x10
        public_6ecd1b1 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [edx], 0
        xor ebx, ebx
        public_6ecd1ba : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6ecd130)
    }
}

#undef public_6ecd140
#undef public_6ecd177
#undef public_6ecd17f
#undef public_6ecd1b1
#undef public_6ecd1ba
