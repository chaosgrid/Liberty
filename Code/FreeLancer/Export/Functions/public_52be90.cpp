#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_52bea4 _public_52bea4
#define public_52beb4 _public_52beb4
#define public_52beb6 _public_52beb6
#define public_52bec3 _public_52bec3
#define public_52bed1 _public_52bed1
#define public_52bed5 _public_52bed5
#define public_52bee9 _public_52bee9
#define public_52bf0b _public_52bf0b
#define public_52bf1b _public_52bf1b
#define public_52bf2a _public_52bf2a
#define public_52bf2c _public_52bf2c
#define public_52bf2f _public_52bf2f
#define public_52bf35 _public_52bf35

PROC_DECLARE(0x52be90, internal_52be90, public_52be90);
extern "C" NAKED register_t __cdecl internal_52be90()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x1C]
        cmp eax, ecx
        je public_52beb4
        mov dx, word ptr ss : [esp+0x10]
        public_52bea4 : nop
        cmp word ptr ds : [eax], dx
        je public_52bf35
        add eax, 2
        cmp eax, ecx
        jne public_52bea4
        public_52beb4 : nop
        mov edx, ecx
        public_52beb6 : nop
        cmp edx, ecx
        je public_52bed5
        lea eax, ds:[edx+2]
        cmp eax, ecx
        je public_52bed1
        sub edx, eax
        public_52bec3 : nop
        mov si, word ptr ds : [eax]
        mov word ptr ds : [edx+eax], si
        add eax, 2
        cmp eax, ecx
        jne public_52bec3
        public_52bed1 : nop
        add dword ptr ds : [edi+0x1C], 0xFFFFFFFE
        public_52bed5 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        xor ebx, ebx
        cmp ecx, ebx
        je public_52bee9
        mov eax, dword ptr ds : [edi+0x1C]
        sub eax, ecx
        sar eax, 1
        cmp eax, ebx
        jne public_52bf2f
        public_52bee9 : nop
        mov ecx, dword ptr ds : [edi+0x24]
        lea esi, ds:[edi+0x44]
        push esi
        add ecx, 0x28
        call public_4fcef0
        test al, al
        jne public_52bf2c
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_52bf0b
        call public_4f7a90
        mov dword ptr ds : [esi+8], ebx
        public_52bf0b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_52bf1b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], ebx
        public_52bf1b : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, ebx
        je public_52bf2a
        call public_537ad0
        mov dword ptr ds : [esi+0xC], ebx
        public_52bf2a : nop
        mov dword ptr ds : [esi], ebx
        public_52bf2c : nop
        mov byte ptr ds : [edi+0x10], bl
        public_52bf2f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        public_52bf35 : nop
        mov edx, eax
        jmp public_52beb6
        UNREACHABLE_TRAP(0x52be90)
    }
}

#undef public_52bea4
#undef public_52beb4
#undef public_52beb6
#undef public_52bec3
#undef public_52bed1
#undef public_52bed5
#undef public_52bee9
#undef public_52bf0b
#undef public_52bf1b
#undef public_52bf2a
#undef public_52bf2c
#undef public_52bf2f
#undef public_52bf35
