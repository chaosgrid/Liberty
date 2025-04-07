#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bde8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bde900);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bde478 _public_6bde478
#define public_6bde490 _public_6bde490
#define public_6bde4b6 _public_6bde4b6
#define public_6bde4da _public_6bde4da
#define public_6bde500 _public_6bde500
#define public_6bde59e _public_6bde59e
#define public_6bde5cc _public_6bde5cc
#define public_6bde608 _public_6bde608
#define public_6bde630 _public_6bde630
#define public_6bde65a _public_6bde65a
#define public_6bde696 _public_6bde696
#define public_6bde6be _public_6bde6be
#define public_6bde6e6 _public_6bde6e6
#define public_6bde722 _public_6bde722
#define public_6bde760 _public_6bde760
#define public_6bde785 _public_6bde785
#define public_6bde789 _public_6bde789
#define public_6bde79e _public_6bde79e
#define public_6bde7c4 _public_6bde7c4
#define public_6bde7ed _public_6bde7ed
#define public_6bde811 _public_6bde811
#define public_6bde81e _public_6bde81e
#define public_6bde85a _public_6bde85a
#define public_6bde866 _public_6bde866

PROC_DECLARE(0x6bde430, internal_6bde430, public_6bde430);
extern "C" NAKED register_t __cdecl internal_6bde430()
{
    __asm
    {
        sub esp, 0x58
        mov eax, dword ptr ss : [esp+0x60]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x68]
        push edi
        lea esi, ds:[ebx+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        xor ebp, ebp
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call public_6bebe90
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bde478
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6bde478 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bde490
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde490 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6bde866
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bde4b6
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde4b6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6bde866
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [ebx+0x24], dl
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bde4da
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde4da : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, ebp
        jne public_6bde866
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        mov byte ptr ss : [esp+0x13], cl
        mov dword ptr ds : [edi], eax
        jbe public_6bde7ed
        mov byte ptr ss : [esp+0x6C], 0
        lea ecx, ds:[ecx]
        public_6bde500 : nop
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], 0
        mov word ptr ss : [esp+0x2C], bp
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        call public_6bde8d0
        mov eax, dword ptr ds : [ebx+0x2C]
        lea ecx, ds:[ebx+0x28]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x70], 0
        mov byte ptr ss : [esp+0x71], 0
        call public_6bde900
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add ebp, 8
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde59e
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bde59e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde5cc
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bde5cc : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        push ecx
        call dword ptr ds : [public_6c0b000]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bde608
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde608 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bde630
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde630 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ss : [ebp+0xC], dx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bde65a
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde65a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        push ecx
        call dword ptr ds : [public_6c0b000]
        mov dword ptr ss : [ebp+0x10], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bde696
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde696 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x14], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bde6be
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde6be : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bde6e6
        mov dword ptr ds : [esi+0xC], ecx
        public_6bde6e6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov ebx, dword ptr ds : [edi]
        push ebx
        lea ecx, ss:[ebp+0x1C]
        call public_6bda4c0
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bde785
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde722
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bde722 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[ebp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6bda4c0
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0xC
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde760
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bde760 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[ebp+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6bda220
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, 0x10
        mov dword ptr ds : [edi], ecx
        jmp public_6bde789
        public_6bde785 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6bde789 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde79e
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bde79e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        mov byte ptr ss : [ebp+0x44], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bde7c4
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bde7c4 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bde811
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ss : [ebp+0x45], cl
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi], eax
        mov al, byte ptr ss : [esp+0x6C]
        inc al
        xor ebp, ebp
        cmp al, cl
        mov byte ptr ss : [esp+0x6C], al
        jb public_6bde500
        public_6bde7ed : nop
        mov edx, dword ptr ss : [esp+0x70]
        push esi
        push edx
        push edi
        mov ecx, ebx
        call public_6bebeb0
        cmp eax, ebp
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bde81e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6bde811 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        public_6bde81e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x74]
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
        jbe public_6bde85a
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bde85a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bde866 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x6bde430)
    }
}

#undef public_6bde478
#undef public_6bde490
#undef public_6bde4b6
#undef public_6bde4da
#undef public_6bde500
#undef public_6bde59e
#undef public_6bde5cc
#undef public_6bde608
#undef public_6bde630
#undef public_6bde65a
#undef public_6bde696
#undef public_6bde6be
#undef public_6bde6e6
#undef public_6bde722
#undef public_6bde760
#undef public_6bde785
#undef public_6bde789
#undef public_6bde79e
#undef public_6bde7c4
#undef public_6bde7ed
#undef public_6bde811
#undef public_6bde81e
#undef public_6bde85a
#undef public_6bde866
