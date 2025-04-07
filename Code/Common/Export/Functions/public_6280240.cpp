#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280240);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392e2b);

#define public_6280275 _public_6280275

PROC_DECLARE(0x6280240, internal_6280240, public_6280240);
extern "C" NAKED register_t __cdecl internal_6280240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392e2b @0x6280242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392e2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6280275
        push eax
        call public_6343ff0
        add esp, 4
        public_6280275 : nop
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6280240)
    }
}

#undef public_6280275
