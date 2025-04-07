#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d469fc);

#define public_6d46a18 _public_6d46a18
#define public_6d46a23 _public_6d46a23
#define public_6d46a33 _public_6d46a33
#define public_6d46a3e _public_6d46a3e
#define public_6d46a62 _public_6d46a62
#define public_6d46a70 _public_6d46a70
#define public_6d46a80 _public_6d46a80

PROC_DECLARE(0x6d469fc, internal_6d469fc, public_6d469fc);
extern "C" NAKED register_t __cdecl internal_6d469fc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        mov ebx, dword ptr ds : [esi+0x18]
        imul ebx, eax
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        xor edi, edi
        test eax, eax
        jle public_6d46a80
        public_6d46a18 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        sub eax, edi
        cmp ecx, eax
        jge public_6d46a23
        mov eax, ecx
        public_6d46a23 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x1C]
        add ecx, edi
        sub edx, ecx
        cmp eax, edx
        jl public_6d46a33
        mov eax, edx
        public_6d46a33 : nop
        mov edx, dword ptr ds : [esi+4]
        sub edx, ecx
        cmp eax, edx
        jl public_6d46a3e
        mov eax, edx
        public_6d46a3e : nop
        test eax, eax
        jle public_6d46a80
        imul eax, dword ptr ss : [ebp-8]
        cmp byte ptr ss : [ebp+0xC], 0
        push eax
        mov dword ptr ss : [ebp-4], eax
        push ebx
        je public_6d46a62
        mov eax, dword ptr ds : [esi]
        push dword ptr ds : [eax+edi*4]
        lea eax, ds:[esi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [esi+0x2C]
        jmp public_6d46a70
        public_6d46a62 : nop
        mov ecx, dword ptr ds : [esi]
        push dword ptr ds : [ecx+edi*4]
        lea eax, ds:[esi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [eax]
        public_6d46a70 : nop
        add edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        add ebx, dword ptr ss : [ebp-4]
        add esp, 0x14
        cmp edi, eax
        jl public_6d46a18
        public_6d46a80 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d469fc)
    }
}

#undef public_6d46a18
#undef public_6d46a23
#undef public_6d46a33
#undef public_6d46a3e
#undef public_6d46a62
#undef public_6d46a70
#undef public_6d46a80
