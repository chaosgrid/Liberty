#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6266d2f _public_6266d2f
#define public_6266d36 _public_6266d36
#define public_6266d46 _public_6266d46
#define public_6266d61 _public_6266d61
#define public_6266d6b _public_6266d6b
#define public_6266d76 _public_6266d76
#define public_6266da0 _public_6266da0
#define public_6266db1 _public_6266db1

PROC_DECLARE(0x6266d20, internal_6266d20, public_6266d20);
extern "C" NAKED register_t __cdecl internal_6266d20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6266d2f
        xor eax, eax
        jmp public_6266d36
        public_6266d2f : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 1
        public_6266d36 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_6266db1
        test ebx, ebx
        mov eax, ebx
        jge public_6266d46
        xor eax, eax
        public_6266d46 : nop
        add eax, eax
        push edi
        push eax
        call public_6391d9c
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_6266d76
        push ebp
        public_6266d61 : nop
        test ecx, ecx
        je public_6266d6b
        mov bp, word ptr ds : [eax]
        mov word ptr ds : [ecx], bp
        public_6266d6b : nop
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6266d61
        pop ebp
        public_6266d76 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*2]
        mov dword ptr ds : [esi+0xC], edx
        jne public_6266da0
        xor eax, eax
        lea eax, ds:[edi+eax*2]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6266da0 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        lea eax, ds:[edi+eax*2]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_6266db1 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6266d20)
    }
}

#undef public_6266d2f
#undef public_6266d36
#undef public_6266d46
#undef public_6266d61
#undef public_6266d6b
#undef public_6266d76
#undef public_6266da0
#undef public_6266db1
