#include "Common-PCH.h"


#define public_627d260 _public_627d260
#define public_627d26b _public_627d26b
#define public_627d270 _public_627d270

PROC_DECLARE(0x627d250, internal_627d250, public_627d250);
extern "C" NAKED register_t __cdecl internal_627d250()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x6C]
        cmp eax, ecx
        je public_627d26b
        mov edx, dword ptr ss : [esp+4]
        mov edi, edi
        public_627d260 : nop
        cmp dword ptr ds : [eax], edx
        je public_627d270
        add eax, 0xC
        cmp eax, ecx
        jne public_627d260
        public_627d26b : nop
        xor al, al
        ret 4
        public_627d270 : nop
        mov al, byte ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x627d250)
    }
}

#undef public_627d260
#undef public_627d26b
#undef public_627d270
