#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4d827);
CLANG_FORWARD_PROC_SYMBOL(public_6d4db5f);

#define public_6d4db87 _public_6d4db87
#define public_6d4db8a _public_6d4db8a
#define public_6d4dba0 _public_6d4dba0
#define public_6d4dbb1 _public_6d4dbb1
#define public_6d4dbbb _public_6d4dbbb
#define public_6d4dbc7 _public_6d4dbc7
#define public_6d4dbd2 _public_6d4dbd2
#define public_6d4dbda _public_6d4dbda
#define public_6d4dc32 _public_6d4dc32
#define public_6d4dc39 _public_6d4dc39
#define public_6d4dc5a _public_6d4dc5a
#define public_6d4dc70 _public_6d4dc70
#define public_6d4dc83 _public_6d4dc83
#define public_6d4dcad _public_6d4dcad
#define public_6d4dcb0 _public_6d4dcb0

PROC_DECLARE(0x6d4db5f, internal_6d4db5f, public_6d4db5f);
extern "C" NAKED register_t __cdecl internal_6d4db5f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0xC]
        jge public_6d4dcb0
        lea edx, ds:[eax+eax]
        push ebx
        mov dword ptr ss : [ebp-4], edx
        mov edx, eax
        push esi
        shl edx, 5
        push edi
        lea edi, ds:[edx+ecx+0xC]
        jmp public_6d4db8a
        public_6d4db87 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        public_6d4db8a : nop
        mov edx, dword ptr ss : [ebp-4]
        xor esi, esi
        xor ebx, ebx
        cmp edx, dword ptr ss : [ebp+0x14]
        jg public_6d4dbbb
        test edx, edx
        jle public_6d4dbda
        add ecx, 0x1C
        mov dword ptr ss : [ebp-8], eax
        public_6d4dba0 : nop
        mov edx, dword ptr ds : [ecx]
        cmp edx, ebx
        jle public_6d4dbb1
        cmp dword ptr ds : [ecx-4], 0
        jle public_6d4dbb1
        lea esi, ds:[ecx-0x1C]
        mov ebx, edx
        public_6d4dbb1 : nop
        add ecx, 0x20
        dec dword ptr ss : [ebp-8]
        jne public_6d4dba0
        jmp public_6d4dbda
        public_6d4dbbb : nop
        cmp dword ptr ss : [ebp-4], 0
        jle public_6d4dbda
        add ecx, 0x18
        mov dword ptr ss : [ebp-8], eax
        public_6d4dbc7 : nop
        mov edx, dword ptr ds : [ecx]
        cmp edx, ebx
        jle public_6d4dbd2
        lea esi, ds:[ecx-0x18]
        mov ebx, edx
        public_6d4dbd2 : nop
        add ecx, 0x20
        dec dword ptr ss : [ebp-8]
        jne public_6d4dbc7
        public_6d4dbda : nop
        test esi, esi
        je public_6d4dcad
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi-8], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi-0xC], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi-4], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        sub edx, eax
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ebx
        lea eax, ds:[eax+eax*2]
        xor ebx, ebx
        shl ecx, 4
        shl eax, 2
        shl edx, 3
        inc ebx
        cmp ecx, eax
        jle public_6d4dc32
        mov eax, ecx
        xor ebx, ebx
        public_6d4dc32 : nop
        cmp edx, eax
        jle public_6d4dc39
        push 2
        pop ebx
        public_6d4dc39 : nop
        sub ebx, 0
        je public_6d4dc70
        dec ebx
        je public_6d4dc5a
        dec ebx
        jne public_6d4dc83
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi+0x14], eax
        inc eax
        mov dword ptr ds : [edi+4], eax
        jmp public_6d4dc83
        public_6d4dc5a : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi+0xC], eax
        inc eax
        mov dword ptr ds : [edi-4], eax
        jmp public_6d4dc83
        public_6d4dc70 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi+4], eax
        inc eax
        mov dword ptr ds : [edi-0xC], eax
        public_6d4dc83 : nop
        mov eax, dword ptr ss : [ebp+8]
        call public_6d4d827
        mov eax, dword ptr ss : [ebp+8]
        lea esi, ds:[edi-0xC]
        call public_6d4d827
        mov eax, dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp-4], 2
        inc eax
        add edi, 0x20
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jl public_6d4db87
        public_6d4dcad : nop
        pop edi
        pop esi
        pop ebx
        public_6d4dcb0 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4db5f)
    }
}

#undef public_6d4db87
#undef public_6d4db8a
#undef public_6d4dba0
#undef public_6d4dbb1
#undef public_6d4dbbb
#undef public_6d4dbc7
#undef public_6d4dbd2
#undef public_6d4dbda
#undef public_6d4dc32
#undef public_6d4dc39
#undef public_6d4dc5a
#undef public_6d4dc70
#undef public_6d4dc83
#undef public_6d4dcad
#undef public_6d4dcb0
