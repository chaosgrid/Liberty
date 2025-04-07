#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);

#define public_6d23e51 _public_6d23e51
#define public_6d23e59 _public_6d23e59
#define public_6d23e64 _public_6d23e64

PROC_DECLARE(0x6d23e40, internal_6d23e40, public_6d23e40);
extern "C" NAKED register_t __cdecl internal_6d23e40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d23e64
        push esi
        public_6d23e51 : nop
        test eax, eax
        je public_6d23e59
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6d23e59 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6d23e51
        pop esi
        public_6d23e64 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d23e40)
    }
}

#undef public_6d23e51
#undef public_6d23e59
#undef public_6d23e64
