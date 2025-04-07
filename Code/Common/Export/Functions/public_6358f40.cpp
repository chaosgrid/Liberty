#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6358ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6358f40);
CLANG_FORWARD_PROC_SYMBOL(public_6359090);
CLANG_FORWARD_PROC_SYMBOL(public_63590e0);
CLANG_FORWARD_PROC_SYMBOL(public_63591a0);
CLANG_FORWARD_PROC_SYMBOL(public_63596b0);

#define public_6358f94 _public_6358f94
#define public_6358fb7 _public_6358fb7
#define public_6358fcb _public_6358fcb
#define public_6358fe3 _public_6358fe3
#define public_6359006 _public_6359006
#define public_6359016 _public_6359016
#define public_6359039 _public_6359039
#define public_6359058 _public_6359058
#define public_6359067 _public_6359067

PROC_DECLARE(0x6358f40, internal_6358f40, public_6358f40);
extern "C" NAKED register_t __cdecl internal_6358f40()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [ecx+0x24]
        mov ebx, dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [eax+0x98]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0x20], edx
        mov ecx, dword ptr ds : [edi+0x28]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [esi], edx
        je public_6358f94
        mov ecx, dword ptr ds : [eax]
        test cl, 0xC
        jne public_6358f94
        test ch, 3
        jne public_6358f94
        push edi
        push eax
        mov ecx, esi
        call public_63590e0
        public_6358f94 : nop
        mov ebp, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ss : [ebp]
        test al, 0xC
        jne public_6358fcb
        test ah, 3
        jne public_6358fcb
        mov ax, word ptr ds : [esi+0x12]
        cmp ax, word ptr ds : [esi+0x10]
        lea ebx, ds:[esi+0x10]
        jb public_6358fb7
        mov ecx, ebx
        call public_63441a0
        public_6358fb7 : nop
        mov edx, dword ptr ds : [ebx+4]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+2]
        mov dword ptr ds : [edx+ecx*4], ebp
        inc word ptr ds : [ebx+2]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6358fcb : nop
        test ebx, ebx
        je public_6358fe3
        mov eax, dword ptr ds : [ebx]
        test al, 0xC
        jne public_6358fe3
        test ah, 3
        jne public_6358fe3
        push edi
        push ebx
        mov ecx, esi
        call public_63590e0
        public_6358fe3 : nop
        mov ebp, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ss : [ebp]
        test al, 0xC
        jne public_6359016
        test ah, 3
        jne public_6359016
        mov ax, word ptr ds : [esi+0x12]
        cmp ax, word ptr ds : [esi+0x10]
        lea ebx, ds:[esi+0x10]
        jb public_6359006
        mov ecx, ebx
        call public_63441a0
        public_6359006 : nop
        mov edx, dword ptr ds : [ebx+4]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+2]
        mov dword ptr ds : [edx+ecx*4], ebp
        inc word ptr ds : [ebx+2]
        public_6359016 : nop
        push edi
        mov ecx, esi
        call public_6359090
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push edi
        mov ecx, esi
        call public_6358ee0
        mov ecx, esi
        xor edi, edi
        call public_63591a0
        cmp eax, 1
        jne public_6359067
        public_6359039 : nop
        mov ecx, dword ptr ds : [esi+4]
        inc edi
        inc ecx
        mov eax, ecx
        cmp eax, 0x1388
        mov dword ptr ds : [esi+4], ecx
        jg public_6359058
        mov ecx, esi
        call public_63591a0
        cmp eax, 1
        je public_6359039
        jmp public_6359067
        public_6359058 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6359067
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        public_6359067 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x50]
        inc edi
        add ecx, edi
        mov dword ptr ds : [eax+0x50], ecx
        mov ecx, esi
        call public_63596b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6358f40)
    }
}

#undef public_6358f94
#undef public_6358fb7
#undef public_6358fcb
#undef public_6358fe3
#undef public_6359006
#undef public_6359016
#undef public_6359039
#undef public_6359058
#undef public_6359067
