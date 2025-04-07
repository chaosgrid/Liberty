#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6286c80);
CLANG_FORWARD_PROC_SYMBOL(public_62adc40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6286cd3 _public_6286cd3
#define public_6286cdb _public_6286cdb
#define public_6286cf5 _public_6286cf5

PROC_DECLARE(0x6286ca0, internal_6286ca0, public_6286ca0);
extern "C" NAKED register_t __cdecl internal_6286ca0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6286cdb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6286c80 @0x6286cb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6286c80
        lea edi, ds:[esi-4]
        push eax
        push 0x120
        push esi
        call public_6391dfc
        test bl, 1
        je public_6286cd3
        push edi
        call public_6391d5a
        add esp, 4
        public_6286cd3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6286cdb : nop
        mov ecx, esi
        call public_6286c80
        test bl, 1
        je public_6286cf5
        push 0x120
        push esi
        call public_62adc40
        add esp, 8
        public_6286cf5 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6286ca0)
    }
}

#undef public_6286cd3
#undef public_6286cdb
#undef public_6286cf5
