#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0300);

#define public_6fa0310 _public_6fa0310
#define public_6fa0322 _public_6fa0322

PROC_DECLARE(0x6fa0300, internal_6fa0300, public_6fa0300);
extern "C" NAKED register_t __cdecl internal_6fa0300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6fa0322
        mov edi, edi
        public_6fa0310 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0xF0
        cmp esi, edi
        jne public_6fa0310
        public_6fa0322 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6fa0300)
    }
}

#undef public_6fa0310
#undef public_6fa0322
