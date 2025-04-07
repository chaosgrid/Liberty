#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6efb230);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac753);

#define public_6efa813 _public_6efa813
#define public_6efa81b _public_6efa81b
#define public_6efa821 _public_6efa821
#define public_6efa840 _public_6efa840
#define public_6efa858 _public_6efa858
#define public_6efa87d _public_6efa87d
#define public_6efa895 _public_6efa895
#define public_6efa89d _public_6efa89d
#define public_6efa8c0 _public_6efa8c0
#define public_6efa8d9 _public_6efa8d9
#define public_6efa8e7 _public_6efa8e7
#define public_6efa915 _public_6efa915
#define public_6efa91a _public_6efa91a
#define public_6efa920 _public_6efa920
#define public_6efa936 _public_6efa936
#define public_6efa93e _public_6efa93e
#define public_6efa944 _public_6efa944
#define public_6efa96c _public_6efa96c
#define public_6efa974 _public_6efa974
#define public_6efa97a _public_6efa97a
#define public_6efa995 _public_6efa995
#define public_6efa99d _public_6efa99d
#define public_6efa9a7 _public_6efa9a7

PROC_DECLARE(0x6efa7c0, internal_6efa7c0, public_6efa7c0);
extern "C" NAKED register_t __cdecl internal_6efa7c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac753 @0x6efa7c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac753
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov dl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], dl
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], edi
        jne public_6efa813
        xor eax, eax
        jmp public_6efa81b
        public_6efa813 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 3
        public_6efa81b : nop
        test eax, eax
        jge public_6efa821
        xor eax, eax
        public_6efa821 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov ebp, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebx, eax
        je public_6efa858
        public_6efa840 : nop
        push ebp
        push ebx
        call public_6f305b0
        mov eax, dword ptr ss : [esp+0x34]
        add ebp, 8
        add esp, 8
        add ebx, 8
        cmp ebp, eax
        jne public_6efa840
        public_6efa858 : nop
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], ecx
        mov dl, byte ptr ds : [esi+0x28]
        mov byte ptr ds : [edi+0x28], dl
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        jne public_6efa87d
        xor edx, edx
        jmp public_6efa895
        public_6efa87d : nop
        mov ecx, dword ptr ds : [esi+0x30]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6efa895 : nop
        test edx, edx
        mov eax, edx
        jge public_6efa89d
        xor eax, eax
        public_6efa89d : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x30]
        mov ebx, dword ptr ds : [esi+0x2C]
        add esp, 4
        cmp ebx, ecx
        mov ebp, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6efa8e7
        public_6efa8c0 : nop
        mov dword ptr ss : [esp+0x18], ebp
        test ebp, ebp
        mov byte ptr ss : [esp+0x24], 1
        je public_6efa8d9
        push ebx
        mov ecx, ebp
        call public_6efb230
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6efa8d9 : nop
        add ebp, 0x38
        add ebx, 0x38
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6efa8c0
        public_6efa8e7 : nop
        mov dword ptr ds : [edi+0x30], ebp
        mov dword ptr ds : [edi+0x34], ebp
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], ecx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x3C], edx
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [edi+0x40], eax
        mov cl, byte ptr ds : [esi+0x44]
        mov byte ptr ds : [edi+0x44], cl
        mov ecx, dword ptr ds : [esi+0x48]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 2
        jne public_6efa915
        xor eax, eax
        jmp public_6efa91a
        public_6efa915 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        sub eax, ecx
        public_6efa91a : nop
        test eax, eax
        jge public_6efa920
        xor eax, eax
        public_6efa920 : nop
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x48], eax
        mov ebp, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x48]
        add esp, 4
        cmp ecx, ebp
        je public_6efa944
        public_6efa936 : nop
        test eax, eax
        je public_6efa93e
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        public_6efa93e : nop
        inc eax
        inc ecx
        cmp ecx, ebp
        jne public_6efa936
        public_6efa944 : nop
        mov dword ptr ds : [edi+0x4C], eax
        mov dword ptr ds : [edi+0x50], eax
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [edi+0x58], eax
        mov ecx, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [edi+0x5C], ecx
        mov dl, byte ptr ds : [esi+0x60]
        mov byte ptr ds : [edi+0x60], dl
        mov ecx, dword ptr ds : [esi+0x64]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 3
        jne public_6efa96c
        xor eax, eax
        jmp public_6efa974
        public_6efa96c : nop
        mov eax, dword ptr ds : [esi+0x68]
        sub eax, ecx
        sar eax, 2
        public_6efa974 : nop
        test eax, eax
        jge public_6efa97a
        xor eax, eax
        public_6efa97a : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x64], eax
        mov edx, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x64]
        add esp, 4
        cmp eax, edx
        je public_6efa9a7
        public_6efa995 : nop
        test ecx, ecx
        je public_6efa99d
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6efa99d : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6efa995
        public_6efa9a7 : nop
        mov dword ptr ds : [edi+0x68], ecx
        mov dword ptr ds : [edi+0x6C], ecx
        mov ecx, dword ptr ds : [esi+0x70]
        mov dword ptr ds : [edi+0x70], ecx
        mov dl, byte ptr ds : [esi+0x74]
        mov byte ptr ds : [edi+0x74], dl
        mov eax, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [edi+0x78], eax
        mov ecx, dword ptr ds : [esi+0x7C]
        mov dword ptr ds : [edi+0x7C], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6efa7c0)
    }
}

#undef public_6efa813
#undef public_6efa81b
#undef public_6efa821
#undef public_6efa840
#undef public_6efa858
#undef public_6efa87d
#undef public_6efa895
#undef public_6efa89d
#undef public_6efa8c0
#undef public_6efa8d9
#undef public_6efa8e7
#undef public_6efa915
#undef public_6efa91a
#undef public_6efa920
#undef public_6efa936
#undef public_6efa93e
#undef public_6efa944
#undef public_6efa96c
#undef public_6efa974
#undef public_6efa97a
#undef public_6efa995
#undef public_6efa99d
#undef public_6efa9a7
