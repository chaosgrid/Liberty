#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee4740);
CLANG_FORWARD_PROC_SYMBOL(public_6ee4800);
CLANG_FORWARD_PROC_SYMBOL(public_6ee76d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7db0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8060);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8080);

#define public_6ee4814 _public_6ee4814
#define public_6ee483d _public_6ee483d
#define public_6ee4845 _public_6ee4845
#define public_6ee484f _public_6ee484f
#define public_6ee4854 _public_6ee4854
#define public_6ee4856 _public_6ee4856
#define public_6ee485e _public_6ee485e
#define public_6ee4887 _public_6ee4887
#define public_6ee48a5 _public_6ee48a5
#define public_6ee48c7 _public_6ee48c7
#define public_6ee48d0 _public_6ee48d0
#define public_6ee48f0 _public_6ee48f0

PROC_DECLARE(0x6ee4800, internal_6ee4800, public_6ee4800);
extern "C" NAKED register_t __cdecl internal_6ee4800()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xFC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ee485e
        public_6ee4814 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov ecx, edi
        call public_6ee4740
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ee483d
        push eax
        call public_6ee8060
        add esp, 4
        jmp public_6ee4854
        public_6ee483d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ee484f
        public_6ee4845 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ee4845
        public_6ee484f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ee4856
        public_6ee4854 : nop
        mov esi, eax
        public_6ee4856 : nop
        cmp esi, dword ptr ds : [edi+0xFC]
        jne public_6ee4814
        public_6ee485e : nop
        mov ecx, dword ptr ds : [edi+0x108]
        test ecx, ecx
        lea esi, ds:[edi+0xF8]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6ee48c7
        mov ecx, eax
        cmp eax, ecx
        jne public_6ee48c7
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ee48a5
        public_6ee4887 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov ecx, esi
        call public_6ee7db0
        mov edi, dword ptr ds : [edi]
        push 1
        push ebx
        mov ecx, esi
        call public_6ee7cd0
        cmp edi, dword ptr ds : [esi+8]
        mov ebx, edi
        jne public_6ee4887
        public_6ee48a5 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6ee48c7 : nop
        cmp eax, edi
        je public_6ee48f0
        nop 
        lea esp, ss:[esp]
        public_6ee48d0 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6ee8080
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6ee76d0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6ee48d0
        public_6ee48f0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ee4800)
    }
}

#undef public_6ee4814
#undef public_6ee483d
#undef public_6ee4845
#undef public_6ee484f
#undef public_6ee4854
#undef public_6ee4856
#undef public_6ee485e
#undef public_6ee4887
#undef public_6ee48a5
#undef public_6ee48c7
#undef public_6ee48d0
#undef public_6ee48f0
