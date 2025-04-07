#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3274f _public_6f3274f
#define public_6f32768 _public_6f32768

PROC_DECLARE(0x6f32740, internal_6f32740, public_6f32740);
extern "C" NAKED register_t __cdecl internal_6f32740()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f3274f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f3274f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f32768
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_6f57e26
        add esp, 4
        xor eax, eax
        public_6f32768 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f32740)
    }
}

#undef public_6f3274f
#undef public_6f32768
