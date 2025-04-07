#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c44e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c45e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c5590);

#define public_65c4510 _public_65c4510
#define public_65c452f _public_65c452f
#define public_65c4553 _public_65c4553
#define public_65c4560 _public_65c4560
#define public_65c4576 _public_65c4576

PROC_DECLARE(0x65c44e0, internal_65c44e0, public_65c44e0);
extern "C" NAKED register_t __cdecl internal_65c44e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [public_65c7024]
        lea eax, ss:[ebp+0x10]
        push edi
        push eax
        mov ebx, ecx
        mov dword ptr ss : [esp+0x14], eax
        call esi
        lea edi, ds:[ebx+0x10]
        push edi
        call esi
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65c4553
        lea esp, ss:[esp]
        public_65c4510 : nop
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_65c7024]
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        jne public_65c452f
        mov ecx, dword ptr ds : [ebx+0x28]
        push ecx
        call dword ptr ds : [public_65c702c]
        public_65c452f : nop
        mov eax, dword ptr ds : [ebx+8]
        lea ecx, ds:[ebx+4]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_65c45e0
        push edi
        call dword ptr ds : [public_65c7028]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+8]
        jne public_65c4510
        public_65c4553 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_65c4576
        lea esp, ss:[esp]
        public_65c4560 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[ebp+4]
        call public_65c5590
        cmp esi, ebx
        jne public_65c4560
        public_65c4576 : nop
        mov edx, dword ptr ss : [ebp+0x28]
        push edx
        call dword ptr ds : [public_65c7030]
        mov esi, dword ptr ds : [public_65c7028]
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x65c44e0)
    }
}

#undef public_65c4510
#undef public_65c452f
#undef public_65c4553
#undef public_65c4560
#undef public_65c4576
