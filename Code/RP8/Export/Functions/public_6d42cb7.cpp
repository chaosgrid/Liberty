#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42cb7);

#define public_6d42d01 _public_6d42d01
#define public_6d42d0e _public_6d42d0e
#define public_6d42d29 _public_6d42d29
#define public_6d42d33 _public_6d42d33
#define public_6d42d44 _public_6d42d44
#define public_6d42d4b _public_6d42d4b
#define public_6d42d8e _public_6d42d8e
#define public_6d42dc1 _public_6d42dc1
#define public_6d42dd1 _public_6d42dd1
#define public_6d42de6 _public_6d42de6
#define public_6d42e02 _public_6d42e02
#define public_6d42e12 _public_6d42e12
#define public_6d42e1c _public_6d42e1c
#define public_6d42e29 _public_6d42e29
#define public_6d42e2b _public_6d42e2b

PROC_DECLARE(0x6d42cb7, internal_6d42cb7, public_6d42cb7);
extern "C" NAKED register_t __cdecl internal_6d42cb7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [esi+8]
        cmp al, 3
        je public_6d42e2b
        and dword ptr ss : [ebp+8], 0
        push ebx
        push edi
        mov edi, dword ptr ds : [esi]
        test al, 2
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6d42d01
        movzx ecx, byte ptr ds : [esi+9]
        movzx ebx, byte ptr ds : [eax]
        mov edx, ecx
        sub edx, ebx
        movzx ebx, byte ptr ds : [eax+1]
        sub ecx, ebx
        movzx ebx, byte ptr ds : [eax+2]
        mov dword ptr ss : [ebp-0x10], ecx
        movzx ecx, byte ptr ds : [esi+9]
        sub ecx, ebx
        push 3
        mov dword ptr ss : [ebp-0xC], ecx
        pop ebx
        jmp public_6d42d0e
        public_6d42d01 : nop
        movzx edx, byte ptr ds : [esi+9]
        movzx ecx, byte ptr ds : [eax+3]
        xor ebx, ebx
        sub edx, ecx
        inc ebx
        public_6d42d0e : nop
        test byte ptr ds : [esi+8], 4
        mov dword ptr ss : [ebp-0x14], edx
        je public_6d42d29
        movzx ecx, byte ptr ds : [eax+4]
        movzx eax, byte ptr ds : [esi+9]
        sub eax, ecx
        mov dword ptr ss : [ebp+ebx*4-0x14], eax
        mov edx, dword ptr ss : [ebp-0x14]
        inc ebx
        public_6d42d29 : nop
        xor ecx, ecx
        test ebx, ebx
        jle public_6d42e29
        public_6d42d33 : nop
        lea eax, ss:[ebp+ecx*4-0x14]
        cmp dword ptr ds : [eax], 0
        jg public_6d42d44
        and dword ptr ds : [eax], 0
        mov edx, dword ptr ss : [ebp-0x14]
        jmp public_6d42d4b
        public_6d42d44 : nop
        mov dword ptr ss : [ebp+8], 1
        public_6d42d4b : nop
        inc ecx
        cmp ecx, ebx
        jl public_6d42d33
        xor ecx, ecx
        cmp word ptr ss : [ebp+8], cx
        je public_6d42e29
        movzx eax, byte ptr ds : [esi+9]
        dec eax
        dec eax
        je public_6d42e12
        dec eax
        dec eax
        je public_6d42de6
        sub eax, 4
        je public_6d42dc1
        sub eax, 8
        jne public_6d42e29
        mov esi, dword ptr ss : [ebp+0xC]
        imul edi, ebx
        cmp edi, ecx
        mov dword ptr ss : [ebp-4], edi
        mov dword ptr ss : [ebp+8], ecx
        jbe public_6d42e29
        public_6d42d8e : nop
        mov eax, dword ptr ss : [ebp+8]
        xor edx, edx
        div ebx
        movzx ax, byte ptr ds : [esi]
        lea edi, ds:[esi+1]
        movzx cx, byte ptr ds : [edi]
        shl eax, 8
        add eax, ecx
        mov cx, word ptr ss : [ebp+edx*4-0x14]
        shr ax, cl
        mov byte ptr ds : [esi], ah
        mov esi, edi
        mov byte ptr ds : [esi], al
        inc esi
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp-4]
        jb public_6d42d8e
        jmp public_6d42e29
        public_6d42dc1 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        imul edi, ebx
        mov dword ptr ss : [ebp+8], edi
        xor edi, edi
        cmp dword ptr ss : [ebp+8], ecx
        jbe public_6d42e29
        public_6d42dd1 : nop
        xor edx, edx
        mov eax, edi
        div ebx
        mov cl, byte ptr ss : [ebp+edx*4-0x14]
        shr byte ptr ds : [esi], cl
        inc esi
        inc edi
        cmp edi, dword ptr ss : [ebp+8]
        jb public_6d42dd1
        jmp public_6d42e29
        public_6d42de6 : nop
        mov esi, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, edx
        mov eax, 0xF0
        sar eax, cl
        push 0xF
        pop ebx
        sar ebx, cl
        and al, 0xF0
        or al, bl
        test esi, esi
        jbe public_6d42e29
        public_6d42e02 : nop
        mov bl, byte ptr ds : [edi]
        mov cl, dl
        shr bl, cl
        and bl, al
        mov byte ptr ds : [edi], bl
        inc edi
        dec esi
        jne public_6d42e02
        jmp public_6d42e29
        public_6d42e12 : nop
        mov esi, dword ptr ds : [esi+4]
        cmp esi, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        jbe public_6d42e29
        public_6d42e1c : nop
        mov cl, byte ptr ds : [eax]
        shr cl, 1
        and cl, 0x55
        mov byte ptr ds : [eax], cl
        inc eax
        dec esi
        jne public_6d42e1c
        public_6d42e29 : nop
        pop edi
        pop ebx
        public_6d42e2b : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d42cb7)
    }
}

#undef public_6d42d01
#undef public_6d42d0e
#undef public_6d42d29
#undef public_6d42d33
#undef public_6d42d44
#undef public_6d42d4b
#undef public_6d42d8e
#undef public_6d42dc1
#undef public_6d42dd1
#undef public_6d42de6
#undef public_6d42e02
#undef public_6d42e12
#undef public_6d42e1c
#undef public_6d42e29
#undef public_6d42e2b
