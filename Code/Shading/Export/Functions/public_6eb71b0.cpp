#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb71b0);

#define public_6eb71c5 _public_6eb71c5
#define public_6eb71e0 _public_6eb71e0

PROC_DECLARE(0x6eb71b0, internal_6eb71b0, public_6eb71b0);
extern "C" NAKED register_t __cdecl internal_6eb71b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6eb71e0
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6eb71c5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb71c5
        pop edi
        pop ebx
        public_6eb71e0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb71b0)
    }
}

#undef public_6eb71c5
#undef public_6eb71e0
