#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e120);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d0e13b _public_6d0e13b
#define public_6d0e140 _public_6d0e140
#define public_6d0e149 _public_6d0e149
#define public_6d0e14b _public_6d0e14b
#define public_6d0e174 _public_6d0e174
#define public_6d0e176 _public_6d0e176
#define public_6d0e1db _public_6d0e1db
#define public_6d0e1f0 _public_6d0e1f0
#define public_6d0e1f2 _public_6d0e1f2
#define public_6d0e234 _public_6d0e234
#define public_6d0e236 _public_6d0e236
#define public_6d0e28c _public_6d0e28c
#define public_6d0e295 _public_6d0e295
#define public_6d0e2c5 _public_6d0e2c5
#define public_6d0e2cc _public_6d0e2cc

PROC_DECLARE(0x6d0e120, internal_6d0e120, public_6d0e120);
extern "C" NAKED register_t __cdecl internal_6d0e120()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ebx
        xor esi, esi
        jmp public_6d0e140
        public_6d0e13b : nop
        mov ebp, dword ptr ss : [esp+0x10]
        nop 
        public_6d0e140 : nop
        cmp esi, ebx
        jne public_6d0e149
        mov esi, dword ptr ss : [ebp+0x38]
        jmp public_6d0e14b
        public_6d0e149 : nop
        mov esi, dword ptr ds : [esi]
        public_6d0e14b : nop
        cmp esi, ebx
        je public_6d0e28c
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        jne public_6d0e1db
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        je public_6d0e174
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0e176
        public_6d0e174 : nop
        xor eax, eax
        public_6d0e176 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0x17
        mov dword ptr ss : [esp+0x34], eax
        call public_6d43650
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp eax, ebx
        je public_6d0e1db
        add eax, 0xC
        cmp eax, ebx
        je public_6d0e1db
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6d0e1db
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_6d0e1db
        push ebx
        call dword ptr ds : [public_6d646e8]
        public_6d0e1db : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, ebx
        je public_6d0e1f0
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0e1f2
        public_6d0e1f0 : nop
        xor eax, eax
        public_6d0e1f2 : nop
        cmp dword ptr ds : [eax+0xB4], ebx
        jne public_6d0e140
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6d0e13b
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6d0e234
        add eax, 0xC
        cmp eax, ebx
        je public_6d0e234
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebx
        je public_6d0e234
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_6d0e236
        public_6d0e234 : nop
        xor ecx, ecx
        public_6d0e236 : nop
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebx
        je public_6d0e13b
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x40], ecx
        lea edx, ss:[esp+0x30]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov byte ptr ss : [esp+0x36], bl
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x1C], 4
        call dword ptr ds : [edx]
        jmp public_6d0e13b
        public_6d0e28c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0e2cc
        public_6d0e295 : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [esi+0x40]
        je public_6d0e2c5
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e2c5
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        mov edx, dword ptr ds : [esi+0x40]
        push edi
        push edx
        call dword ptr ds : [eax+0x1C]
        public_6d0e2c5 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6d0e295
        public_6d0e2cc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x6d0e120)
    }
}

#undef public_6d0e13b
#undef public_6d0e140
#undef public_6d0e149
#undef public_6d0e14b
#undef public_6d0e174
#undef public_6d0e176
#undef public_6d0e1db
#undef public_6d0e1f0
#undef public_6d0e1f2
#undef public_6d0e234
#undef public_6d0e236
#undef public_6d0e28c
#undef public_6d0e295
#undef public_6d0e2c5
#undef public_6d0e2cc
