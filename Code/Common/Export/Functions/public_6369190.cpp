#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346960);
CLANG_FORWARD_PROC_SYMBOL(public_6369190);

#define public_636919d _public_636919d
#define public_63691ab _public_63691ab

PROC_DECLARE(0x6369190, internal_6369190, public_6369190);
extern "C" NAKED register_t __cdecl internal_6369190()
{
    __asm
    {
        push esi
        push edi
        xor esi, esi
        mov edi, ecx
        mov si, word ptr ds : [edi+0x2E]
        dec esi
        js public_63691ab
        public_636919d : nop
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_6346960
        dec esi
        jns public_636919d
        public_63691ab : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6369190)
    }
}

#undef public_636919d
#undef public_63691ab
