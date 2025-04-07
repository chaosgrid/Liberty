#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806870);
CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807020);
CLANG_FORWARD_PROC_SYMBOL(public_68072a0);
CLANG_FORWARD_PROC_SYMBOL(public_6807ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6808480);
CLANG_FORWARD_PROC_SYMBOL(public_6808540);
CLANG_FORWARD_PROC_SYMBOL(public_6808a30);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_68084b6 _public_68084b6
#define public_68084cb _public_68084cb
#define public_68084d6 _public_68084d6
#define public_680850b _public_680850b

PROC_DECLARE(0x6808480, internal_6808480, public_6808480);
extern "C" NAKED register_t __cdecl internal_6808480()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x28
        mov ebp, dword ptr ds : [esi+8]
        mov ebx, 1
        je public_68084d6
        cmp eax, 0x7B
        je public_68084cb
        cmp eax, 0x11C
        je public_68084b6
/*FIXUP push offset public_680dcf0 @0x68084a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dcf0
        push esi
        call public_680a850
        add esp, 8
        jmp public_680850b
        public_68084b6 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        push esi
        call public_6807ff0
        push esi
        call public_6806a20
        add esp, 0xC
        jmp public_680850b
        public_68084cb : nop
        push esi
        call public_6808a30
        add esp, 4
        jmp public_680850b
        public_68084d6 : nop
        push edi
        mov edi, dword ptr ds : [esi+0x1C]
        push esi
        call public_6806a20
        lea ecx, ss:[esp+0x14]
        push ecx
        push esi
        call public_6808540
        push edi
        push 0x28
        push 0x29
        push esi
        call public_68072a0
        mov edx, dword ptr ss : [esp+0x30]
        push 1
        push edx
        push esi
        call public_6807020
        mov ebx, dword ptr ss : [esp+0x38]
        add esp, 0x28
        pop edi
        public_680850b : nop
        push 2
        push ebp
        call public_6806870
        push 0
        push ebp
        call public_6806870
        xor eax, eax
        mov al, byte ptr ss : [esp+0x2C]
        add al, bl
        push eax
        push ebp
        call public_6806870
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x18
        pop esi
        pop ebp
        dec eax
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6808480)
    }
}

#undef public_68084b6
#undef public_68084cb
#undef public_68084d6
#undef public_680850b
