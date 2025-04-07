#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd40);
CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62903b0);
CLANG_FORWARD_PROC_SYMBOL(public_6290450);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628c6a0 _public_628c6a0
#define public_628c6b5 _public_628c6b5
#define public_628c6c0 _public_628c6c0
#define public_628c6ca _public_628c6ca
#define public_628c6d1 _public_628c6d1
#define public_628c6d5 _public_628c6d5
#define public_628c6f7 _public_628c6f7
#define public_628c716 _public_628c716
#define public_628c73a _public_628c73a
#define public_628c740 _public_628c740
#define public_628c760 _public_628c760

PROC_DECLARE(0x628c660, internal_628c660, public_628c660);
extern "C" NAKED register_t __cdecl internal_628c660()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+0xA4]
        push ebx
        push esi
        lea esi, ds:[ecx+0x2C]
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6290450
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov ebx, eax
        call public_62fcfb0
        mov edi, eax
        cmp edi, ebx
        je public_628c6d5
        lea ebx, ds:[ebx]
        public_628c6a0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_628c6b5
        push ecx
        call public_62903b0
        add esp, 4
        jmp public_628c6d1
        public_628c6b5 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_628c6ca
        lea ecx, ds:[ecx]
        public_628c6c0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_628c6c0
        public_628c6ca : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_628c6d1
        mov eax, ecx
        public_628c6d1 : nop
        cmp eax, ebx
        jne public_628c6a0
        public_628c6d5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_628c73a
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_628c73a
        cmp ebx, ecx
        jne public_628c73a
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_628c716
        public_628c6f7 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_628fd40
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_628c6f7
        public_628c716 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_628c73a : nop
        cmp edi, ebx
        je public_628c760
        mov edi, edi
        public_628c740 : nop
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call public_628ffd0
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_62b5ff0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jne public_628c740
        public_628c760 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x628c660)
    }
}

#undef public_628c6a0
#undef public_628c6b5
#undef public_628c6c0
#undef public_628c6ca
#undef public_628c6d1
#undef public_628c6d5
#undef public_628c6f7
#undef public_628c716
#undef public_628c73a
#undef public_628c740
#undef public_628c760
