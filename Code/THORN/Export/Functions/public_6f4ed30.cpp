#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ed30);

#define public_6f4ed55 _public_6f4ed55
#define public_6f4ed66 _public_6f4ed66

PROC_DECLARE(0x6f4ed30, internal_6f4ed30, public_6f4ed30);
extern "C" NAKED register_t __cdecl internal_6f4ed30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f4ed66
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        mov dword ptr ds : [ecx+4], 1
        jl public_6f4ed66
        push esi
        inc eax
        mov esi, eax
        shl esi, 4
        push edi
        add esi, ecx
        mov edi, eax
        public_6f4ed55 : nop
        push esi
        call public_6f4ec60
        add esp, 4
        sub esi, 0x10
        dec edi
        jne public_6f4ed55
        pop edi
        pop esi
        public_6f4ed66 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4ed30)
    }
}

#undef public_6f4ed55
#undef public_6f4ed66
