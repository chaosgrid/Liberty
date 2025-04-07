#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f8b0);

#define public_6d1f8d0 _public_6d1f8d0
#define public_6d1f8e3 _public_6d1f8e3
#define public_6d1f8f3 _public_6d1f8f3
#define public_6d1f905 _public_6d1f905
#define public_6d1f913 _public_6d1f913
#define public_6d1f917 _public_6d1f917
#define public_6d1f939 _public_6d1f939
#define public_6d1f93f _public_6d1f93f
#define public_6d1f947 _public_6d1f947
#define public_6d1f958 _public_6d1f958
#define public_6d1f96b _public_6d1f96b
#define public_6d1f999 _public_6d1f999
#define public_6d1f99e _public_6d1f99e

PROC_DECLARE(0x6d1f8b0, internal_6d1f8b0, public_6d1f8b0);
extern "C" NAKED register_t __cdecl internal_6d1f8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test ah, 2
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6d1f939
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1f93f
        mov ebx, dword ptr ds : [public_6d64c18]
        mov edi, edi
        public_6d1f8d0 : nop
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1f8e3
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d1f939
        public_6d1f8e3 : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1f913
        public_6d1f8f3 : nop
        cmp eax, edi
        je public_6d1f93f
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1f8f3
        public_6d1f905 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6d1f8d0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6d1f913 : nop
        cmp eax, edi
        je public_6d1f93f
        public_6d1f917 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d1f905
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1f917
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6d1f939 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, edi
        jne public_6d1f947
        public_6d1f93f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6d1f947 : nop
        mov ax, word ptr ds : [ecx]
        cmp ax, 0xFF
        jbe public_6d1f958
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6d1f958 : nop
        movzx eax, al
        mov eax, dword ptr ds : [eax*4+public_6d6a830]
        test eax, eax
        je public_6d1f96b
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        public_6d1f96b : nop
        cmp eax, 8
        jne public_6d1f99e
        mov ecx, dword ptr ds : [esi]
        cmp ecx, edi
        je public_6d1f99e
        mov ax, word ptr ds : [ecx]
        cmp ax, 0xFF
        ja public_6d1f999
        xor edx, edx
        mov dl, al
        mov eax, dword ptr ds : [edx*4+public_6d6a430]
        test eax, eax
        je public_6d1f999
        add ecx, 2
        pop edi
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebx
        ret 8
        public_6d1f999 : nop
        mov eax, 8
        public_6d1f99e : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d1f8b0)
    }
}

#undef public_6d1f8d0
#undef public_6d1f8e3
#undef public_6d1f8f3
#undef public_6d1f905
#undef public_6d1f913
#undef public_6d1f917
#undef public_6d1f939
#undef public_6d1f93f
#undef public_6d1f947
#undef public_6d1f958
#undef public_6d1f96b
#undef public_6d1f999
#undef public_6d1f99e
