#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_556f20);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_556f4b _public_556f4b

PROC_DECLARE(0x556f20, internal_556f20, public_556f20);
extern "C" NAKED register_t __cdecl internal_556f20()
{
    __asm
    {
        push ecx
        push 0x18
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_556f4b
        mov al, 0xFF
        mov byte ptr ss : [esp], al
        mov byte ptr ss : [esp+1], al
        mov byte ptr ss : [esp+2], al
        lea eax, ss:[esp]
        push eax
        call public_410240
        add esp, 8
        ret 
        public_556f4b : nop
        fld dword ptr ss : [esp+8]
        sub esp, 8
        fmul qword ptr ds : [public_5c89c0]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+8], al
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5c89c0]
        mov byte ptr ss : [esp+9], al
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov byte ptr ss : [esp+2], al
        lea eax, ss:[esp]
        push eax
        call public_410240
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x556f20)
    }
}

#undef public_556f4b
