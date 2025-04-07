#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23120);

#define public_6f23134 _public_6f23134
#define public_6f23144 _public_6f23144

PROC_DECLARE(0x6f23120, internal_6f23120, public_6f23120);
extern "C" NAKED register_t __cdecl internal_6f23120()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f23134
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_6f23134 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        je public_6f23144
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f23144 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f23120)
    }
}

#undef public_6f23134
#undef public_6f23144
