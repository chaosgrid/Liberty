#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66122d0);
CLANG_FORWARD_PROC_SYMBOL(public_66126e0);
CLANG_FORWARD_PROC_SYMBOL(public_66128f0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);

#define public_6614b98 _public_6614b98
#define public_6614b9f _public_6614b9f

PROC_DECLARE(0x6614b30, internal_6614b30, public_6614b30);
extern "C" NAKED register_t __cdecl internal_6614b30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0xC
        lea eax, ss:[esp+0x14]
        push ebx
        push esi
        push eax
        push ecx
        lea ecx, ds:[edx-0xC]
        xor bl, bl
        call public_6614580
        test al, al
        je public_6614b9f
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x1C]
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_66126e0
        cmp eax, 0xFFFFFFFF
        je public_6614b9f
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_66122d0
        test eax, eax
        je public_6614b98
        mov bl, 1
        public_6614b98 : nop
        mov ecx, esi
        call public_66128f0
        public_6614b9f : nop
        mov al, bl
        pop esi
        pop ebx
        add esp, 0xC
        ret 0x24
        UNREACHABLE_TRAP(0x6614b30)
    }
}

#undef public_6614b98
#undef public_6614b9f
