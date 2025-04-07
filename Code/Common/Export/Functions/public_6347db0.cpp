#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346170);
CLANG_FORWARD_PROC_SYMBOL(public_6347db0);

#define public_6347dbd _public_6347dbd
#define public_6347dcb _public_6347dcb

PROC_DECLARE(0x6347db0, internal_6347db0, public_6347db0);
extern "C" NAKED register_t __cdecl internal_6347db0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x52]
        dec esi
        js public_6347dcb
        public_6347dbd : nop
        mov eax, dword ptr ds : [edi+0x54]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_6346170
        dec esi
        jns public_6347dbd
        public_6347dcb : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6347db0)
    }
}

#undef public_6347dbd
#undef public_6347dcb
