#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_62fbeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);

#define public_62fbf33 _public_62fbf33
#define public_62fbf3d _public_62fbf3d
#define public_62fbf5a _public_62fbf5a
#define public_62fbf63 _public_62fbf63
#define public_62fbf88 _public_62fbf88

PROC_DECLARE(0x62fbeb0, internal_62fbeb0, public_62fbeb0);
extern "C" NAKED register_t __cdecl internal_62fbeb0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_62fbf63
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+4]
        mov dword ptr ss : [esp+8], edx
        push eax
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xC], esi
        call public_63222f0
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        je public_62fbf88
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_63fcb0c
        call public_6301640
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [public_63fcb10]
        jne public_62fbf5a
        mov ecx, dword ptr ds : [public_63fcb04]
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ecx
        mov ecx, offset public_63fcafc
        call public_628e250
        mov ecx, dword ptr ds : [public_63fcb00]
        test ecx, ecx
        jne public_62fbf33
        xor eax, eax
        jmp public_62fbf3d
        public_62fbf33 : nop
        mov eax, dword ptr ds : [public_63fcb04]
        sub eax, ecx
        sar eax, 2
        public_62fbf3d : nop
        lea edx, ss:[esp+4]
        mov word ptr ss : [esp+8], ax
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fcb0c
        mov dword ptr ss : [esp+0xC], esi
        call public_63222f0
        public_62fbf5a : nop
        mov al, 1
        pop esi
        add esp, 0x10
        ret 0xC
        public_62fbf63 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x84
/*FIXUP push offset public_63a123c @0x62fbf73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a14d8 @0x62fbf7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14d8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_62fbf88 : nop
        xor al, al
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62fbeb0)
    }
}

#undef public_62fbf33
#undef public_62fbf3d
#undef public_62fbf5a
#undef public_62fbf63
#undef public_62fbf88
