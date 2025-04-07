#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9740);
CLANG_FORWARD_PROC_SYMBOL(public_6eeba30);
CLANG_FORWARD_PROC_SYMBOL(public_6eeba50);
CLANG_FORWARD_PROC_SYMBOL(public_6eebb00);
CLANG_FORWARD_PROC_SYMBOL(public_6eebbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eebc60);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cda0);

PROC_DECLARE(0x6f5cda0, internal_6f5cda0, public_6f5cda0);
extern "C" NAKED register_t __cdecl internal_6f5cda0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        mov ecx, offset public_6fd1bf0
        mov dword ptr ss : [esp+4], 0
        call public_6ee9740
        lea ecx, ss:[esp]
        push ecx
        mov ecx, offset public_6fd1bf0
        mov dword ptr ss : [esp+4], 1
        call public_6ee9740
        lea edx, ss:[esp]
        push edx
        mov ecx, offset public_6fd1bf0
        mov dword ptr ss : [esp+4], 2
        call public_6ee9740
        mov eax, dword ptr ds : [public_6fbbbb0]
        push eax
        push 2
        call public_6eeba50
        mov ecx, dword ptr ds : [public_6fbbbb4]
        push ecx
        push 0x19
        call public_6eeba50
        fld dword ptr ds : [public_6fbbbbc]
        add esp, 8
        fstp qword ptr ss : [esp]
        call public_6eeba30
        push 0x3ECCCCCD
        push 7
        call public_6eebb00
        push 0x3D4CCCCD
        push 6
        call public_6eebb00
        fld dword ptr ds : [public_6fbbbb8]
        fadd st(0), st
        add esp, 0x14
        fstp dword ptr ss : [esp]
        push 6
        call public_6eeba50
        push 0
        push 7
        call public_6eeba50
        fld dword ptr ds : [public_6fbbbb8]
        fadd st(0), st
        add esp, 0xC
        fstp dword ptr ss : [esp]
        push 8
        call public_6eeba50
        mov edx, dword ptr ds : [public_6fbbbb8]
        push edx
        push 9
        call public_6eeba50
        mov eax, dword ptr ds : [public_6fbbbb8]
        push eax
        push 0xA
        call public_6eeba50
        mov ecx, dword ptr ds : [public_6fbbbb8]
        push ecx
        push 0xB
        call public_6eeba50
        mov edx, dword ptr ds : [public_6fbbbb8]
        push edx
        push 0xD
        call public_6eeba50
        mov eax, dword ptr ds : [public_6fbbbb8]
        push eax
        push 0xE
        call public_6eeba50
        mov ecx, dword ptr ds : [public_6fbbbb8]
        push ecx
        push 0xF
        call public_6eeba50
        mov edx, dword ptr ds : [public_6fbbbb8]
        push edx
        push 0x10
        call public_6eeba50
        add esp, 0x40
        push 6
        call public_6eebbb0
        push 6
        call public_6eebc60
        push 7
        call public_6eebbb0
        push 7
        call public_6eebc60
        push 8
        call public_6eebbb0
        push 8
        call public_6eebc60
        push 0xA
        call public_6eebbb0
        push 0xA
        call public_6eebc60
        push 0xB
        call public_6eebbb0
        push 0xB
        call public_6eebc60
        push 0xD
        call public_6eebbb0
        push 0xD
        call public_6eebc60
        push 0xE
        call public_6eebbb0
        push 0xE
        call public_6eebc60
        push 0xF
        call public_6eebbb0
        push 0xF
        call public_6eebc60
        add esp, 0x40
        push 0x10
        call public_6eebbb0
        push 0x10
        call public_6eebc60
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f5cda0)
    }
}
