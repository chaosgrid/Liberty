#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3c80);

#define public_6fa3c93 _public_6fa3c93
#define public_6fa3c9b _public_6fa3c9b
#define public_6fa3ca0 _public_6fa3ca0

PROC_DECLARE(0x6fa3c80, internal_6fa3c80, public_6fa3c80);
extern "C" NAKED register_t __cdecl internal_6fa3c80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6fa3ca0
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+8]
        public_6fa3c93 : nop
        test eax, eax
        je public_6fa3c9b
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        public_6fa3c9b : nop
        inc eax
        dec ecx
        jne public_6fa3c93
        pop esi
        public_6fa3ca0 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6fa3c80)
    }
}

#undef public_6fa3c93
#undef public_6fa3c9b
#undef public_6fa3ca0
