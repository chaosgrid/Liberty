#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f76350);

#define public_6f76360 _public_6f76360
#define public_6f76377 _public_6f76377

PROC_DECLARE(0x6f76350, internal_6f76350, public_6f76350);
extern "C" NAKED register_t __cdecl internal_6f76350()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6fd3a60]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], ecx
        lea esp, ss:[esp]
        public_6f76360 : nop
        mov edx, dword ptr ds : [public_6fd3a60]
        cmp dword ptr ss : [esp], edx
        je public_6f76377
        lea ecx, ss:[esp]
        call public_6f24610
        jmp public_6f76360
        public_6f76377 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f76350)
    }
}

#undef public_6f76360
#undef public_6f76377
