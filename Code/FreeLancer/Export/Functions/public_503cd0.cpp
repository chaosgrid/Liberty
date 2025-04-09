#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4ff3c0);
CLANG_FORWARD_PROC_SYMBOL(public_503cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_503cec _public_503cec
#define public_503cfd _public_503cfd
#define public_503d42 _public_503d42
#define public_503dc0 _public_503dc0
#define public_503dd4 _public_503dd4
#define public_503de3 _public_503de3
#define public_503df3 _public_503df3
#define public_503e02 _public_503e02
#define public_503e09 _public_503e09
#define public_503e11 _public_503e11
#define public_503e17 _public_503e17

PROC_DECLARE(0x503cd0, internal_503cd0, public_503cd0);
extern "C" NAKED register_t __cdecl internal_503cd0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x68]
        mov eax, dword ptr ds : [eax+0x158]
        xor ebx, ebx
        cmp eax, 2
        je public_503cec
        cmp eax, 3
        jne public_503cfd
        public_503cec : nop
        mov ecx, dword ptr ds : [esi+0x24]
        cmp ecx, ebx
        je public_503cfd
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        call public_4ff3c0
        public_503cfd : nop
        mov eax, dword ptr ds : [esi+0x68]
        cmp dword ptr ds : [eax+0x158], 4
        jne public_503e17
        cmp byte ptr ds : [esi+0xD8], bl
        jne public_503e11
        cmp byte ptr ds : [esi+0x6D], bl
        jne public_503e09
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 5
        jp public_503e09
        mov ecx, dword ptr ds : [esi+0x40]
        cmp ecx, ebx
        je public_503d42
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_503d42 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        cmp ecx, ebx
        je public_503dc0
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_503dc0 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        cmp ecx, ebx
        je public_503dd4
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_503dd4 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        cmp ecx, ebx
        je public_503de3
        call public_4f7a90
        mov dword ptr ds : [esi+0x40], ebx
        public_503de3 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebx
        je public_503df3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x3C], ebx
        public_503df3 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        cmp ecx, ebx
        je public_503e02
        call public_537ad0
        mov dword ptr ds : [esi+0x44], ebx
        public_503e02 : nop
        mov dword ptr ds : [esi+0x38], ebx
        mov byte ptr ds : [esi+0x6D], 1
        public_503e09 : nop
        cmp byte ptr ds : [esi+0xD8], bl
        je public_503e17
        public_503e11 : nop
        mov byte ptr ds : [esi+0xD8], bl
        public_503e17 : nop
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x503cd0)
    }
}

#undef public_503cec
#undef public_503cfd
#undef public_503d42
#undef public_503dc0
#undef public_503dd4
#undef public_503de3
#undef public_503df3
#undef public_503e02
#undef public_503e09
#undef public_503e11
#undef public_503e17
