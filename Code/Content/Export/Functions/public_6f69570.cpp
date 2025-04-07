#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f69570);

#define public_6f69581 _public_6f69581
#define public_6f69589 _public_6f69589
#define public_6f6958f _public_6f6958f

PROC_DECLARE(0x6f69570, internal_6f69570, public_6f69570);
extern "C" NAKED register_t __cdecl internal_6f69570()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp ecx, esi
        je public_6f6958f
        public_6f69581 : nop
        test eax, eax
        je public_6f69589
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_6f69589 : nop
        inc eax
        inc ecx
        cmp ecx, esi
        jne public_6f69581
        public_6f6958f : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f69570)
    }
}

#undef public_6f69581
#undef public_6f69589
#undef public_6f6958f
