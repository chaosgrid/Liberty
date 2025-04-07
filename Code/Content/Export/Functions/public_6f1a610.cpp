#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a610);

#define public_6f1a627 _public_6f1a627

PROC_DECLARE(0x6f1a610, internal_6f1a610, public_6f1a610);
extern "C" NAKED register_t __cdecl internal_6f1a610()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f1a627
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_6f1a627 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f1a610)
    }
}

#undef public_6f1a627
