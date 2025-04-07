#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67111c0);
CLANG_FORWARD_PROC_SYMBOL(public_6711480);
CLANG_FORWARD_PROC_SYMBOL(public_67123d0);
CLANG_FORWARD_PROC_SYMBOL(public_67126b0);
CLANG_FORWARD_PROC_SYMBOL(public_6712db0);
CLANG_FORWARD_PROC_SYMBOL(public_6712ef0);
CLANG_FORWARD_PROC_SYMBOL(public_67169dc);
CLANG_FORWARD_JUMP_SYMBOL(public_6716ce8);

#define public_6712d68 _public_6712d68
#define public_6712d6a _public_6712d6a
#define public_6712d8b _public_6712d8b
#define public_6712d9c _public_6712d9c

PROC_DECLARE(0x6712d20, internal_6712d20, public_6712d20);
extern "C" NAKED register_t __cdecl internal_6712d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6716ce8 @0x6712d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6716ce8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        call public_67126b0
        push 0x5C
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ds : [esi], offset public_67171b4
        call public_67169dc
        add esp, 4
        test eax, eax
        je public_6712d68
        push esi
        mov ecx, eax
        call public_67123d0
        jmp public_6712d6a
        public_6712d68 : nop
        xor eax, eax
        public_6712d6a : nop
        push edi
        mov dword ptr ds : [esi+0x90], eax
        call public_67111c0
        mov edi, eax
        test edi, edi
        je public_6712d8b
        mov ecx, esi
        call public_6712db0
        push esi
        mov ecx, edi
        call public_6711480
        public_6712d8b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        test eax, eax
        je public_6712d9c
        push eax
        mov ecx, esi
        call public_6712ef0
        public_6712d9c : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6712d20)
    }
}

#undef public_6712d68
#undef public_6712d6a
#undef public_6712d8b
#undef public_6712d9c
