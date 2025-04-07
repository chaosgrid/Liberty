#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3db70);

#define public_6f38c21 _public_6f38c21
#define public_6f38c29 _public_6f38c29
#define public_6f38c6b _public_6f38c6b

PROC_DECLARE(0x6f38bd0, internal_6f38bd0, public_6f38bd0);
extern "C" NAKED register_t __cdecl internal_6f38bd0()
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
        jae public_6f38c6b
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
        je public_6f38c21
        mov edx, dword ptr ss : [esp+0x28]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f38c21
        lea eax, ss:[esp+0x24]
        jmp public_6f38c29
        public_6f38c21 : nop
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        public_6f38c29 : nop
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+0xA8], eax
        je public_6f38c6b
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        xor edi, edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], edi
        call public_6f3c5d0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x10]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6f38c6b : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6f38bd0)
    }
}

#undef public_6f38c21
#undef public_6f38c29
#undef public_6f38c6b
