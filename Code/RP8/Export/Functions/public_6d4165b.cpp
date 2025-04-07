#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4165b);

#define public_6d41685 _public_6d41685
#define public_6d4169f _public_6d4169f
#define public_6d416a3 _public_6d416a3
#define public_6d416ab _public_6d416ab
#define public_6d416f2 _public_6d416f2

PROC_DECLARE(0x6d4165b, internal_6d4165b, public_6d4165b);
extern "C" NAKED register_t __cdecl internal_6d4165b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        jne public_6d41685
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d4169f
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d41685 : nop
        dec dword ptr ss : [ebp+8]
        xor eax, eax
        mov ah, byte ptr ds : [ebx]
        inc ebx
        cmp dword ptr ss : [ebp+8], 0
        mov dword ptr ss : [ebp-4], eax
        jne public_6d416ab
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        jne public_6d416a3
        public_6d4169f : nop
        xor al, al
        jmp public_6d416f2
        public_6d416a3 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d416ab : nop
        movzx eax, byte ptr ds : [ebx]
        add dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x5A
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x178]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        inc ebx
        dec eax
        add ecx, 0xFFFFFFFE
        push ecx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [esi+0x14]
        push esi
        call dword ptr ds : [eax+0x10]
        add esp, 0x10
        mov al, 1
        public_6d416f2 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4165b)
    }
}

#undef public_6d41685
#undef public_6d4169f
#undef public_6d416a3
#undef public_6d416ab
#undef public_6d416f2
