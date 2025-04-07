#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6300bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6301100);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395f8b);

#define public_6301145 _public_6301145
#define public_6301147 _public_6301147
#define public_6301154 _public_6301154

PROC_DECLARE(0x6301100, internal_6301100, public_6301100);
extern "C" NAKED register_t __cdecl internal_6301100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395f8b @0x6301102*/
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
        jne public_6301154
        push 0xA8
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_6301145
        mov ecx, eax
        call public_62ff4a0
        jmp public_6301147
        public_6301145 : nop
        xor eax, eax
        public_6301147 : nop
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov dword ptr ds : [public_63fcc54], eax
        public_6301154 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_6300bf0
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6301100)
    }
}

#undef public_6301145
#undef public_6301147
#undef public_6301154
