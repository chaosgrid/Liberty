#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab100);
CLANG_FORWARD_PROC_SYMBOL(public_6eacce0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eaccf0 _public_6eaccf0
#define public_6eaccfe _public_6eaccfe

PROC_DECLARE(0x6eacce0, internal_6eacce0, public_6eacce0);
extern "C" NAKED register_t __cdecl internal_6eacce0()
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
        je public_6eaccfe
        nop 
        public_6eaccf0 : nop
        mov ecx, esi
        call public_6eab100
        add esi, 0x14
        cmp esi, ebx
        jne public_6eaccf0
        public_6eaccfe : nop
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
        UNREACHABLE_TRAP(0x6eacce0)
    }
}

#undef public_6eaccf0
#undef public_6eaccfe
