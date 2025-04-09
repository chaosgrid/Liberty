#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae740);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5ae754 _public_5ae754
#define public_5ae767 _public_5ae767
#define public_5ae770 _public_5ae770
#define public_5ae774 _public_5ae774
#define public_5ae781 _public_5ae781
#define public_5ae792 _public_5ae792

PROC_DECLARE(0x5ae740, internal_5ae740, public_5ae740);
extern "C" NAKED register_t __cdecl internal_5ae740()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5e6528
        je public_5ae774
        public_5ae754 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5ae767
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_5ae770
        public_5ae767 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5ae770 : nop
        cmp edi, ebx
        jne public_5ae754
        public_5ae774 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_5ae792
        public_5ae781 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_5ae781
        public_5ae792 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5ae740)
    }
}

#undef public_5ae754
#undef public_5ae767
#undef public_5ae770
#undef public_5ae774
#undef public_5ae781
#undef public_5ae792
