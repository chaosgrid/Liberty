#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65def65);
CLANG_FORWARD_PROC_SYMBOL(public_65df767);

#define public_65def7e _public_65def7e
#define public_65defc6 _public_65defc6
#define public_65defc8 _public_65defc8
#define public_65defce _public_65defce

PROC_DECLARE(0x65def65, internal_65def65, public_65def65);
extern "C" NAKED register_t __cdecl internal_65def65()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_65e615c]
        push edi
        xor edi, edi
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_65defc6
        mov ebx, dword ptr ds : [public_65e1094]
        public_65def7e : nop
        push edi
        push edi
        push edi
        push edi
        push 0xFFFFFFFF
        push eax
        push edi
        push 1
        call ebx
        mov ebp, eax
        cmp ebp, edi
        je public_65defce
        push ebp
        call public_65d8535
        cmp eax, edi
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_65defce
        push edi
        push edi
        push ebp
        push eax
        push 0xFFFFFFFF
        push dword ptr ds : [esi]
        push edi
        push 1
        call ebx
        test eax, eax
        je public_65defce
        push edi
        push dword ptr ss : [esp+0x14]
        call public_65df767
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        pop ecx
        cmp eax, edi
        pop ecx
        jne public_65def7e
        public_65defc6 : nop
        xor eax, eax
        public_65defc8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_65defce : nop
        or eax, 0xFFFFFFFF
        jmp public_65defc8
        UNREACHABLE_TRAP(0x65def65)
    }
}

#undef public_65def7e
#undef public_65defc6
#undef public_65defc8
#undef public_65defce
