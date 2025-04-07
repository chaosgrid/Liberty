#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9196);

#define public_6ad91b2 _public_6ad91b2
#define public_6ad91bd _public_6ad91bd

PROC_DECLARE(0x6ad9196, internal_6ad9196, public_6ad9196);
extern "C" NAKED register_t __cdecl internal_6ad9196()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 1
        je public_6ad91b2
        jle public_6ad91bd
        cmp eax, 3
        jg public_6ad91bd
        call public_6ad24de
        mov dword ptr ds : [eax], 0x22
        ret 
        public_6ad91b2 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 0x21
        public_6ad91bd : nop
        ret 
        UNREACHABLE_TRAP(0x6ad9196)
    }
}

#undef public_6ad91b2
#undef public_6ad91bd
