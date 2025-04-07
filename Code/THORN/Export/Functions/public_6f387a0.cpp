#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3db70);

#define public_6f387eb _public_6f387eb
#define public_6f387f3 _public_6f387f3
#define public_6f3882f _public_6f3882f

PROC_DECLARE(0x6f387a0, internal_6f387a0, public_6f387a0);
extern "C" NAKED register_t __cdecl internal_6f387a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [edi+0xA0]
        jae public_6f3882f
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        lea esi, ds:[edi+0xA4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6f3db70
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6f387eb
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f387eb
        lea eax, ss:[esp+0x20]
        jmp public_6f387f3
        public_6f387eb : nop
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        public_6f387f3 : nop
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+0xA8], eax
        je public_6f3882f
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], 0
        call public_6f3c5d0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 8
        public_6f3882f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f387a0)
    }
}

#undef public_6f387eb
#undef public_6f387f3
#undef public_6f3882f
