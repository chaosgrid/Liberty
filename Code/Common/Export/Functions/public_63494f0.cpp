#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63470e0);
CLANG_FORWARD_PROC_SYMBOL(public_63494f0);

#define public_63494fd _public_63494fd
#define public_634950b _public_634950b

PROC_DECLARE(0x63494f0, internal_63494f0, public_63494f0);
extern "C" NAKED register_t __cdecl internal_63494f0()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0xE]
        dec esi
        js public_634950b
        public_63494fd : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_63470e0
        dec esi
        jns public_63494fd
        public_634950b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63494f0)
    }
}

#undef public_63494fd
#undef public_634950b
