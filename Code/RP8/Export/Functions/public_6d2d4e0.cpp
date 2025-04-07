#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2d4e0);

#define public_6d2d4fb _public_6d2d4fb
#define public_6d2d50d _public_6d2d50d

PROC_DECLARE(0x6d2d4e0, internal_6d2d4e0, public_6d2d4e0);
extern "C" NAKED register_t __cdecl internal_6d2d4e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2d4fb
        mov dword ptr ss : [ebp-8], 0
        jmp public_6d2d50d
        public_6d2d4fb : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ds : [edx+4]
        sar eax, 2
        mov dword ptr ss : [ebp-8], eax
        public_6d2d50d : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2d4e0)
    }
}

#undef public_6d2d4fb
#undef public_6d2d50d
