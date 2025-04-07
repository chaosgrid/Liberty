#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ca30);
CLANG_FORWARD_PROC_SYMBOL(public_636cc00);
CLANG_FORWARD_PROC_SYMBOL(public_636cf70);

#define public_636cf86 _public_636cf86

PROC_DECLARE(0x636cf70, internal_636cf70, public_636cf70);
extern "C" NAKED register_t __cdecl internal_636cf70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_636ca30
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_636cf86
        mov ecx, esi
        call public_636cc00
        public_636cf86 : nop
        mov eax, dword ptr ds : [esi+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636cf70)
    }
}

#undef public_636cf86
