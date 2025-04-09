#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);

#define public_52ccf9 _public_52ccf9
#define public_52cd23 _public_52cd23

PROC_DECLARE(0x52ccb0, internal_52ccb0, public_52ccb0);
extern "C" NAKED register_t __cdecl internal_52ccb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, 0xA
        mov esi, ecx
        jne public_52cd23
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [public_5c68ac]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_52ccf9
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_52ccf9 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x30]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_52cd23
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x28]
        call public_4f7a90
        mov dword ptr ds : [esi+0x28], 0
        public_52cd23 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push edi
        mov ecx, esi
        call public_531b20
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x52ccb0)
    }
}

#undef public_52ccf9
#undef public_52cd23
