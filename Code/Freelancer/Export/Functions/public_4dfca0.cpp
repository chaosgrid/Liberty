#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4dfca0);

PROC_DECLARE(0x4dfca0, internal_4dfca0, public_4dfca0);
extern "C" NAKED register_t __cdecl internal_4dfca0()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ss : [esp+0x14]
        push esi
        fmul dword ptr ds : [ecx+0x14]
        push 2
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+0x18]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+0x1C]
        fadd st(0), st
        fstp dword ptr ss : [esp+0xC]
        call public_421670
        mov esi, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+4]
        add esp, 4
        fsub dword ptr ss : [esp+0x18]
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        fsub dword ptr ss : [esp+0x18]
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        fsub dword ptr ss : [esp+0x18]
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x24]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x18]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        fsub dword ptr ss : [esp+0x10]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x18]
        fchs 
        add esp, 0xC
        fstp dword ptr ss : [esp+0x14]
        push 0
        fld dword ptr ss : [esp+0x1C]
        sub esp, 8
        fadd dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fsub dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x20]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x20]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x18]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x18]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+4]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        call public_421690
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4dfca0)
    }
}
