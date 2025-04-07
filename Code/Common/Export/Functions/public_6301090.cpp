#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6300570);
CLANG_FORWARD_PROC_SYMBOL(public_6301090);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395f8b);

#define public_63010d5 _public_63010d5
#define public_63010d7 _public_63010d7
#define public_63010e4 _public_63010e4

PROC_DECLARE(0x6301090, internal_6301090, public_6301090);
extern "C" NAKED register_t __cdecl internal_6301090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395f8b @0x6301092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395f8b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_63fcc54]
        test eax, eax
        jne public_63010e4
        push 0xA8
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_63010d5
        mov ecx, eax
        call public_62ff4a0
        jmp public_63010d7
        public_63010d5 : nop
        xor eax, eax
        public_63010d7 : nop
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov dword ptr ds : [public_63fcc54], eax
        public_63010e4 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_6300570
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6301090)
    }
}

#undef public_63010d5
#undef public_63010d7
#undef public_63010e4
