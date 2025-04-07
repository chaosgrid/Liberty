#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2988);

#define public_6da2213 _public_6da2213

PROC_DECLARE(0x6da21d0, internal_6da21d0, public_6da21d0);
extern "C" NAKED register_t __cdecl internal_6da21d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2988 @0x6da21d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2988
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ds : [edi], offset public_6db5e54
        mov esi, dword ptr ds : [edi+0x20]
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6da2213
        mov ecx, esi
        call public_6d91340
        push esi
        call public_6db1dc2
        add esp, 4
        public_6da2213 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6da1370
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6da21d0)
    }
}

#undef public_6da2213
