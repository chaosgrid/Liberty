#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);

#define public_6ce648f _public_6ce648f
#define public_6ce64f2 _public_6ce64f2

PROC_DECLARE(0x6ce63f0, internal_6ce63f0, public_6ce63f0);
extern "C" NAKED register_t __cdecl internal_6ce63f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x20
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        mov esi, ecx
        call public_6cee630
        cmp edi, 1
        jne public_6ce64f2
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [public_6d6419c]
        call edi
        mov ecx, eax
        add ecx, 0x24
        call dword ptr ds : [public_6d641a4]
        test al, al
        jne public_6ce64f2
        mov ecx, dword ptr ds : [esi+0x10]
        call edi
        add eax, 0x24
        push eax
        call dword ptr ds : [public_6d641a0]
        mov edi, eax
        xor ecx, ecx
        add esp, 4
        cmp edi, ecx
        je public_6ce64f2
        fld dword ptr ds : [edi+4]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6ce64f2
        fld dword ptr ds : [edi+8]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6ce648f
        fld dword ptr ds : [edi+0xC]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6ce648f
        fld dword ptr ds : [edi+0x10]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6ce64f2
        public_6ce648f : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 4
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+0xE4]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 4
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edi
        call public_6d0b260
        public_6ce64f2 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6ce63f0)
    }
}

#undef public_6ce648f
#undef public_6ce64f2
