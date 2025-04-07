#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6369170);

#define public_636917d _public_636917d
#define public_636918b _public_636918b

PROC_DECLARE(0x6369170, internal_6369170, public_6369170);
extern "C" NAKED register_t __cdecl internal_6369170()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x2E]
        dec esi
        js public_636918b
        public_636917d : nop
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_6346dd0
        dec esi
        jns public_636917d
        public_636918b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6369170)
    }
}

#undef public_636917d
#undef public_636918b
