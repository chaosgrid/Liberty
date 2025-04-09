#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_59f120);

#define public_59ac92 _public_59ac92

PROC_DECLARE(0x59ab50, internal_59ab50, public_59ab50);
extern "C" NAKED register_t __cdecl internal_59ab50()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [esi+0xEC]
        mov edx, dword ptr ds : [esi+0xE8]
        mov dword ptr ss : [esp+0x40], eax
        mov al, byte ptr ds : [public_67dbc4]
        test al, al
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        je public_59ac92
        fld dword ptr ds : [esi+0xF4]
        push ebx
        fsub dword ptr ds : [esi+0xE8]
        push ebp
        push edi
        lea eax, ss:[esp+0x20]
        fadd dword ptr ss : [esp+0x14]
        push eax
/*FIXUP push offset public_67dbf8 @0x59abf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xEC]
        fsub dword ptr ds : [esi+0xF8]
        fsubr dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x24]
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
        mov edi, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x3C]
        push 0
        push edi
        push ebx
        call public_421cc0
        push 0
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        push edi
        call public_421cc0
        mov ebp, dword ptr ss : [esp+0x5C]
        add esp, 0x40
        push 0
        push ebp
        push edi
        call public_421cc0
        push 0
        push ebp
        push ebx
        call public_421cc0
        add esp, 0x18
        call public_421690
        pop edi
        pop ebp
        pop ebx
        public_59ac92 : nop
        mov ecx, esi
        call public_59f120
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x59ab50)
    }
}

#undef public_59ac92
