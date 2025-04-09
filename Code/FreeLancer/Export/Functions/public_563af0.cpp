#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422a70);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);
CLANG_FORWARD_PROC_SYMBOL(public_563af0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1e60);

#define public_563cdc _public_563cdc

PROC_DECLARE(0x563af0, internal_563af0, public_563af0);
extern "C" NAKED register_t __cdecl internal_563af0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1e60 @0x563af8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1e60
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push esi
        call dword ptr ds : [public_5c6e80]
        mov esi, eax
        test esi, esi
        je public_563cdc
        mov ecx, esi
        call dword ptr ds : [public_5c6e78]
        test eax, eax
        je public_563cdc
        push 0x1701
        call public_401e90
        add esp, 4
        call public_422a70
        call public_4225e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xFC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xFC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x20]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0xB44
        mov byte ptr ss : [esp+0x30], 1
        call public_421ed0
        add esp, 4
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6e7c]
        mov eax, dword ptr ds : [public_67a480]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call public_403ea0
        mov eax, dword ptr ds : [public_67a484]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call public_403ea0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        push edx
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        push 0xB44
        call public_421dd0
        add esp, 4
        call public_422ab0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov byte ptr ss : [esp+0x38], 0
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        public_563cdc : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x563af0)
    }
}

#undef public_563cdc
