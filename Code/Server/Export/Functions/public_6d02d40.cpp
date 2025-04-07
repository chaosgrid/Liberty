#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce9250);

#define public_6d02d58 _public_6d02d58
#define public_6d02d5a _public_6d02d5a
#define public_6d02d79 _public_6d02d79
#define public_6d02d82 _public_6d02d82

PROC_DECLARE(0x6d02d40, internal_6d02d40, public_6d02d40);
extern "C" NAKED register_t __cdecl internal_6d02d40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6d02d58
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_6d02d5a
        public_6d02d58 : nop
        xor eax, eax
        public_6d02d5a : nop
        mov dl, byte ptr ds : [eax+0x1A8]
        test dl, dl
        mov eax, dword ptr ss : [esp+4]
        jne public_6d02d79
        mov dx, word ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [public_6d6401c]
        cmp dx, word ptr ds : [esi]
        pop esi
        je public_6d02d82
        public_6d02d79 : nop
        mov dword ptr ss : [esp+4], eax
        jmp public_6ce9250
        public_6d02d82 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d02d40)
    }
}

#undef public_6d02d58
#undef public_6d02d5a
#undef public_6d02d79
#undef public_6d02d82
