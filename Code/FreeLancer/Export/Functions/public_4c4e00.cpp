#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);

#define public_4c4e3a _public_4c4e3a
#define public_4c4e91 _public_4c4e91

PROC_DECLARE(0x4c4e00, internal_4c4e00, public_4c4e00);
extern "C" NAKED register_t __cdecl internal_4c4e00()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_673320
        mov dword ptr ss : [esp+0x2C], esi
        call public_432240
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_673324]
        mov bl, byte ptr ss : [esp+0x28]
        je public_4c4e3a
        mov al, byte ptr ds : [eax+0x10]
        and al, bl
        cmp al, bl
        je public_4c4e91
        public_4c4e3a : nop
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_673320
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ss : [esp+0x14], 0
        call public_46d6d0
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        je public_4c4e91
        mov ecx, dword ptr ds : [public_67ecd0]
        push 9
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ss : [esp+0x20], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x11C]
        public_4c4e91 : nop
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4c4e00)
    }
}

#undef public_4c4e3a
#undef public_4c4e91
