#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);

#define public_4c499c _public_4c499c
#define public_4c49eb _public_4c49eb

PROC_DECLARE(0x4c4910, internal_4c4910, public_4c4910);
extern "C" NAKED register_t __cdecl internal_4c4910()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        sub esp, 0x18
        mov dword ptr ds : [public_673358], eax
        test dword ptr ds : [ecx], 0x3FFFFFFF
        push ebx
        push esi
        je public_4c49eb
        push eax
        call dword ptr ds : [public_5c6090]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        push eax
        mov dword ptr ds : [public_673354], eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_4c49eb
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x48]
        mov bl, al
        test bl, 0x81
        jne public_4c49eb
        mov esi, dword ptr ds : [public_673354]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_673320
        or bl, 1
        mov dword ptr ss : [esp+0x2C], esi
        call public_432240
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_673324]
        je public_4c499c
        mov al, byte ptr ds : [eax+0x10]
        and al, bl
        cmp al, bl
        je public_4c49eb
        public_4c499c : nop
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_673320
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ss : [esp+0x14], 0
        call public_46d6d0
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0x10], bl
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
        public_4c49eb : nop
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4c4910)
    }
}

#undef public_4c499c
#undef public_4c49eb
