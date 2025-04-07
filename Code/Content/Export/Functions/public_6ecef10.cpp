#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecef10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);

#define public_6ecef30 _public_6ecef30
#define public_6ecef41 _public_6ecef41
#define public_6ecef53 _public_6ecef53
#define public_6ecef70 _public_6ecef70
#define public_6ecef80 _public_6ecef80
#define public_6ecef8b _public_6ecef8b
#define public_6ecefa4 _public_6ecefa4
#define public_6ecefb4 _public_6ecefb4
#define public_6ecefd8 _public_6ecefd8
#define public_6eceff0 _public_6eceff0
#define public_6eceffd _public_6eceffd
#define public_6ecf005 _public_6ecf005
#define public_6ecf011 _public_6ecf011
#define public_6ecf020 _public_6ecf020
#define public_6ecf02a _public_6ecf02a
#define public_6ecf031 _public_6ecf031
#define public_6ecf03a _public_6ecf03a

PROC_DECLARE(0x6ecef10, internal_6ecef10, public_6ecef10);
extern "C" NAKED register_t __cdecl internal_6ecef10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, 0x3B
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        jne public_6ecef53
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6ecef53
        public_6ecef30 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [ebp+8]
        jne public_6ecef41
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax+0xC], edx
        public_6ecef41 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edi+4]
        jne public_6ecef30
        public_6ecef53 : nop
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        jne public_6ecf03a
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ecf03a
        nop 
        lea esp, ss:[esp]
        public_6ecef70 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [ecx+0x2C]
        cmp eax, edx
        je public_6ecef8b
        lea ecx, ds:[ecx]
        public_6ecef80 : nop
        cmp dword ptr ds : [eax], ebx
        je public_6ecefb4
        add eax, 4
        cmp eax, edx
        jne public_6ecef80
        public_6ecef8b : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ecf011
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ecf031
        public_6ecefa4 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6ecefa4
        jmp public_6ecf031
        public_6ecefb4 : nop
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x10]
        mov al, byte ptr ds : [ecx+0x20]
        test al, al
        je public_6ecefd8
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_6f20e00
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_6ecf031
        public_6ecefd8 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6eceffd
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ecf031
        lea ecx, ds:[ecx]
        public_6eceff0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6eceff0
        jmp public_6ecf031
        public_6eceffd : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecf02a
        public_6ecf005 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecf005
        jmp public_6ecf02a
        public_6ecf011 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecf02a
        lea esp, ss:[esp]
        public_6ecf020 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecf020
        public_6ecf02a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ecf031
        mov esi, eax
        public_6ecf031 : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_6ecef70
        public_6ecf03a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ecef10)
    }
}

#undef public_6ecef30
#undef public_6ecef41
#undef public_6ecef53
#undef public_6ecef70
#undef public_6ecef80
#undef public_6ecef8b
#undef public_6ecefa4
#undef public_6ecefb4
#undef public_6ecefd8
#undef public_6eceff0
#undef public_6eceffd
#undef public_6ecf005
#undef public_6ecf011
#undef public_6ecf020
#undef public_6ecf02a
#undef public_6ecf031
#undef public_6ecf03a
