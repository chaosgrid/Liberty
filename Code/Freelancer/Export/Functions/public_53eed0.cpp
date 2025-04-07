#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_53eef8 _public_53eef8
#define public_53eefa _public_53eefa
#define public_53ef25 _public_53ef25
#define public_53ef27 _public_53ef27
#define public_53ef41 _public_53ef41
#define public_53ef59 _public_53ef59
#define public_53ef5e _public_53ef5e
#define public_53ef75 _public_53ef75
#define public_53ef8e _public_53ef8e
#define public_53ef90 _public_53ef90
#define public_53ef9e _public_53ef9e
#define public_53efba _public_53efba
#define public_53eff1 _public_53eff1
#define public_53eff9 _public_53eff9
#define public_53f019 _public_53f019
#define public_53f01b _public_53f01b
#define public_53f024 _public_53f024

PROC_DECLARE(0x53eed0, internal_53eed0, public_53eed0);
extern "C" NAKED register_t __cdecl internal_53eed0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        push ebp
        push esi
        mov eax, 0xFFFFFFFD
        je public_53eef8
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        jne public_53eef8
        mov esi, ecx
        jmp public_53eefa
        public_53eef8 : nop
        xor esi, esi
        public_53eefa : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx+0x90]
        test edx, edx
        je public_53f01b
        mov eax, dword ptr ds : [esi+0xF0]
        lea ebp, ds:[esi+0xF0]
        xor ecx, ecx
        test eax, eax
        je public_53ef25
        add eax, 0xFFFFFFF8
        jmp public_53ef27
        public_53ef25 : nop
        xor eax, eax
        public_53ef27 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        jne public_53ef41
        mov dx, word ptr ss : [esp+0x28]
        cmp word ptr ds : [esi+0xF8], dx
        je public_53f024
        public_53ef41 : nop
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        cmp edi, 0xFFFFFFFF
        je public_53ef59
        call public_54bb00
        cmp edi, eax
        mov byte ptr ss : [esp+0x28], 0
        jne public_53ef5e
        public_53ef59 : nop
        mov byte ptr ss : [esp+0x28], 1
        public_53ef5e : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        pop edi
        je public_53ef75
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_53f019
        public_53ef75 : nop
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        je public_53ef9e
        test ebx, ebx
        je public_53ef8e
        lea eax, ds:[ebx+8]
        jmp public_53ef90
        public_53ef8e : nop
        xor eax, eax
        public_53ef90 : nop
        cmp eax, dword ptr ss : [ebp]
        je public_53ef9e
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c62a8]
        public_53ef9e : nop
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx+0x90]
        test eax, eax
        je public_53efba
        mov dx, word ptr ss : [esp+0x28]
        mov word ptr ds : [esi+0xF8], dx
        public_53efba : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_53f019
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax-4]
        lea ecx, ds:[eax-4]
        call dword ptr ds : [edx+0x20]
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_5c6368]
        mov cx, word ptr ds : [eax]
        mov word ptr ss : [esp+0x14], cx
        je public_53eff1
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_53eff9
        public_53eff1 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_53eff9 : nop
        mov ax, word ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov word ptr ss : [esp+0x1C], ax
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x10]
        public_53f019 : nop
        xor eax, eax
        public_53f01b : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_53f024 : nop
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x53eed0)
    }
}

#undef public_53eef8
#undef public_53eefa
#undef public_53ef25
#undef public_53ef27
#undef public_53ef41
#undef public_53ef59
#undef public_53ef5e
#undef public_53ef75
#undef public_53ef8e
#undef public_53ef90
#undef public_53ef9e
#undef public_53efba
#undef public_53eff1
#undef public_53eff9
#undef public_53f019
#undef public_53f01b
#undef public_53f024
