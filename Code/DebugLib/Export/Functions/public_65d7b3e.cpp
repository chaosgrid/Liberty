#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7b3e);
CLANG_FORWARD_PROC_SYMBOL(public_65daa26);
CLANG_FORWARD_PROC_SYMBOL(public_65dacdb);
CLANG_FORWARD_PROC_SYMBOL(public_65dafe8);

#define public_65d7b51 _public_65d7b51
#define public_65d7bb7 _public_65d7bb7
#define public_65d7bd3 _public_65d7bd3
#define public_65d7bf2 _public_65d7bf2
#define public_65d7c14 _public_65d7c14
#define public_65d7c35 _public_65d7c35
#define public_65d7c5b _public_65d7c5b
#define public_65d7c61 _public_65d7c61
#define public_65d7c63 _public_65d7c63
#define public_65d7c66 _public_65d7c66

PROC_DECLARE(0x65d7b3e, internal_65d7b3e, public_65d7b3e);
extern "C" NAKED register_t __cdecl internal_65d7b3e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi], 0
        jge public_65d7b51
        xor eax, eax
        jmp public_65d7c63
        public_65d7b51 : nop
        call public_65daa26
        mov eax, dword ptr ds : [esi]
        cmp eax, 0x3F480
        jle public_65d7bb7
        cmp eax, 0x7FFC0B7F
        jge public_65d7bb7
        sub eax, dword ptr ds : [public_65e345c]
        mov dword ptr ss : [ebp+8], eax
        lea eax, ss:[ebp+8]
        push eax
        call public_65dafe8
        cmp dword ptr ds : [public_65e3460], 0
        pop ecx
        mov esi, eax
        je public_65d7c61
        push esi
        call public_65dacdb
        test eax, eax
        pop ecx
        je public_65d7c61
        mov eax, dword ptr ds : [public_65e3464]
        sub dword ptr ss : [ebp+8], eax
        lea eax, ss:[ebp+8]
        push eax
        call public_65dafe8
        mov esi, eax
        pop ecx
        mov dword ptr ds : [esi+0x20], 1
        jmp public_65d7c61
        public_65d7bb7 : nop
        push esi
        call public_65dafe8
        mov esi, eax
        push esi
        call public_65dacdb
        pop ecx
        test eax, eax
        mov eax, dword ptr ds : [esi]
        pop ecx
        je public_65d7bd3
        sub eax, dword ptr ds : [public_65e3464]
        public_65d7bd3 : nop
        sub eax, dword ptr ds : [public_65e345c]
        push edi
        push 0x3C
        mov dword ptr ss : [ebp+8], eax
        pop ecx
        cdq 
        mov edi, ecx
        idiv edi
        test edx, edx
        mov dword ptr ds : [esi], edx
        jge public_65d7bf2
        add edx, ecx
        mov dword ptr ds : [esi], edx
        sub dword ptr ss : [ebp+8], ecx
        public_65d7bf2 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edi, ecx
        cdq 
        idiv edi
        add eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+8], eax
        cdq 
        idiv edi
        pop edi
        test edx, edx
        mov dword ptr ds : [esi+4], edx
        jge public_65d7c14
        add edx, 0x3C
        mov dword ptr ds : [esi+4], edx
        sub dword ptr ss : [ebp+8], ecx
        public_65d7c14 : nop
        mov eax, dword ptr ss : [ebp+8]
        push 0x18
        cdq 
        idiv ecx
        pop ecx
        add eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], eax
        cdq 
        idiv ecx
        test edx, edx
        mov dword ptr ds : [esi+8], edx
        jge public_65d7c35
        add edx, ecx
        mov dword ptr ds : [esi+8], edx
        sub dword ptr ss : [ebp+8], ecx
        public_65d7c35 : nop
        mov eax, dword ptr ss : [ebp+8]
        push 0x18
        cdq 
        pop ecx
        idiv ecx
        mov ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+8], ecx
        jle public_65d7c66
        mov eax, dword ptr ds : [esi+0x18]
        push 7
        add eax, ecx
        pop ecx
        cdq 
        idiv ecx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ds : [esi+0xC], eax
        public_65d7c5b : nop
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ds : [esi+0x1C], eax
        public_65d7c61 : nop
        mov eax, esi
        public_65d7c63 : nop
        pop esi
        pop ebp
        ret 
        public_65d7c66 : nop
        jge public_65d7c61
        mov eax, dword ptr ds : [esi+0x18]
        push 7
        lea eax, ds:[eax+ecx+7]
        pop ecx
        cdq 
        idiv ecx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jg public_65d7c5b
        add eax, 0x1F
        dec dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x1C], 0x16C
        mov dword ptr ds : [esi+0x10], 0xB
        jmp public_65d7c61
        UNREACHABLE_TRAP(0x65d7b3e)
    }
}

#undef public_65d7b51
#undef public_65d7bb7
#undef public_65d7bd3
#undef public_65d7bf2
#undef public_65d7c14
#undef public_65d7c35
#undef public_65d7c5b
#undef public_65d7c61
#undef public_65d7c63
#undef public_65d7c66
