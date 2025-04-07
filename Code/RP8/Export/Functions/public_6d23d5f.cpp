#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23cc9);
CLANG_FORWARD_PROC_SYMBOL(public_6d23d5f);

#define public_6d23d7e _public_6d23d7e
#define public_6d23d97 _public_6d23d97

PROC_DECLARE(0x6d23d5f, internal_6d23d5f, public_6d23d5f);
extern "C" NAKED register_t __cdecl internal_6d23d5f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov ecx, dword ptr ss : [ebp-8]
        call public_6d23cc9
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0xFFFFFFFF
        jne public_6d23d7e
        mov eax, dword ptr ss : [ebp-4]
        jmp public_6d23d97
        public_6d23d7e : nop
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0xFF00
        shr eax, 8
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xFF
        shl ecx, 8
        add eax, ecx
        public_6d23d97 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d23d5f)
    }
}

#undef public_6d23d7e
#undef public_6d23d97
