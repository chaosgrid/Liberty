#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdb6d8 _public_6bdb6d8
#define public_6bdb6f0 _public_6bdb6f0
#define public_6bdb716 _public_6bdb716
#define public_6bdb73c _public_6bdb73c
#define public_6bdb764 _public_6bdb764
#define public_6bdb78c _public_6bdb78c
#define public_6bdb7b6 _public_6bdb7b6
#define public_6bdb7da _public_6bdb7da
#define public_6bdb7e0 _public_6bdb7e0
#define public_6bdb810 _public_6bdb810
#define public_6bdb83a _public_6bdb83a
#define public_6bdb861 _public_6bdb861
#define public_6bdb8a6 _public_6bdb8a6
#define public_6bdb8cc _public_6bdb8cc
#define public_6bdb8f1 _public_6bdb8f1
#define public_6bdb8fe _public_6bdb8fe
#define public_6bdb93a _public_6bdb93a
#define public_6bdb946 _public_6bdb946

PROC_DECLARE(0x6bdb690, internal_6bdb690, public_6bdb690);
extern "C" NAKED register_t __cdecl internal_6bdb690()
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bdb6d8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6bdb6d8 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edx, 0x17
        jbe public_6bdb6f0
        mov dword ptr ds : [esi+0xC], edx
        public_6bdb6f0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb946
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
        jbe public_6bdb716
        mov dword ptr ds : [esi+0xC], edx
        public_6bdb716 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb946
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
        jbe public_6bdb73c
        mov dword ptr ds : [esi+0xC], edx
        public_6bdb73c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb946
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
        jbe public_6bdb764
        mov dword ptr ds : [esi+0xC], edx
        public_6bdb764 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb946
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
        jbe public_6bdb78c
        mov dword ptr ds : [esi+0xC], edx
        public_6bdb78c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb946
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        xor eax, eax
        mov ax, cx
        mov dword ptr ss : [esp+0x28], 0
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        ja public_6bdb7e0
        public_6bdb7b6 : nop
        push esi
        push ebp
        push edi
        mov ecx, ebx
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bdb8fe
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6bdb7da : nop
        mov edx, 0x17
        nop 
        public_6bdb7e0 : nop
        mov eax, dword ptr ds : [public_6c0b014]
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
        jbe public_6bdb810
        mov dword ptr ds : [esi+0xC], edx
        public_6bdb810 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb8f1
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
        jbe public_6bdb83a
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bdb83a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb8f1
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        jbe public_6bdb861
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bdb861 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bdb8f1
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
        call public_6c09d26
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebp
        jne public_6bdb8a6
        mov ecx, eax
        public_6bdb8a6 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bdb8cc
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        public_6bdb8cc : nop
        mov ebp, dword ptr ds : [ebx+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebp
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x2C], ebp
        mov dword ptr ss : [esp+0x28], eax
        jb public_6bdb7da
        mov ebp, dword ptr ss : [esp+0x2C]
        jmp public_6bdb7b6
        public_6bdb8f1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6bdb8fe : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bdb93a
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bdb93a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bdb946 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6bdb690)
    }
}

#undef public_6bdb6d8
#undef public_6bdb6f0
#undef public_6bdb716
#undef public_6bdb73c
#undef public_6bdb764
#undef public_6bdb78c
#undef public_6bdb7b6
#undef public_6bdb7da
#undef public_6bdb7e0
#undef public_6bdb810
#undef public_6bdb83a
#undef public_6bdb861
#undef public_6bdb8a6
#undef public_6bdb8cc
#undef public_6bdb8f1
#undef public_6bdb8fe
#undef public_6bdb93a
#undef public_6bdb946
