#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aa10);
CLANG_FORWARD_PROC_SYMBOL(public_635aa20);

#define public_635aa2d _public_635aa2d

PROC_DECLARE(0x635aa20, internal_635aa20, public_635aa20);
extern "C" NAKED register_t __cdecl internal_635aa20()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea esi, ds:[ebx+4]
        mov edi, 3
        public_635aa2d : nop
        mov ecx, esi
        call public_635aa10
        add esi, 4
        dec edi
        jne public_635aa2d
        xor eax, eax
        mov ecx, ebx
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        pop edi
        mov dword ptr ds : [ecx+0xC], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x635aa20)
    }
}

#undef public_635aa2d
