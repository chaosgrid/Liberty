#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);

#define public_6ed67b8 _public_6ed67b8

PROC_DECLARE(0x6ed6780, internal_6ed6780, public_6ed6780);
extern "C" NAKED register_t __cdecl internal_6ed6780()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_6ed67b8
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_6ed67b8
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f73a40
        test eax, eax
        je public_6ed67b8
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_6ed67b8
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6ed67b8
        mov eax, 1
        pop esi
        ret 
        public_6ed67b8 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed6780)
    }
}

#undef public_6ed67b8
