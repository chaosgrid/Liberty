#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ae70);
CLANG_FORWARD_PROC_SYMBOL(public_6392140);

#define public_632aeb8 _public_632aeb8
#define public_632aeba _public_632aeba

PROC_DECLARE(0x632ae70, internal_632ae70, public_632ae70);
extern "C" NAKED register_t __cdecl internal_632ae70()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 1
        je public_632aeb8
        test edi, edi
        je public_632aeb8
        push edi
        call dword ptr ds : [public_6399364]
        push eax
        push edi
        call dword ptr ds : [public_6399360]
        test eax, eax
        mov dword ptr ds : [esi], eax
        jne public_632aeba
        push 0x8007000E
        call public_6392140
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_632aeb8 : nop
        mov dword ptr ds : [esi], edi
        public_632aeba : nop
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x632ae70)
    }
}

#undef public_632aeb8
#undef public_632aeba
