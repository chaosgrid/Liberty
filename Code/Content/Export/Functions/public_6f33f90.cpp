#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57820);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c20);

#define public_6f33fc1 _public_6f33fc1

PROC_DECLARE(0x6f33f90, internal_6f33f90, public_6f33f90);
extern "C" NAKED register_t __cdecl internal_6f33f90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        mov esi, ecx
        call public_6f57820
        lea ecx, ds:[esi-0x118]
        call public_6f57c20
        test al, al
        je public_6f33fc1
        mov ecx, dword ptr ds : [esi+0x60]
        test ecx, ecx
        je public_6f33fc1
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax+0x18]
        public_6f33fc1 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f33f90)
    }
}

#undef public_6f33fc1
