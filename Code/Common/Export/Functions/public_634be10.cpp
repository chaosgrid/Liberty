#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bec0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397d1b);

#define public_634be7b _public_634be7b
#define public_634be93 _public_634be93

PROC_DECLARE(0x634be10, internal_634be10, public_634be10);
extern "C" NAKED register_t __cdecl internal_634be10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397d1b @0x634be12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397d1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov cl, byte ptr ds : [public_658a9f4]
        mov al, 1
        test al, cl
        jne public_634be93
        or cl, al
        push 0x1C
        mov byte ptr ds : [public_658a9f4], cl
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_634be7b
        push 0x3F000000
        push 0x3F000000
        mov ecx, eax
        call public_634bec0
        mov dword ptr ds : [public_658a9f0], eax
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_634be7b : nop
        xor eax, eax
        mov dword ptr ds : [public_658a9f0], eax
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_634be93 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_658a9f0]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x634be10)
    }
}

#undef public_634be7b
#undef public_634be93
