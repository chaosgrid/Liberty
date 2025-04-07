#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_6616a04 _public_6616a04
#define public_6616a0c _public_6616a0c
#define public_6616a2d _public_6616a2d

PROC_DECLARE(0x66169b0, internal_66169b0, public_66169b0);
extern "C" NAKED register_t __cdecl internal_66169b0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        xor ebx, ebx
        xor ebp, ebp
        push edi
        cmp eax, 0xFFFFFFFF
        mov edi, 2
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6616a2d
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        lea ecx, ss:[esp+0x34]
        lea esi, ds:[eax+0x20]
        push ecx
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6616a04
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edx, ecx
        jb public_6616a04
        lea eax, ss:[esp+0x10]
        jmp public_6616a0c
        public_6616a04 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6616a0c : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        pop esi
        cmp eax, dword ptr ds : [ecx+0x24]
        je public_6616a2d
        mov edx, dword ptr ds : [eax+0xC]
        add edx, 8
        mov edi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x20], eax
        public_6616a2d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        mov dword ptr ds : [ecx], edi
        pop edi
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebp
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+0xC], edx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x66169b0)
    }
}

#undef public_6616a04
#undef public_6616a0c
#undef public_6616a2d
