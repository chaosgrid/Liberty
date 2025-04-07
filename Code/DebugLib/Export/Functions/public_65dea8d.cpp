#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd47f);
CLANG_FORWARD_PROC_SYMBOL(public_65dea8d);

#define public_65dead3 _public_65dead3
#define public_65deada _public_65deada

PROC_DECLARE(0x65dea8d, internal_65dea8d, public_65dea8d);
extern "C" NAKED register_t __cdecl internal_65dea8d()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        push edi
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, eax
        and ecx, 3
        cmp cl, 2
        jne public_65deada
        test ax, 0x108
        je public_65deada
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        sub edi, eax
        test edi, edi
        jle public_65deada
        push edi
        push eax
        push dword ptr ds : [esi+0x10]
        call public_65dd47f
        add esp, 0xC
        cmp eax, edi
        jne public_65dead3
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x80
        je public_65deada
        and al, 0xFD
        mov dword ptr ds : [esi+0xC], eax
        jmp public_65deada
        public_65dead3 : nop
        or dword ptr ds : [esi+0xC], 0x20
        or ebx, 0xFFFFFFFF
        public_65deada : nop
        mov eax, dword ptr ds : [esi+8]
        and dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65dea8d)
    }
}

#undef public_65dead3
#undef public_65deada
