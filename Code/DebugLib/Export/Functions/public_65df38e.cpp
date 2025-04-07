#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65dea8d);
CLANG_FORWARD_PROC_SYMBOL(public_65df38e);
CLANG_FORWARD_PROC_SYMBOL(public_65df9ad);
CLANG_FORWARD_PROC_SYMBOL(public_65dfa8d);

#define public_65df3bf _public_65df3bf
#define public_65df3d1 _public_65df3d1

PROC_DECLARE(0x65df38e, internal_65df38e, public_65df38e);
extern "C" NAKED register_t __cdecl internal_65df38e()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or edi, 0xFFFFFFFF
        test byte ptr ds : [esi+0xC], 0x83
        je public_65df3d1
        push esi
        call public_65dea8d
        push esi
        mov edi, eax
        call public_65dfa8d
        push dword ptr ds : [esi+0x10]
        call public_65df9ad
        add esp, 0xC
        test eax, eax
        jge public_65df3bf
        or edi, 0xFFFFFFFF
        jmp public_65df3d1
        public_65df3bf : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_65df3d1
        push eax
        call public_65d7f23
        and dword ptr ds : [esi+0x1C], 0
        pop ecx
        public_65df3d1 : nop
        and dword ptr ds : [esi+0xC], 0
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65df38e)
    }
}

#undef public_65df3bf
#undef public_65df3d1
