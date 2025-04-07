#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b4dc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b95d);

#define public_6d4b999 _public_6d4b999
#define public_6d4b9ca _public_6d4b9ca
#define public_6d4b9f2 _public_6d4b9f2
#define public_6d4ba03 _public_6d4ba03
#define public_6d4ba11 _public_6d4ba11
#define public_6d4ba36 _public_6d4ba36
#define public_6d4ba3b _public_6d4ba3b

PROC_DECLARE(0x6d4b95d, internal_6d4b95d, public_6d4b95d);
extern "C" NAKED register_t __cdecl internal_6d4b95d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        push ebx
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edi+0x174]
        mov esi, dword ptr ds : [edi+0x194]
        inc eax
        shl eax, cl
        xor ebx, ebx
        cmp dword ptr ds : [edi+0xFC], ebx
        mov dword ptr ss : [ebp-4], eax
        je public_6d4b999
        cmp dword ptr ds : [esi+0x34], ebx
        jne public_6d4b999
        call public_6d4b4dc
        test al, al
        je public_6d4ba3b
        public_6d4b999 : nop
        cmp dword ptr ds : [edi+0x13C], ebx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [ebp-0x10], edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x2C], ecx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ds : [edi+0x178]
        mov dword ptr ss : [ebp-0x24], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ds:[esi+0x18]
        mov dword ptr ss : [ebp-0xC], edx
        mov dword ptr ss : [ebp+8], ebx
        jle public_6d4ba11
        public_6d4b9ca : nop
        cmp ecx, 1
        mov edx, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edx+ebx*4]
        jge public_6d4b9f2
        push 1
        push ecx
        push eax
        lea eax, ss:[ebp-0x2C]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4ba3b
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x14]
        public_6d4b9f2 : nop
        dec ecx
        mov edx, eax
        sar edx, cl
        test dl, 1
        je public_6d4ba03
        mov dx, word ptr ss : [ebp-4]
        or word ptr ds : [ebx], dx
        public_6d4ba03 : nop
        inc dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+8]
        cmp edx, dword ptr ds : [edi+0x13C]
        jl public_6d4b9ca
        public_6d4ba11 : nop
        mov edx, dword ptr ds : [edi+0x14]
        mov ebx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx], ebx
        mov edx, dword ptr ds : [edi+0x14]
        mov ebx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [edi+0x178], edx
        dec dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ecx
        mov al, 1
        public_6d4ba36 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6d4ba3b : nop
        xor al, al
        jmp public_6d4ba36
        UNREACHABLE_TRAP(0x6d4b95d)
    }
}

#undef public_6d4b999
#undef public_6d4b9ca
#undef public_6d4b9f2
#undef public_6d4ba03
#undef public_6d4ba11
#undef public_6d4ba36
#undef public_6d4ba3b
