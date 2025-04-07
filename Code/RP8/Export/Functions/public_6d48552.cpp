#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d441af);
CLANG_FORWARD_PROC_SYMBOL(public_6d48515);
CLANG_FORWARD_PROC_SYMBOL(public_6d48552);

#define public_6d48576 _public_6d48576
#define public_6d4857c _public_6d4857c
#define public_6d4857e _public_6d4857e
#define public_6d485aa _public_6d485aa
#define public_6d485ac _public_6d485ac

PROC_DECLARE(0x6d48552, internal_6d48552, public_6d48552);
extern "C" NAKED register_t __cdecl internal_6d48552()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        xor edi, edi
        inc edi
        test byte ptr ds : [esi+0x10C], 0x20
        je public_6d48576
        mov ecx, dword ptr ds : [esi+0x5C]
        mov eax, 0x300
        and ecx, eax
        cmp ecx, eax
        jne public_6d4857e
        jmp public_6d4857c
        public_6d48576 : nop
        test byte ptr ds : [esi+0x5D], 8
        je public_6d4857e
        public_6d4857c : nop
        xor edi, edi
        public_6d4857e : nop
        push 4
        lea eax, ss:[ebp+8]
        push eax
        push esi
        call public_6d441af
        add esp, 0xC
        test edi, edi
        je public_6d485aa
        lea eax, ss:[ebp+8]
        push eax
        call public_6d48515
        pop ecx
        xor ecx, ecx
        cmp eax, dword ptr ds : [esi+0x100]
        setne cl
        mov eax, ecx
        jmp public_6d485ac
        public_6d485aa : nop
        xor eax, eax
        public_6d485ac : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d48552)
    }
}

#undef public_6d48576
#undef public_6d4857c
#undef public_6d4857e
#undef public_6d485aa
#undef public_6d485ac
