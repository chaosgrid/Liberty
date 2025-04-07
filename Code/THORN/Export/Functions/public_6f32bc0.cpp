#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f32bcf _public_6f32bcf
#define public_6f32be8 _public_6f32be8

PROC_DECLARE(0x6f32bc0, internal_6f32bc0, public_6f32bc0);
extern "C" NAKED register_t __cdecl internal_6f32bc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f32bcf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f32bcf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f32be8
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6f57e26
        add esp, 4
        xor eax, eax
        public_6f32be8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f32bc0)
    }
}

#undef public_6f32bcf
#undef public_6f32be8
