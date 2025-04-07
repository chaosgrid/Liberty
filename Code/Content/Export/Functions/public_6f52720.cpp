#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38170);
CLANG_FORWARD_PROC_SYMBOL(public_6f52720);
CLANG_FORWARD_PROC_SYMBOL(public_6f55310);

#define public_6f52740 _public_6f52740
#define public_6f52749 _public_6f52749
#define public_6f52750 _public_6f52750
#define public_6f52752 _public_6f52752
#define public_6f52774 _public_6f52774
#define public_6f52790 _public_6f52790
#define public_6f527ac _public_6f527ac
#define public_6f527af _public_6f527af
#define public_6f527d0 _public_6f527d0
#define public_6f527ee _public_6f527ee
#define public_6f527f2 _public_6f527f2
#define public_6f527f6 _public_6f527f6
#define public_6f527f9 _public_6f527f9

PROC_DECLARE(0x6f52720, internal_6f52720, public_6f52720);
extern "C" NAKED register_t __cdecl internal_6f52720()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ds : [edx]
        push ebp
        mov ebp, dword ptr ds : [edx+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, edi
        cmp eax, ecx
        je public_6f52750
        mov edi, edi
        public_6f52740 : nop
        cmp dword ptr ds : [eax], ebx
        jne public_6f52749
        cmp dword ptr ds : [eax+4], ebp
        je public_6f52752
        public_6f52749 : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f52740
        public_6f52750 : nop
        mov eax, ecx
        public_6f52752 : nop
        cmp eax, ecx
        je public_6f52774
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        mov eax, ecx
        pop ebx
        add esp, 0xC
        ret 8
        public_6f52774 : nop
        cmp edi, ecx
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edx
        je public_6f527ac
        lea ecx, ds:[ecx]
        public_6f52790 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f527ee
        mov eax, dword ptr ds : [esi+8]
        add edi, 0xC
        cmp edi, eax
        jne public_6f52790
        public_6f527ac : nop
        mov ecx, dword ptr ds : [esi+8]
        public_6f527af : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f527f9
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        mov ecx, esi
        call public_6f38170
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f527f6
        nop 
        lea esp, ss:[esp]
        public_6f527d0 : nop
        lea edx, ss:[esp+0x10]
        push edx
        push edi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f527f2
        mov eax, dword ptr ds : [esi+8]
        add edi, 0xC
        cmp edi, eax
        jne public_6f527d0
        jmp public_6f527f6
        public_6f527ee : nop
        mov ecx, edi
        jmp public_6f527af
        public_6f527f2 : nop
        mov ecx, edi
        jmp public_6f527f9
        public_6f527f6 : nop
        mov ecx, dword ptr ds : [esi+8]
        public_6f527f9 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f52720)
    }
}

#undef public_6f52740
#undef public_6f52749
#undef public_6f52750
#undef public_6f52752
#undef public_6f52774
#undef public_6f52790
#undef public_6f527ac
#undef public_6f527af
#undef public_6f527d0
#undef public_6f527ee
#undef public_6f527f2
#undef public_6f527f6
#undef public_6f527f9
