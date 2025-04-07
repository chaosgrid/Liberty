#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c45e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c4450 _public_65c4450
#define public_65c4478 _public_65c4478
#define public_65c44bc _public_65c44bc
#define public_65c44be _public_65c44be
#define public_65c44c3 _public_65c44c3

PROC_DECLARE(0x65c4420, internal_65c4420, public_65c4420);
extern "C" NAKED register_t __cdecl internal_65c4420()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_65c7024]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea ebp, ds:[edi+0x10]
        push ebp
        mov ebx, ecx
        call esi
        lea eax, ds:[ebx+0x10]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call esi
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65c44c3
        lea esp, ss:[esp]
        public_65c4450 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [eax+0x14], ecx
        jne public_65c44bc
        push ebp
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_65c4478
        mov edx, dword ptr ds : [edi+0x28]
        push edx
        call dword ptr ds : [public_65c702c]
        public_65c4478 : nop
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ds:[edi+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_65c45e0
        push ebp
        call dword ptr ds : [public_65c7028]
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx], edi
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_65c6a60
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec eax
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+0xC], eax
        jmp public_65c44be
        public_65c44bc : nop
        mov esi, dword ptr ds : [esi]
        public_65c44be : nop
        cmp esi, dword ptr ds : [ebx+8]
        jne public_65c4450
        public_65c44c3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [public_65c7028]
        push ecx
        call esi
        push ebp
        call esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x65c4420)
    }
}

#undef public_65c4450
#undef public_65c4478
#undef public_65c44bc
#undef public_65c44be
#undef public_65c44c3
