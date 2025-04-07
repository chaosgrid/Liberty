#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_62fbbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);

#define public_62fbc62 _public_62fbc62
#define public_62fbc6c _public_62fbc6c
#define public_62fbc8d _public_62fbc8d
#define public_62fbc95 _public_62fbc95
#define public_62fbcb9 _public_62fbcb9

PROC_DECLARE(0x62fbbe0, internal_62fbbe0, public_62fbbe0);
extern "C" NAKED register_t __cdecl internal_62fbbe0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_62fbc95
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        lea eax, ss:[esp]
        mov dword ptr ss : [esp+4], edx
        push eax
        lea edx, ss:[esp+0xC]
        push edx
        call public_63222f0
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        je public_62fbcb9
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_63fcb0c
        call public_6301640
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [public_63fcb10]
        jne public_62fbc8d
        mov ecx, dword ptr ds : [public_63fcb04]
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        mov ecx, offset public_63fcafc
        call public_628e250
        mov ecx, dword ptr ds : [public_63fcb00]
        test ecx, ecx
        jne public_62fbc62
        xor eax, eax
        jmp public_62fbc6c
        public_62fbc62 : nop
        mov eax, dword ptr ds : [public_63fcb04]
        sub eax, ecx
        sar eax, 2
        public_62fbc6c : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov word ptr ss : [esp+4], ax
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fcb0c
        mov dword ptr ss : [esp+8], edx
        call public_63222f0
        public_62fbc8d : nop
        mov al, 1
        add esp, 0x10
        ret 0xC
        public_62fbc95 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push 0x84
/*FIXUP push offset public_63a123c @0x62fbc9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a14d8 @0x62fbca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14d8
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62fbcb9 : nop
        xor al, al
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62fbbe0)
    }
}

#undef public_62fbc62
#undef public_62fbc6c
#undef public_62fbc8d
#undef public_62fbc95
#undef public_62fbcb9
