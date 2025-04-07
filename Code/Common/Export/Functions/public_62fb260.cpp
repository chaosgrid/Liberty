#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272db0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb260);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fb270 _public_62fb270
#define public_62fb27e _public_62fb27e

PROC_DECLARE(0x62fb260, internal_62fb260, public_62fb260);
extern "C" NAKED register_t __cdecl internal_62fb260()
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
        je public_62fb27e
        nop 
        public_62fb270 : nop
        mov ecx, esi
        call public_6272db0
        add esi, 0x14
        cmp esi, ebx
        jne public_62fb270
        public_62fb27e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62fb260)
    }
}

#undef public_62fb270
#undef public_62fb27e
