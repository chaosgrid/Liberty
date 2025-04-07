#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

#define public_6d38e97 _public_6d38e97
#define public_6d38ea0 _public_6d38ea0
#define public_6d38ed7 _public_6d38ed7
#define public_6d38ef0 _public_6d38ef0
#define public_6d38f25 _public_6d38f25
#define public_6d38f40 _public_6d38f40
#define public_6d38f73 _public_6d38f73
#define public_6d38f77 _public_6d38f77
#define public_6d38fa6 _public_6d38fa6
#define public_6d38fbe _public_6d38fbe
#define public_6d38fd1 _public_6d38fd1
#define public_6d38fd9 _public_6d38fd9
#define public_6d38ff0 _public_6d38ff0
#define public_6d38ff2 _public_6d38ff2
#define public_6d39003 _public_6d39003

PROC_DECLARE(0x6d38e40, internal_6d38e40, public_6d38e40);
extern "C" NAKED register_t __cdecl internal_6d38e40()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x18], edx
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+8]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d38fd9
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edi, eax
        mov ebx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d38ed7
        jmp public_6d38ea0
        public_6d38e97 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_6d38ea0 : nop
        cmp dword ptr ds : [esi+0xC], ebx
        je public_6d38fd9
        xor eax, eax
        mov ax, word ptr ds : [edi]
        xor edx, edx
        mov dx, word ptr ds : [ebx]
        add ecx, 0xC
        push eax
        push edx
        call public_6d3e550
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d38fd9
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        add ebx, 2
        cmp edi, eax
        jne public_6d38e97
        public_6d38ed7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, ebx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d38f25
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        public_6d38ef0 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d38ff0
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d38ff2
        public_6d38f25 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d38fd1
        cmp eax, 1
        mov dword ptr ss : [esp+0x24], 1
        jbe public_6d38ef0
        lea ecx, ds:[ecx]
        public_6d38f40 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6d38fbe
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edi, eax
        mov ebx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x18], eax
        je public_6d38fa6
        jmp public_6d38f77
        public_6d38f73 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6d38f77 : nop
        cmp dword ptr ds : [esi+0xC], ebx
        je public_6d38fbe
        xor eax, eax
        mov ax, word ptr ds : [edi]
        xor edx, edx
        mov dx, word ptr ds : [ebx]
        add ecx, 0xC
        push eax
        push edx
        call public_6d3e550
        test al, al
        jne public_6d38fbe
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 2
        add ebx, 2
        cmp edi, eax
        jne public_6d38f73
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d38fa6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x10], ebx
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jb public_6d38f40
        jmp public_6d38ef0
        public_6d38fbe : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_6d38fd1 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d38ef0
        public_6d38fd9 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d38ef0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_6d38ff0 : nop
        mov eax, edx
        public_6d38ff2 : nop
        test eax, eax
        je public_6d39003
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d39003 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d38e40)
    }
}

#undef public_6d38e97
#undef public_6d38ea0
#undef public_6d38ed7
#undef public_6d38ef0
#undef public_6d38f25
#undef public_6d38f40
#undef public_6d38f73
#undef public_6d38f77
#undef public_6d38fa6
#undef public_6d38fbe
#undef public_6d38fd1
#undef public_6d38fd9
#undef public_6d38ff0
#undef public_6d38ff2
#undef public_6d39003
