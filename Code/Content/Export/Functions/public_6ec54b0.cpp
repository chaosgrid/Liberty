#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf60);

#define public_6ec54dd _public_6ec54dd
#define public_6ec5544 _public_6ec5544
#define public_6ec5556 _public_6ec5556
#define public_6ec5574 _public_6ec5574
#define public_6ec5581 _public_6ec5581
#define public_6ec5590 _public_6ec5590
#define public_6ec559a _public_6ec559a
#define public_6ec55a1 _public_6ec55a1
#define public_6ec55a9 _public_6ec55a9
#define public_6ec55b2 _public_6ec55b2

PROC_DECLARE(0x6ec54b0, internal_6ec54b0, public_6ec54b0);
extern "C" NAKED register_t __cdecl internal_6ec54b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        mov ebx, 1
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ec54dd
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 8
        ret 
        public_6ec54dd : nop
        mov ecx, dword ptr ds : [esi+0xD0]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ds:[esi+0x44]
        push edx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ds:[esi+0xC4]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call dword ptr ds : [public_6fb33bc]
        mov edi, dword ptr ds : [esi+4]
        lea edx, ds:[edi+0xC]
        push edx
        call public_6f49b00
        add esp, 0x18
        test eax, eax
        je public_6ec55b2
        mov ecx, dword ptr ds : [edi+8]
        mov byte ptr ds : [edi+0x2C8], bl
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6ec5544
        push 0
        push 0
        push ebx
        push eax
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6ec5544 : nop
        mov eax, dword ptr ds : [edi+0xA8]
        mov byte ptr ds : [edi+0x218], bl
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ec55a9
        public_6ec5556 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ebx
        call public_6f33fd0
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ec5581
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ec55a1
        public_6ec5574 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6ec5574
        jmp public_6ec55a1
        public_6ec5581 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ec559a
        lea esp, ss:[esp]
        public_6ec5590 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ec5590
        public_6ec559a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ec55a1
        mov esi, eax
        public_6ec55a1 : nop
        cmp esi, dword ptr ds : [edi+0xA8]
        jne public_6ec5556
        public_6ec55a9 : nop
        push ebx
        call public_6f5cf60
        add esp, 4
        public_6ec55b2 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ec54b0)
    }
}

#undef public_6ec54dd
#undef public_6ec5544
#undef public_6ec5556
#undef public_6ec5574
#undef public_6ec5581
#undef public_6ec5590
#undef public_6ec559a
#undef public_6ec55a1
#undef public_6ec55a9
#undef public_6ec55b2
