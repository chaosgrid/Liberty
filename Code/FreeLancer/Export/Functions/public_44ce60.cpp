#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ce60);

#define public_44ce70 _public_44ce70

PROC_DECLARE(0x44ce60, internal_44ce60, public_44ce60);
extern "C" NAKED register_t __cdecl internal_44ce60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_44ce70
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_44ce70 : nop
        ret 
        UNREACHABLE_TRAP(0x44ce60)
    }
}

#undef public_44ce70
