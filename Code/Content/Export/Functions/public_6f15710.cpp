#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f15840);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f15745 _public_6f15745
#define public_6f15773 _public_6f15773
#define public_6f1577e _public_6f1577e
#define public_6f15786 _public_6f15786

PROC_DECLARE(0x6f15710, internal_6f15710, public_6f15710);
extern "C" NAKED register_t __cdecl internal_6f15710()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push edi
        push eax
        call public_6f49b00
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        je public_6f1577e
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f1577e
        mov edx, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [public_6fb3294]
        mov dword ptr ss : [esp+0x10], eax
        public_6f15745 : nop
        cmp eax, dword ptr ds : [esi+0xA8]
        je public_6f1577e
        mov edx, dword ptr ds : [eax+0x10]
        lea ecx, ds:[ebx+4]
        push ecx
        add edx, 0xD8
        push edx
        call edi
        add esp, 8
        test eax, eax
        je public_6f15773
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6f15745
        public_6f15773 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6f15786
        public_6f1577e : nop
        push ebx
        mov ecx, esi
        call public_6f15840
        public_6f15786 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f15710)
    }
}

#undef public_6f15745
#undef public_6f15773
#undef public_6f1577e
#undef public_6f15786
