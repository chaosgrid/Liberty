#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11a0a);

#define public_6f11627 _public_6f11627
#define public_6f11646 _public_6f11646
#define public_6f1164b _public_6f1164b
#define public_6f1165f _public_6f1165f
#define public_6f11676 _public_6f11676
#define public_6f1167a _public_6f1167a
#define public_6f1167e _public_6f1167e
#define public_6f11682 _public_6f11682

PROC_DECLARE(0x6f11610, internal_6f11610, public_6f11610);
extern "C" NAKED register_t __cdecl internal_6f11610()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ebx+8]
        push edi
        xor eax, eax
        xor edi, edi
        test esi, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6f11682
        public_6f11627 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f11676
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6f11676
        test edi, edi
        je public_6f11646
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        jmp public_6f1164b
        public_6f11646 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx+8], eax
        public_6f1164b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f1165f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6f1165f : nop
        push esi
        call public_6f11a0a
        mov eax, dword ptr ds : [ebx+0x20]
        add esp, 4
        test eax, eax
        jne public_6f1167e
        mov esi, dword ptr ds : [ebx+8]
        xor edi, edi
        jmp public_6f1167a
        public_6f11676 : nop
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        public_6f1167a : nop
        test esi, esi
        jne public_6f11627
        public_6f1167e : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_6f11682 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f11610)
    }
}

#undef public_6f11627
#undef public_6f11646
#undef public_6f1164b
#undef public_6f1165f
#undef public_6f11676
#undef public_6f1167a
#undef public_6f1167e
#undef public_6f11682
