#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7180);

#define public_6eb7190 _public_6eb7190
#define public_6eb71a9 _public_6eb71a9

PROC_DECLARE(0x6eb7180, internal_6eb7180, public_6eb7180);
extern "C" NAKED register_t __cdecl internal_6eb7180()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6eb71a9
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_6eb7190 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb7190
        pop edi
        public_6eb71a9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb7180)
    }
}

#undef public_6eb7190
#undef public_6eb71a9
