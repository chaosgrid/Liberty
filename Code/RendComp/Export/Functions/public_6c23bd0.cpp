#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c26610);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c23be9 _public_6c23be9
#define public_6c23bfa _public_6c23bfa
#define public_6c23c0e _public_6c23c0e
#define public_6c23c43 _public_6c23c43
#define public_6c23c61 _public_6c23c61
#define public_6c23c81 _public_6c23c81
#define public_6c23ca6 _public_6c23ca6
#define public_6c23cc4 _public_6c23cc4
#define public_6c23ce4 _public_6c23ce4
#define public_6c23d07 _public_6c23d07
#define public_6c23d2c _public_6c23d2c
#define public_6c23d51 _public_6c23d51
#define public_6c23d7e _public_6c23d7e
#define public_6c23d80 _public_6c23d80
#define public_6c23dae _public_6c23dae
#define public_6c23db0 _public_6c23db0

PROC_DECLARE(0x6c23bd0, internal_6c23bd0, public_6c23bd0);
extern "C" NAKED register_t __cdecl internal_6c23bd0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_6c23be9
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c23be9 : nop
        cmp dword ptr ds : [esi+0x218], 2
        je public_6c23bfa
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c23bfa : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        xor ebx, ebx
        cmp eax, ebx
        je public_6c23c0e
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c23c0e : nop
        push ebp
        push edi
        mov ecx, esi
        or edi, 0xFFFFFFFF
        call public_6c26610
        mov ecx, dword ptr ds : [esi+0x1E8]
        test byte ptr ss : [esp+0x18], 1
        mov ebp, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [ebp+0x2C]
        je public_6c23c43
        lea edx, ds:[esi+4]
        push edx
        call public_6c23dc0
        mov eax, dword ptr ds : [esi+0x68]
        and eax, 0xFFFFFFFD
        add esp, 4
        mov dword ptr ds : [esi+0x68], eax
        xor edi, edi
        public_6c23c43 : nop
        test byte ptr ss : [esp+0x18], 8
        je public_6c23c61
        lea eax, ds:[esi+0x18]
        push eax
        call public_6c23dc0
        mov eax, dword ptr ds : [esi+0x68]
        and eax, 0xFFFFFFEF
        add esp, 4
        mov dword ptr ds : [esi+0x68], eax
        xor edi, edi
        public_6c23c61 : nop
        test byte ptr ss : [esp+0x18], 2
        je public_6c23c81
        lea ecx, ds:[esi+0x40]
        push ecx
        call public_6c23dc0
        mov eax, dword ptr ds : [esi+0x68]
        and eax, 0xFFFFF0FF
        add esp, 4
        mov dword ptr ds : [esi+0x68], eax
        xor edi, edi
        public_6c23c81 : nop
        test byte ptr ss : [esp+0x18], 4
        je public_6c23ca6
        lea edx, ds:[esi+0x54]
        push edx
        call public_6c23dc0
        mov eax, dword ptr ds : [esi+0x68]
        and eax, 0xFFFFF1FF
        or eax, 0x100
        add esp, 4
        mov dword ptr ds : [esi+0x68], eax
        xor edi, edi
        public_6c23ca6 : nop
        test byte ptr ss : [esp+0x18], 0x10
        je public_6c23cc4
        lea ecx, ds:[esi+0x2C]
        push ecx
        call public_6c23dc0
        mov eax, dword ptr ds : [esi+0x68]
        and eax, 0xFFFFFFBF
        add esp, 4
        mov dword ptr ds : [esi+0x68], eax
        xor edi, edi
        public_6c23cc4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test ah, 0x40
        je public_6c23ce4
        mov eax, dword ptr ss : [ebp+0x38]
        cmp eax, ebx
        je public_6c23ce4
        push eax
        call public_6c23dc0
        mov edx, dword ptr ss : [ebp+0x34]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        xor edi, edi
        public_6c23ce4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test ah, ah
        jns public_6c23d07
        mov eax, dword ptr ss : [ebp+0x38]
        cmp eax, ebx
        je public_6c23d07
        add eax, 0x14
        push eax
        call public_6c23dc0
        mov eax, dword ptr ss : [ebp+0x34]
        add esp, 4
        mov dword ptr ds : [eax+4], ebx
        xor edi, edi
        public_6c23d07 : nop
        test dword ptr ss : [esp+0x18], 0x10000
        je public_6c23d2c
        mov eax, dword ptr ss : [ebp+0x38]
        cmp eax, ebx
        je public_6c23d2c
        add eax, 0x28
        push eax
        call public_6c23dc0
        mov ecx, dword ptr ss : [ebp+0x34]
        add esp, 4
        mov dword ptr ds : [ecx+8], ebx
        xor edi, edi
        public_6c23d2c : nop
        test dword ptr ss : [esp+0x18], 0x20000
        je public_6c23d51
        mov eax, dword ptr ss : [ebp+0x38]
        cmp eax, ebx
        je public_6c23d51
        add eax, 0x3C
        push eax
        call public_6c23dc0
        mov edx, dword ptr ss : [ebp+0x34]
        add esp, 4
        mov dword ptr ds : [edx+0xC], ebx
        xor edi, edi
        public_6c23d51 : nop
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jns public_6c23d80
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x1E8]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+0x20]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x20], ebx
        jne public_6c23d7e
        mov dword ptr ds : [esi+0x28], ebx
        public_6c23d7e : nop
        xor edi, edi
        public_6c23d80 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test ah, 1
        je public_6c23db0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x1E8]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+0x20]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0x24], ebx
        jne public_6c23dae
        mov dword ptr ds : [esi+0x28], ebx
        public_6c23dae : nop
        xor edi, edi
        public_6c23db0 : nop
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c23bd0)
    }
}

#undef public_6c23be9
#undef public_6c23bfa
#undef public_6c23c0e
#undef public_6c23c43
#undef public_6c23c61
#undef public_6c23c81
#undef public_6c23ca6
#undef public_6c23cc4
#undef public_6c23ce4
#undef public_6c23d07
#undef public_6c23d2c
#undef public_6c23d51
#undef public_6c23d7e
#undef public_6c23d80
#undef public_6c23dae
#undef public_6c23db0
