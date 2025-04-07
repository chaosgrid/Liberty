#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_6244b20);
CLANG_FORWARD_JUMP_SYMBOL(public_6249b28);

PROC_DECLARE(0x6232950, internal_6232950, public_6232950);
extern "C" NAKED register_t __cdecl internal_6232950()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249b28 @0x6232952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249b28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        call public_6244360
        xor edi, edi
        lea ecx, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x14], edi
        call public_6244b20
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xD8], edi
        mov dword ptr ds : [esi+0xDC], edi
        mov dword ptr ds : [esi+0xE0], edi
        mov dword ptr ds : [esi+0xE4], edi
        mov dword ptr ds : [esi+0xE8], edi
        mov dword ptr ds : [esi+0xEC], edi
        mov dword ptr ds : [esi], offset public_624e8b0
        mov dword ptr ds : [esi+0xE0], offset public_6257b14
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6232950)
    }
}
