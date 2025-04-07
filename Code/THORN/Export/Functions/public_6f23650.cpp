#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23650);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f23662 _public_6f23662
#define public_6f2367e _public_6f2367e

PROC_DECLARE(0x6f23650, internal_6f23650, public_6f23650);
extern "C" NAKED register_t __cdecl internal_6f23650()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        xor ebp, ebp
        cmp esi, ebx
        je public_6f2367e
        public_6f23662 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        add esi, 0x10
        add esp, 4
        cmp esi, ebx
        jne public_6f23662
        public_6f2367e : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6f57e26
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f23650)
    }
}

#undef public_6f23662
#undef public_6f2367e
