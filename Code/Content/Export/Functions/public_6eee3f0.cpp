#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eee402 _public_6eee402
#define public_6eee421 _public_6eee421

PROC_DECLARE(0x6eee3f0, internal_6eee3f0, public_6eee3f0);
extern "C" NAKED register_t __cdecl internal_6eee3f0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6eee421
        public_6eee402 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6eee3f0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eee402
        public_6eee421 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eee3f0)
    }
}

#undef public_6eee402
#undef public_6eee421
