#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3db70);

#define public_6f392f1 _public_6f392f1
#define public_6f392f9 _public_6f392f9
#define public_6f3933b _public_6f3933b

PROC_DECLARE(0x6f392a0, internal_6f392a0, public_6f392a0);
extern "C" NAKED register_t __cdecl internal_6f392a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi+0xA0]
        or ebp, 0xFFFFFFFF
        cmp ebx, eax
        jae public_6f3933b
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x28]
        lea esi, ds:[edi+0xA4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], ebx
        call public_6f3db70
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, eax
        je public_6f392f1
        mov edx, dword ptr ss : [esp+0x28]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f392f1
        lea eax, ss:[esp+0x24]
        jmp public_6f392f9
        public_6f392f1 : nop
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        public_6f392f9 : nop
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+0xA8], eax
        je public_6f3933b
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f3c5d0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x10]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6f3933b : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6f392a0)
    }
}

#undef public_6f392f1
#undef public_6f392f9
#undef public_6f3933b
