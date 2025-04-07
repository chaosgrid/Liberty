#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ee90);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1eed8 _public_6d1eed8

PROC_DECLARE(0x6d1ee90, internal_6d1ee90, public_6d1ee90);
extern "C" NAKED register_t __cdecl internal_6d1ee90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp+8]
        and edx, 1
        test edx, edx
        je public_6d1eed8
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d1eed8 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1ee90)
    }
}

#undef public_6d1eed8
