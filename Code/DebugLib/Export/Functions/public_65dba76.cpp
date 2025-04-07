#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dba76);
CLANG_FORWARD_PROC_SYMBOL(public_65dbaaf);

#define public_65dba8d _public_65dba8d
#define public_65dbaa3 _public_65dbaa3
#define public_65dbaae _public_65dbaae

PROC_DECLARE(0x65dba76, internal_65dba76, public_65dba76);
extern "C" NAKED register_t __cdecl internal_65dba76()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e612c]
        cmp eax, 1
        je public_65dba8d
        test eax, eax
        jne public_65dbaae
        cmp dword ptr ds : [public_65e6130], 1
        jne public_65dbaae
        public_65dba8d : nop
        push 0xFC
        call public_65dbaaf
        mov eax, dword ptr ds : [public_65e6364]
        pop ecx
        test eax, eax
        je public_65dbaa3
        call eax
        public_65dbaa3 : nop
        push 0xFF
        call public_65dbaaf
        pop ecx
        public_65dbaae : nop
        ret 
        UNREACHABLE_TRAP(0x65dba76)
    }
}

#undef public_65dba8d
#undef public_65dbaa3
#undef public_65dbaae
