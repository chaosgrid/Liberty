#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3930);
CLANG_FORWARD_PROC_SYMBOL(public_65d4310);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d4322 _public_65d4322
#define public_65d4349 _public_65d4349

PROC_DECLARE(0x65d4310, internal_65d4310, public_65d4310);
extern "C" NAKED register_t __cdecl internal_65d4310()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        mov esi, edi
        je public_65d4349
        public_65d4322 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_65d4310
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_65d3930
        push edi
        call public_65d6cb8
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_65d4322
        public_65d4349 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d4310)
    }
}

#undef public_65d4322
#undef public_65d4349
