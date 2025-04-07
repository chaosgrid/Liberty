#include "Common-PCH.h"


#define public_62f1ed7 _public_62f1ed7
#define public_62f1ee0 _public_62f1ee0
#define public_62f1ee2 _public_62f1ee2
#define public_62f1ef1 _public_62f1ef1

PROC_DECLARE(0x62f1ed0, internal_62f1ed0, public_62f1ed0);
extern "C" NAKED register_t __cdecl internal_62f1ed0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        xor eax, eax
        public_62f1ed7 : nop
        test eax, eax
        jne public_62f1ee0
        mov eax, dword ptr ds : [ecx+0x5C]
        jmp public_62f1ee2
        public_62f1ee0 : nop
        mov eax, dword ptr ds : [eax]
        public_62f1ee2 : nop
        test eax, eax
        je public_62f1ef1
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [edx]
        jne public_62f1ed7
        pop esi
        ret 4
        public_62f1ef1 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f1ed0)
    }
}

#undef public_62f1ed7
#undef public_62f1ee0
#undef public_62f1ee2
#undef public_62f1ef1
