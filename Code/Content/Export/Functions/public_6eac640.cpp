#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6eac640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eac650 _public_6eac650
#define public_6eac65e _public_6eac65e

PROC_DECLARE(0x6eac640, internal_6eac640, public_6eac640);
extern "C" NAKED register_t __cdecl internal_6eac640()
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
        je public_6eac65e
        nop 
        public_6eac650 : nop
        mov ecx, esi
        call public_6eab740
        add esi, 0x28
        cmp esi, ebx
        jne public_6eac650
        public_6eac65e : nop
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
        UNREACHABLE_TRAP(0x6eac640)
    }
}

#undef public_6eac650
#undef public_6eac65e
