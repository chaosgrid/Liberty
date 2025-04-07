#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348ad0);
CLANG_FORWARD_PROC_SYMBOL(public_63557c0);

#define public_6348adf _public_6348adf
#define public_6348af3 _public_6348af3
#define public_6348b01 _public_6348b01
#define public_6348b25 _public_6348b25
#define public_6348b3a _public_6348b3a
#define public_6348b41 _public_6348b41
#define public_6348b48 _public_6348b48
#define public_6348b5d _public_6348b5d
#define public_6348b77 _public_6348b77
#define public_6348b79 _public_6348b79

PROC_DECLARE(0x6348ad0, internal_6348ad0, public_6348ad0);
extern "C" NAKED register_t __cdecl internal_6348ad0()
{
    __asm
    {
        push ecx
        push ebp
        xor eax, eax
        mov ebp, ecx
        mov ax, word ptr ss : [ebp+0xE]
        push esi
        push edi
        dec eax
        js public_6348af3
        public_6348adf : nop
        dec eax
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [edx+0x1B0], 0
        jns public_6348adf
        public_6348af3 : nop
        push ebx
        xor ebx, ebx
        mov bx, word ptr ss : [ebp+0x1E]
        dec ebx
        mov dword ptr ss : [esp+0x10], ebx
        js public_6348b48
        public_6348b01 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ds : [eax+ebx*4]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        xor esi, esi
        mov edi, eax
        mov si, word ptr ds : [edi+2]
        dec esi
        js public_6348b41
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        call public_63557c0
        mov ebx, eax
        public_6348b25 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ecx+esi*4]
        call public_63557c0
        cmp ebx, eax
        je public_6348b3a
        mov dword ptr ds : [eax+0x1B0], ebx
        public_6348b3a : nop
        dec esi
        jns public_6348b25
        mov ebx, dword ptr ss : [esp+0x10]
        public_6348b41 : nop
        dec ebx
        mov dword ptr ss : [esp+0x10], ebx
        jns public_6348b01
        public_6348b48 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [edx]
        call public_63557c0
        xor esi, esi
        cmp word ptr ss : [ebp+0xE], si
        mov edi, eax
        pop ebx
        jbe public_6348b77
        public_6348b5d : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_63557c0
        cmp eax, edi
        jne public_6348b79
        xor ecx, ecx
        mov cx, word ptr ss : [ebp+0xE]
        inc esi
        cmp esi, ecx
        jl public_6348b5d
        public_6348b77 : nop
        xor eax, eax
        public_6348b79 : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6348ad0)
    }
}

#undef public_6348adf
#undef public_6348af3
#undef public_6348b01
#undef public_6348b25
#undef public_6348b3a
#undef public_6348b41
#undef public_6348b48
#undef public_6348b5d
#undef public_6348b77
#undef public_6348b79
