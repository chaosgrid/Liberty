#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62d49fd _public_62d49fd
#define public_62d49ff _public_62d49ff

PROC_DECLARE(0x62d49d0, internal_62d49d0, public_62d49d0);
extern "C" NAKED register_t __cdecl internal_62d49d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, 0xFFFFFFFF
        je public_62d49fd
        mov ecx, dword ptr ds : [esi+eax*4+0x174]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        test eax, eax
        jne public_62d49ff
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x142C
        pop esi
        jmp public_62ed5a0
        public_62d49fd : nop
        xor eax, eax
        public_62d49ff : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62d49d0)
    }
}

#undef public_62d49fd
#undef public_62d49ff
