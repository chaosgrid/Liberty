#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355ca0);

#define public_6355cac _public_6355cac
#define public_6355cba _public_6355cba

PROC_DECLARE(0x6355ca0, internal_6355ca0, public_6355ca0);
extern "C" NAKED register_t __cdecl internal_6355ca0()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+0x36]
        dec eax
        js public_6355cba
        push esi
        xor edx, edx
        public_6355cac : nop
        dec eax
        mov esi, dword ptr ds : [ecx+0x38]
        mov esi, dword ptr ds : [esi+eax*4+4]
        mov dword ptr ds : [esi+0x24], edx
        jns public_6355cac
        pop esi
        public_6355cba : nop
        ret 
        UNREACHABLE_TRAP(0x6355ca0)
    }
}

#undef public_6355cac
#undef public_6355cba
