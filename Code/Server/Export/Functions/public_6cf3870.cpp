#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);

#define public_6cf3910 _public_6cf3910
#define public_6cf3945 _public_6cf3945
#define public_6cf3947 _public_6cf3947
#define public_6cf3984 _public_6cf3984

PROC_DECLARE(0x6cf3870, internal_6cf3870, public_6cf3870);
extern "C" NAKED register_t __cdecl internal_6cf3870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        push eax
        push edi
        mov esi, ecx
        call public_6cee630
        cmp edi, 1
        jne public_6cf3984
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [public_6d6419c]
        call edi
        mov ecx, eax
        add ecx, 0x24
        call dword ptr ds : [public_6d641a4]
        test al, al
        jne public_6cf3984
        mov ecx, dword ptr ds : [esi+0x10]
        call edi
        add eax, 0x24
        push eax
        call dword ptr ds : [public_6d641a0]
        mov edi, eax
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        je public_6cf3984
        fld dword ptr ds : [edi+4]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6cf3984
        fld dword ptr ds : [edi+8]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6cf3910
        fld dword ptr ds : [edi+0xC]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6cf3910
        fld dword ptr ds : [edi+0x10]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6cf3984
        public_6cf3910 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6cf3945
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xF
        cmp cl, 0xF
        je public_6cf3947
        public_6cf3945 : nop
        xor eax, eax
        public_6cf3947 : nop
        mov edx, dword ptr ds : [eax+0xE4]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], 7
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        call public_6d0b260
        public_6cf3984 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6cf3870)
    }
}

#undef public_6cf3910
#undef public_6cf3945
#undef public_6cf3947
#undef public_6cf3984
