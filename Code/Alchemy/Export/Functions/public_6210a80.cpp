#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210a80);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247cdb);

#define public_6210ab9 _public_6210ab9
#define public_6210acb _public_6210acb

PROC_DECLARE(0x6210a80, internal_6210a80, public_6210a80);
extern "C" NAKED register_t __cdecl internal_6210a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247cdb @0x6210a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247cdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [esi], offset public_624bb10
        jg public_6210ab9
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+4], ecx
        jmp public_6210acb
        public_6210ab9 : nop
        mov dword ptr ds : [esi+0x10], eax
        shl eax, 3
        push eax
        call public_624612c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        public_6210acb : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6210a80)
    }
}

#undef public_6210ab9
#undef public_6210acb
