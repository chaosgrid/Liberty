#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7dba);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7ddb);

#define public_6ad7e0d _public_6ad7e0d
#define public_6ad7e25 _public_6ad7e25

PROC_DECLARE(0x6ad7ddb, internal_6ad7ddb, public_6ad7ddb);
extern "C" NAKED register_t __cdecl internal_6ad7ddb()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push dword ptr ds : [edi]
        push dword ptr ds : [esi]
        call public_6ad7dba
        add esp, 0xC
        test eax, eax
        je public_6ad7e0d
        lea eax, ds:[esi+4]
        push eax
        push 1
        push dword ptr ds : [eax]
        call public_6ad7dba
        add esp, 0xC
        test eax, eax
        je public_6ad7e0d
        inc dword ptr ds : [esi+8]
        public_6ad7e0d : nop
        lea eax, ds:[esi+4]
        push eax
        push dword ptr ds : [edi+4]
        push dword ptr ds : [eax]
        call public_6ad7dba
        add esp, 0xC
        test eax, eax
        je public_6ad7e25
        inc dword ptr ds : [esi+8]
        public_6ad7e25 : nop
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [edi+8]
        push dword ptr ds : [eax]
        call public_6ad7dba
        add esp, 0xC
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad7ddb)
    }
}

#undef public_6ad7e0d
#undef public_6ad7e25
