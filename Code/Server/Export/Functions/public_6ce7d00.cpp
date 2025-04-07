#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7d00);

#define public_6ce7d29 _public_6ce7d29
#define public_6ce7d2b _public_6ce7d2b
#define public_6ce7d40 _public_6ce7d40
#define public_6ce7d77 _public_6ce7d77
#define public_6ce7d7d _public_6ce7d7d
#define public_6ce7da0 _public_6ce7da0
#define public_6ce7dc0 _public_6ce7dc0
#define public_6ce7df5 _public_6ce7df5
#define public_6ce7dfb _public_6ce7dfb
#define public_6ce7e10 _public_6ce7e10

PROC_DECLARE(0x6ce7d00, internal_6ce7d00, public_6ce7d00);
extern "C" NAKED register_t __cdecl internal_6ce7d00()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push edi
        call dword ptr ds : [eax+0x1DC]
        mov edi, dword ptr ds : [ebx+0x10]
        test edi, edi
        je public_6ce7d29
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce7d2b
        public_6ce7d29 : nop
        xor edi, edi
        public_6ce7d2b : nop
        mov edx, dword ptr ds : [edi+0x88]
        mov ebp, dword ptr ds : [edx+0x78]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_6ce7d7d
        nop 
        lea esp, ss:[esp]
        public_6ce7d40 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d641f4]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6ce7d77
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [public_6d6401c]
        mov eax, dword ptr ds : [ebx]
        push 0xBF800000
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        lea edx, ds:[esi+8]
        push ecx
        push edx
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+0x1E4]
        public_6ce7d77 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6ce7d40
        public_6ce7d7d : nop
        lea eax, ss:[esp+0x14]
        lea ecx, ds:[edi+0x144]
        push eax
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_6d64218]
        mov edi, eax
        test edi, edi
        je public_6ce7e10
        lea ecx, ds:[ecx]
        public_6ce7da0 : nop
        mov ebp, dword ptr ds : [public_6d64214]
        mov ecx, edi
        call ebp
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx]
        mov ecx, edi
        call ebp
        mov ebp, dword ptr ds : [eax+4]
        cmp esi, ebp
        je public_6ce7dfb
        lea ebx, ds:[ebx]
        public_6ce7dc0 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64210]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6ce7df5
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push 0xBF800000
        push eax
        xor eax, eax
        mov ax, word ptr ds : [ecx+4]
        lea ecx, ds:[esi+8]
        push eax
        push ecx
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0x1E4]
        public_6ce7df5 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6ce7dc0
        public_6ce7dfb : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_6d64218]
        mov edi, eax
        test edi, edi
        jne public_6ce7da0
        public_6ce7e10 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ce7d00)
    }
}

#undef public_6ce7d29
#undef public_6ce7d2b
#undef public_6ce7d40
#undef public_6ce7d77
#undef public_6ce7d7d
#undef public_6ce7da0
#undef public_6ce7dc0
#undef public_6ce7df5
#undef public_6ce7dfb
#undef public_6ce7e10
