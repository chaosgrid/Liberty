#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401300);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_42e160);

#define public_42e171 _public_42e171
#define public_42e195 _public_42e195
#define public_42e1a1 _public_42e1a1
#define public_42e1af _public_42e1af
#define public_42e1c8 _public_42e1c8

PROC_DECLARE(0x42e160, internal_42e160, public_42e160);
extern "C" NAKED register_t __cdecl internal_42e160()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        xor al, al
        dec ecx
        mov dword ptr ds : [esi+0x20], ecx
        jne public_42e1c8
        push edi
        xor edi, edi
        public_42e171 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        test ecx, ecx
        je public_42e195
        mov eax, dword ptr ds : [esi+0x30]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_42e195
        mov eax, ecx
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_41b030
        add esp, 4
        inc edi
        jmp public_42e171
        public_42e195 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, edx
        cmp eax, edx
        je public_42e1af
        public_42e1a1 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_42e1a1
        public_42e1af : nop
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        call public_401300
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0xFFFFFFFF
        mov al, 1
        pop edi
        public_42e1c8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42e160)
    }
}

#undef public_42e171
#undef public_42e195
#undef public_42e1a1
#undef public_42e1af
#undef public_42e1c8
