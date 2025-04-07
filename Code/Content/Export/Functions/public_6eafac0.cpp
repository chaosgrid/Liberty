#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eafad2 _public_6eafad2
#define public_6eafaf9 _public_6eafaf9

PROC_DECLARE(0x6eafac0, internal_6eafac0, public_6eafac0);
extern "C" NAKED register_t __cdecl internal_6eafac0()
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
        je public_6eafaf9
        public_6eafad2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6eafac0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6ead0b0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eafad2
        public_6eafaf9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eafac0)
    }
}

#undef public_6eafad2
#undef public_6eafaf9
