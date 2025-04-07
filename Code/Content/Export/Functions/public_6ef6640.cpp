#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3e30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef6650 _public_6ef6650
#define public_6ef6661 _public_6ef6661

PROC_DECLARE(0x6ef6640, internal_6ef6640, public_6ef6640);
extern "C" NAKED register_t __cdecl internal_6ef6640()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6ef6661
        nop 
        public_6ef6650 : nop
        mov ecx, esi
        call public_6ef3e30
        add esi, 0x80
        cmp esi, ebx
        jne public_6ef6650
        public_6ef6661 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef6640)
    }
}

#undef public_6ef6650
#undef public_6ef6661
