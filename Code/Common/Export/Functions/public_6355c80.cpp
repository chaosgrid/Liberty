#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355c80);
CLANG_FORWARD_PROC_SYMBOL(public_6355cc0);

#define public_6355c8d _public_6355c8d
#define public_6355c9b _public_6355c9b

PROC_DECLARE(0x6355c80, internal_6355c80, public_6355c80);
extern "C" NAKED register_t __cdecl internal_6355c80()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x36]
        dec esi
        js public_6355c9b
        public_6355c8d : nop
        mov eax, dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_6355cc0
        dec esi
        jns public_6355c8d
        public_6355c9b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6355c80)
    }
}

#undef public_6355c8d
#undef public_6355c9b
