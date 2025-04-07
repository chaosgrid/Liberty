#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_629f090);
CLANG_FORWARD_PROC_SYMBOL(public_62a0360);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab463 _public_62ab463
#define public_62ab4b2 _public_62ab4b2

PROC_DECLARE(0x62ab3f0, internal_62ab3f0, public_62ab3f0);
extern "C" NAKED register_t __cdecl internal_62ab3f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        mov edi, ecx
        xor bl, bl
        call public_6334510
        add esp, 4
        test al, al
        push esi
        je public_62ab463
        lea ecx, ds:[edi+0xE4]
        call public_629b6c0
        test eax, eax
        je public_62ab4b2
        push eax
        call public_629f090
        add esp, 4
        test eax, eax
        je public_62ab4b2
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x70]
        test al, al
        je public_62ab4b2
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov al, 1
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0xC
        ret 8
        public_62ab463 : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62ab4b2
        push esi
        lea ecx, ds:[edi+0x144]
        call public_62a1540
        test eax, eax
        je public_62ab4b2
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, eax
        call public_62a0360
        test al, al
        je public_62ab4b2
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        pop esi
        mov al, 1
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 8
        public_62ab4b2 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62ab3f0)
    }
}

#undef public_62ab463
#undef public_62ab4b2
