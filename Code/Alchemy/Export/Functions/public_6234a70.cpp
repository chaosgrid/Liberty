#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234d60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6234a86 _public_6234a86
#define public_6234aac _public_6234aac

PROC_DECLARE(0x6234a70, internal_6234a70, public_6234a70);
extern "C" NAKED register_t __cdecl internal_6234a70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jbe public_6234a86
        dec eax
        mov dword ptr ds : [esi+0x84], eax
        public_6234a86 : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        jne public_6234aac
        mov ecx, esi
        mov dword ptr ds : [esi+0x84], 1
        call public_6234d60
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6234aac : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6234a70)
    }
}

#undef public_6234a86
#undef public_6234aac
