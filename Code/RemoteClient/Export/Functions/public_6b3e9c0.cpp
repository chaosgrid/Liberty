#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3ea08 _public_6b3ea08
#define public_6b3ea20 _public_6b3ea20
#define public_6b3ea46 _public_6b3ea46
#define public_6b3ea6c _public_6b3ea6c
#define public_6b3ea94 _public_6b3ea94
#define public_6b3eabc _public_6b3eabc
#define public_6b3eae6 _public_6b3eae6
#define public_6b3eb0a _public_6b3eb0a
#define public_6b3eb10 _public_6b3eb10
#define public_6b3eb40 _public_6b3eb40
#define public_6b3eb6a _public_6b3eb6a
#define public_6b3eb91 _public_6b3eb91
#define public_6b3ebd6 _public_6b3ebd6
#define public_6b3ebfc _public_6b3ebfc
#define public_6b3ec21 _public_6b3ec21
#define public_6b3ec2e _public_6b3ec2e
#define public_6b3ec6a _public_6b3ec6a
#define public_6b3ec76 _public_6b3ec76

PROC_DECLARE(0x6b3e9c0, internal_6b3e9c0, public_6b3e9c0);
extern "C" NAKED register_t __cdecl internal_6b3e9c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov ebx, ecx
        lea esi, ds:[ebx+0x10]
        push esi
        push ebp
        lea edi, ds:[ebx+0x18]
        push edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3ea08
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6b3ea08 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edx, 0x17
        jbe public_6b3ea20
        mov dword ptr ds : [esi+0xC], edx
        public_6b3ea20 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec76
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x20], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b3ea46
        mov dword ptr ds : [esi+0xC], edx
        public_6b3ea46 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec76
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [ebx+0x30], cl
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b3ea6c
        mov dword ptr ds : [esi+0xC], edx
        public_6b3ea6c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec76
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x34], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b3ea94
        mov dword ptr ds : [esi+0xC], edx
        public_6b3ea94 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec76
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x38], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6b3eabc
        mov dword ptr ds : [esi+0xC], edx
        public_6b3eabc : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec76
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        xor eax, eax
        mov ax, cx
        mov dword ptr ss : [esp+0x28], 0
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        ja public_6b3eb10
        public_6b3eae6 : nop
        push esi
        push ebp
        push edi
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3ec2e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6b3eb0a : nop
        mov edx, 0x17
        nop 
        public_6b3eb10 : nop
        mov eax, dword ptr ds : [public_6b6b02c]
        mov cx, word ptr ds : [eax]
        mov ebp, dword ptr ds : [esi]
        add ebp, 2
        mov word ptr ss : [esp+0x18], cx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ds : [esi], ebp
        jbe public_6b3eb40
        mov dword ptr ds : [esi+0xC], edx
        public_6b3eb40 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec21
        mov eax, dword ptr ds : [edi]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov ebp, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc ebp
        mov eax, ebp
        cmp eax, ecx
        mov dword ptr ds : [esi], ebp
        jbe public_6b3eb6a
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b3eb6a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec21
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        jbe public_6b3eb91
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b3eb91 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3ec21
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [eax]
        mov word ptr ss : [esp+0x18], dx
        xor edx, edx
        fstp dword ptr ss : [esp+0x1C]
        add eax, 4
        mov dl, cl
        mov dword ptr ds : [edi], eax
        mov ebp, dword ptr ds : [ebx+0x28]
        mov eax, dword ptr ss : [ebp+4]
        push 0x14
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x24], edx
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebp
        jne public_6b3ebd6
        mov ecx, eax
        public_6b3ebd6 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b3ebfc
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        public_6b3ebfc : nop
        mov ebp, dword ptr ds : [ebx+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebp
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x2C], ebp
        mov dword ptr ss : [esp+0x28], eax
        jb public_6b3eb0a
        mov ebp, dword ptr ss : [esp+0x2C]
        jmp public_6b3eae6
        public_6b3ec21 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6b3ec2e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6b3ec6a
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b3ec6a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b3ec76 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6b3e9c0)
    }
}

#undef public_6b3ea08
#undef public_6b3ea20
#undef public_6b3ea46
#undef public_6b3ea6c
#undef public_6b3ea94
#undef public_6b3eabc
#undef public_6b3eae6
#undef public_6b3eb0a
#undef public_6b3eb10
#undef public_6b3eb40
#undef public_6b3eb6a
#undef public_6b3eb91
#undef public_6b3ebd6
#undef public_6b3ebfc
#undef public_6b3ec21
#undef public_6b3ec2e
#undef public_6b3ec6a
#undef public_6b3ec76
