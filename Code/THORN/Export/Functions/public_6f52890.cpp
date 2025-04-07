#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52890);

#define public_6f528c0 _public_6f528c0
#define public_6f528c6 _public_6f528c6

PROC_DECLARE(0x6f52890, internal_6f52890, public_6f52890);
extern "C" NAKED register_t __cdecl internal_6f52890()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+0xC]
        add edx, eax
        mov eax, edx
        mov dword ptr ds : [esi+0xC], edx
        cmp eax, dword ptr ds : [esi+0x10]
        jle public_6f528c6
        cmp eax, 0xFF
        jle public_6f528c0
/*FIXUP push offset public_6f61210 @0x6f528b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61210
        push ecx
        call public_6f511c0
        add esp, 8
        public_6f528c0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x10], ecx
        public_6f528c6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52890)
    }
}

#undef public_6f528c0
#undef public_6f528c6
