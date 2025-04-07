#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efab07);

#define public_6efab17 _public_6efab17
#define public_6efab24 _public_6efab24
#define public_6efab2f _public_6efab2f

PROC_DECLARE(0x6efab07, internal_6efab07, public_6efab07);
extern "C" NAKED register_t __cdecl internal_6efab07()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        lea ecx, ds:[edx-1]
        je public_6efab24
        public_6efab17 : nop
        cmp byte ptr ds : [eax], 0
        je public_6efab24
        inc eax
        mov esi, ecx
        dec ecx
        test esi, esi
        jne public_6efab17
        public_6efab24 : nop
        cmp byte ptr ds : [eax], 0
        pop esi
        jne public_6efab2f
        sub eax, dword ptr ss : [esp+4]
        ret 
        public_6efab2f : nop
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6efab07)
    }
}

#undef public_6efab17
#undef public_6efab24
#undef public_6efab2f
