#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_5a1d40);

#define public_599d93 _public_599d93

PROC_DECLARE(0x599ce0, internal_599ce0, public_599ce0);
extern "C" NAKED register_t __cdecl internal_599ce0()
{
    __asm
    {
        mov al, byte ptr ds : [public_67dbc4]
        sub esp, 8
        test al, al
        push esi
        mov esi, ecx
        je public_599d93
        fld dword ptr ds : [esi+0xEC]
        push ebx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xF0]
        push edi
        lea eax, ds:[esi+0x3C]
        push eax
        fchs 
/*FIXUP push offset public_67dbf8 @0x599d0b*/
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
        public_599d93 : nop
        mov ecx, esi
        pop esi
        add esp, 8
        jmp public_5a1d40
        UNREACHABLE_TRAP(0x599ce0)
    }
}

#undef public_599d93
