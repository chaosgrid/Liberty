#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_5a2360);

#define public_59a753 _public_59a753

PROC_DECLARE(0x59a6a0, internal_59a6a0, public_59a6a0);
extern "C" NAKED register_t __cdecl internal_59a6a0()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dbc4]
        sub esp, 8
        test al, al
        push esi
        mov esi, ecx
        je public_59a753
        fld dword ptr ds : [esi+0x8B0]
        push ebx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x8B4]
        push edi
        lea eax, ds:[esi+0x3C]
        push eax
        fchs 
/*FIXUP push offset public_67dbf8 @0x59a6cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x18]
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        push 0xBE2
        call public_421ed0
        push 0
        push 0
        push 0xFF
        call public_421a70
        push 7
        call public_421670
        push 0
        push 0
        push 0
        call public_421cc0
        mov edi, dword ptr ss : [esp+0x40]
        push 0
        push 0
        push edi
        call public_421cc0
        mov ebx, dword ptr ss : [esp+0x50]
        add esp, 0x40
        push 0
        push ebx
        push edi
        call public_421cc0
        push 0
        push ebx
        push 0
        call public_421cc0
        add esp, 0x18
        call public_421690
        pop edi
        pop ebx
        public_59a753 : nop
        mov ecx, esi
        pop esi
        add esp, 8
        jmp public_5a2360
        UNREACHABLE_TRAP(0x59a6a0)
    }
}

#undef public_59a753
