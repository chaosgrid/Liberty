#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c570);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d110);

#define public_6f38d75 _public_6f38d75
#define public_6f38dae _public_6f38dae
#define public_6f38e04 _public_6f38e04
#define public_6f38e06 _public_6f38e06

PROC_DECLARE(0x6f38d20, internal_6f38d20, public_6f38d20);
extern "C" NAKED register_t __cdecl internal_6f38d20()
{
    __asm
    {
        sub esp, 0x18
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        push edi
        push esi
        call dword ptr ds : [eax+0x7C]
        mov ebp, dword ptr ss : [esp+0x30]
        cmp eax, ebp
        jbe public_6f38e04
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x24]
        add esi, 0xA4
        xor ebx, ebx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6f3ba50
        test ebp, ebp
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0x74]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], edx
        jbe public_6f38dae
        public_6f38d75 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f3ba50
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [edx+0x74]
        je public_6f38dae
        lea ecx, ss:[esp+0x2C]
        inc ebx
        call public_6f3c570
        cmp ebx, ebp
        jb public_6f38d75
        public_6f38dae : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f3c5d0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f3d110
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [ecx+0x74]
        pop ebx
        je public_6f38e04
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6f38e06
        pop edi
        pop esi
        mov eax, offset public_6f5af04
        pop ebp
        add esp, 0x18
        ret 0xC
        public_6f38e04 : nop
        xor eax, eax
        public_6f38e06 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6f38d20)
    }
}

#undef public_6f38d75
#undef public_6f38dae
#undef public_6f38e04
#undef public_6f38e06
