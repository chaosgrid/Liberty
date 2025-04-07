#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c930);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fb1b0 _public_62fb1b0
#define public_62fb1be _public_62fb1be

PROC_DECLARE(0x62fb1a0, internal_62fb1a0, public_62fb1a0);
extern "C" NAKED register_t __cdecl internal_62fb1a0()
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
        je public_62fb1be
        nop 
        public_62fb1b0 : nop
        mov ecx, esi
        call public_626c930
        add esi, 0x1C
        cmp esi, ebx
        jne public_62fb1b0
        public_62fb1be : nop
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
        UNREACHABLE_TRAP(0x62fb1a0)
    }
}

#undef public_62fb1b0
#undef public_62fb1be
