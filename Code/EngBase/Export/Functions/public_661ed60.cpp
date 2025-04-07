#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ed60);

#define public_661ed6d _public_661ed6d
#define public_661ed76 _public_661ed76
#define public_661ed8b _public_661ed8b

PROC_DECLARE(0x661ed60, internal_661ed60, public_661ed60);
extern "C" NAKED register_t __cdecl internal_661ed60()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ss : [esp+4]
        test cl, cl
        jne public_661ed6d
        mov eax, dword ptr ds : [eax+0x10]
        public_661ed6d : nop
        test eax, eax
        je public_661ed8b
        mov ecx, 0xBF800000
        public_661ed76 : nop
        cmp dword ptr ds : [eax+0xD8], ecx
        je public_661ed8b
        mov dword ptr ds : [eax+0xD8], ecx
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_661ed76
        public_661ed8b : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x661ed60)
    }
}

#undef public_661ed6d
#undef public_661ed76
#undef public_661ed8b
