#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527820);

#define public_527831 _public_527831
#define public_527840 _public_527840

PROC_DECLARE(0x527820, internal_527820, public_527820);
extern "C" NAKED register_t __cdecl internal_527820()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_527840
        push esi
        public_527831 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_527831
        pop esi
        public_527840 : nop
        ret 
        UNREACHABLE_TRAP(0x527820)
    }
}

#undef public_527831
#undef public_527840
