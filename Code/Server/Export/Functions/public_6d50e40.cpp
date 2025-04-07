#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d50e90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6d50e6b _public_6d50e6b

PROC_DECLARE(0x6d50e40, internal_6d50e40, public_6d50e40);
extern "C" NAKED register_t __cdecl internal_6d50e40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d50e6b
        mov ecx, dword ptr ds : [eax-4]
        push edi
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_6d50e90 @0x6d50e50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d50e90
        push ecx
        push 0x418
        push eax
        call public_6d6001e
        push edi
        call public_6d5ffb0
        add esp, 4
        pop edi
        public_6d50e6b : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d50e40)
    }
}

#undef public_6d50e6b
