#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a410);
CLANG_FORWARD_PROC_SYMBOL(public_6f76970);
CLANG_FORWARD_PROC_SYMBOL(public_6f792c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b160);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c830);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6f81940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f769a0 _public_6f769a0
#define public_6f769b0 _public_6f769b0
#define public_6f769e0 _public_6f769e0
#define public_6f769e8 _public_6f769e8
#define public_6f769fe _public_6f769fe
#define public_6f76a01 _public_6f76a01
#define public_6f76a28 _public_6f76a28
#define public_6f76a40 _public_6f76a40
#define public_6f76a5e _public_6f76a5e
#define public_6f76a72 _public_6f76a72
#define public_6f76aa0 _public_6f76aa0
#define public_6f76ab6 _public_6f76ab6
#define public_6f76ab9 _public_6f76ab9
#define public_6f76ad3 _public_6f76ad3
#define public_6f76ae9 _public_6f76ae9
#define public_6f76b01 _public_6f76b01

PROC_DECLARE(0x6f76970, internal_6f76970, public_6f76970);
extern "C" NAKED register_t __cdecl internal_6f76970()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push eax
        push eax
        call public_6f6a410
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, eax
        add esp, 0xC
        cmp ebp, ebx
        mov edi, ebp
        je public_6f769b0
        nop 
        lea esp, ss:[esp]
        public_6f769a0 : nop
        push 0
        mov ecx, edi
        call public_6f81940
        add edi, 0x10
        cmp edi, ebx
        jne public_6f769a0
        public_6f769b0 : nop
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+8], ebp
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov ebx, dword ptr ds : [eax+0xEC]
        jp public_6f76a5e
        cmp ebx, ecx
        je public_6f76b01
        public_6f769e0 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f769fe
        public_6f769e8 : nop
        push ebx
        mov ecx, edi
        call public_6f792c0
        test al, al
        jne public_6f76a01
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x10
        cmp edi, eax
        jne public_6f769e8
        public_6f769fe : nop
        mov edi, dword ptr ds : [esi+8]
        public_6f76a01 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x2C], edi
        jne public_6f76a28
        push ebx
        push eax
        mov ecx, esi
        call public_6f7c830
        push ebx
        mov ecx, esi
        call public_6f7b160
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x18], 1
        jmp public_6f76a40
        public_6f76a28 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x30], 0
        call public_6fa6e80
        public_6f76a40 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0xF0]
        add ebx, 0x98
        cmp ebx, eax
        jne public_6f769e0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6f76a5e : nop
        cmp ebx, ecx
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        je public_6f76b01
        public_6f76a72 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ebx+0x1C]
        push ecx
        lea edx, ds:[ebx+0x10]
        push edx
        push eax
        call public_6f611a0
        fcomp dword ptr ss : [esp+0x38]
        add esp, 0x10
        fnstsw ax
        test ah, 5
        jp public_6f76ae9
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f76ab6
        nop 
        public_6f76aa0 : nop
        push ebx
        mov ecx, edi
        call public_6f792c0
        test al, al
        jne public_6f76ab9
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x10
        cmp edi, eax
        jne public_6f76aa0
        public_6f76ab6 : nop
        mov edi, dword ptr ds : [esi+8]
        public_6f76ab9 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        jne public_6f76ae9
        push ebx
        push 1
        push eax
        mov ecx, esi
        call public_6f7cd60
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f76ae9
        public_6f76ad3 : nop
        push ebx
        mov ecx, edi
        call public_6f792c0
        test al, al
        jne public_6f76ae9
        mov eax, dword ptr ds : [esi+8]
        add edi, 0x10
        cmp edi, eax
        jne public_6f76ad3
        public_6f76ae9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0xF0]
        add ebx, 0x98
        cmp ebx, eax
        jne public_6f76a72
        public_6f76b01 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6f76970)
    }
}

#undef public_6f769a0
#undef public_6f769b0
#undef public_6f769e0
#undef public_6f769e8
#undef public_6f769fe
#undef public_6f76a01
#undef public_6f76a28
#undef public_6f76a40
#undef public_6f76a5e
#undef public_6f76a72
#undef public_6f76aa0
#undef public_6f76ab6
#undef public_6f76ab9
#undef public_6f76ad3
#undef public_6f76ae9
#undef public_6f76b01
