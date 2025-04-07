#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40bba);

#define public_6d40bea _public_6d40bea
#define public_6d40c10 _public_6d40c10
#define public_6d40c2c _public_6d40c2c
#define public_6d40c43 _public_6d40c43
#define public_6d40cba _public_6d40cba
#define public_6d40cc1 _public_6d40cc1
#define public_6d40ce8 _public_6d40ce8
#define public_6d40cea _public_6d40cea
#define public_6d40d84 _public_6d40d84
#define public_6d40da4 _public_6d40da4
#define public_6d40db3 _public_6d40db3
#define public_6d40dba _public_6d40dba
#define public_6d40dcb _public_6d40dcb
#define public_6d40dd5 _public_6d40dd5
#define public_6d40def _public_6d40def
#define public_6d40df1 _public_6d40df1

PROC_DECLARE(0x6d40bba, internal_6d40bba, public_6d40bba);
extern "C" NAKED register_t __cdecl internal_6d40bba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        jne public_6d40bea
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d40cba
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d40bea : nop
        dec dword ptr ss : [ebp+8]
        xor eax, eax
        mov ah, byte ptr ds : [ebx]
        inc ebx
        cmp dword ptr ss : [ebp+8], 0
        mov dword ptr ss : [ebp-4], eax
        jne public_6d40c10
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d40cba
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d40c10 : nop
        movzx eax, byte ptr ds : [ebx]
        add dword ptr ss : [ebp-4], eax
        dec dword ptr ss : [ebp+8]
        sub dword ptr ss : [ebp-4], 2
        inc ebx
        cmp dword ptr ss : [ebp-4], 0xE
        jl public_6d40dba
        and dword ptr ss : [ebp-8], 0
        public_6d40c2c : nop
        cmp dword ptr ss : [ebp+8], 0
        jne public_6d40c43
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d40cba
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d40c43 : nop
        dec dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [ebx]
        mov ecx, dword ptr ss : [ebp-8]
        inc ebx
        inc dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp-8], 0xE
        mov byte ptr ss : [ebp+ecx-0x18], al
        jl public_6d40c2c
        sub dword ptr ss : [ebp-4], 0xE
        cmp byte ptr ss : [ebp-0x18], 0x4A
        jne public_6d40da4
        cmp byte ptr ss : [ebp-0x17], 0x46
        jne public_6d40da4
        cmp byte ptr ss : [ebp-0x16], 0x49
        jne public_6d40da4
        cmp byte ptr ss : [ebp-0x15], 0x46
        jne public_6d40da4
        cmp byte ptr ss : [ebp-0x14], 0
        jne public_6d40da4
        cmp byte ptr ss : [ebp-0x13], 1
        je public_6d40cc1
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x73
        movzx eax, byte ptr ss : [ebp-0x13]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        movzx eax, byte ptr ss : [ebp-0x12]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        jmp public_6d40ce8
        public_6d40cba : nop
        xor al, al
        jmp public_6d40df1
        public_6d40cc1 : nop
        cmp byte ptr ss : [ebp-0x12], 2
        jbe public_6d40cea
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x58
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        inc eax
        mov dword ptr ds : [ecx+0x18], eax
        movzx ecx, byte ptr ss : [ebp-0x12]
        mov edx, dword ptr ds : [esi]
        push eax
        mov dword ptr ds : [edx+0x1C], ecx
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+4]
        public_6d40ce8 : nop
        pop ecx
        pop ecx
        public_6d40cea : nop
        mov al, byte ptr ss : [ebp-0x11]
        movzx cx, byte ptr ss : [ebp-0xF]
        movzx dx, byte ptr ss : [ebp-0xD]
        mov byte ptr ds : [esi+0x101], al
        movzx ax, byte ptr ss : [ebp-0x10]
        mov byte ptr ds : [esi+0x100], 1
        push 1
        push esi
        shl eax, 8
        add ecx, eax
        movzx ax, byte ptr ss : [ebp-0xE]
        mov word ptr ds : [esi+0x102], cx
        movzx ecx, cx
        shl eax, 8
        add eax, edx
        mov word ptr ds : [esi+0x104], ax
        mov eax, dword ptr ds : [esi]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        movzx ecx, word ptr ds : [esi+0x104]
        mov dword ptr ds : [eax+4], ecx
        movzx ecx, byte ptr ds : [esi+0x101]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x56
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        mov al, byte ptr ss : [ebp-0xB]
        or al, byte ptr ss : [ebp-0xC]
        pop ecx
        pop ecx
        je public_6d40d84
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x59
        movzx eax, byte ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        movzx eax, byte ptr ss : [ebp-0xB]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d40d84 : nop
        movzx ecx, byte ptr ss : [ebp-0xC]
        movzx eax, byte ptr ss : [ebp-0xB]
        imul eax, ecx
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, ecx
        je public_6d40dd5
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x57
        jmp public_6d40db3
        public_6d40da4 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x4C
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0xE
        public_6d40db3 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        jmp public_6d40dcb
        public_6d40dba : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x14], 0x4C
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ecx
        public_6d40dcb : nop
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d40dd5 : nop
        cmp dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], eax
        jle public_6d40def
        push dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [esi+0x14]
        push esi
        call dword ptr ds : [eax+0x10]
        pop ecx
        pop ecx
        public_6d40def : nop
        mov al, 1
        public_6d40df1 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d40bba)
    }
}

#undef public_6d40bea
#undef public_6d40c10
#undef public_6d40c2c
#undef public_6d40c43
#undef public_6d40cba
#undef public_6d40cc1
#undef public_6d40ce8
#undef public_6d40cea
#undef public_6d40d84
#undef public_6d40da4
#undef public_6d40db3
#undef public_6d40dba
#undef public_6d40dcb
#undef public_6d40dd5
#undef public_6d40def
#undef public_6d40df1
