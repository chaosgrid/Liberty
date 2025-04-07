#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f68270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);

#define public_6f682a5 _public_6f682a5
#define public_6f682b2 _public_6f682b2

PROC_DECLARE(0x6f68270, internal_6f68270, public_6f68270);
extern "C" NAKED register_t __cdecl internal_6f68270()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call public_6eea860
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_6f73930
        mov ecx, eax
        test ecx, ecx
        je public_6f682b2
        mov eax, dword ptr ds : [ecx+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f682a5
        cmp eax, dword ptr ds : [esi+0x154]
        jne public_6f682a5
        mov al, 1
        pop esi
        ret 
        public_6f682a5 : nop
        mov eax, dword ptr ds : [esi+4]
        sub eax, dword ptr ds : [ecx+4]
        neg eax
        sbb eax, eax
        inc eax
        pop esi
        ret 
        public_6f682b2 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f68270)
    }
}

#undef public_6f682a5
#undef public_6f682b2
