#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67153d0);
CLANG_FORWARD_PROC_SYMBOL(public_6715460);

#define public_67154b1 _public_67154b1

PROC_DECLARE(0x6715460, internal_6715460, public_6715460);
extern "C" NAKED register_t __cdecl internal_6715460()
{
    __asm
    {
        mov cl, byte ptr ds : [public_671cfba]
        xor eax, eax
        cmp cl, al
        push esi
        je public_67154b1
        mov esi, dword ptr ss : [esp+8]
        cmp esi, eax
        je public_67154b1
        push edi
        mov ecx, 0xF
        mov edi, offset public_6719068
        rep movsd
        pop edi
        mov byte ptr ds : [public_671906b], al
        mov byte ptr ds : [public_671906f], al
        mov byte ptr ds : [public_6719073], al
        mov byte ptr ds : [public_671908b], al
        mov byte ptr ds : [public_671908f], al
        mov byte ptr ds : [public_6719093], al
        mov byte ptr ds : [public_6719097], al
        mov byte ptr ds : [public_671909b], al
        pop esi
        jmp public_67153d0
        public_67154b1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6715460)
    }
}

#undef public_67154b1
