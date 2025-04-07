#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63496a0);
CLANG_FORWARD_PROC_SYMBOL(public_63499c0);

#define public_63499ff _public_63499ff
#define public_6349a1d _public_6349a1d
#define public_6349a2f _public_6349a2f
#define public_6349a41 _public_6349a41
#define public_6349a53 _public_6349a53

PROC_DECLARE(0x63499c0, internal_63499c0, public_63499c0);
extern "C" NAKED register_t __cdecl internal_63499c0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0xAC]
        push ebp
        mov ebp, dword ptr ds : [ecx+0x14]
        test ebp, ebp
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xB0]
        mov dword ptr ss : [esp+0xC], eax
        fstp dword ptr ss : [esp+8]
        je public_6349a53
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        je public_6349a41
        push edi
        mov edi, dword ptr ds : [ebx+8]
        test edi, edi
        je public_6349a2f
        push esi
        mov esi, dword ptr ds : [edi+8]
        test esi, esi
        je public_6349a1d
        public_63499ff : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        call public_63496a0
        mov ebp, ebx
        mov ebx, edi
        mov edi, esi
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_63499ff
        public_6349a1d : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_63496a0
        pop esi
        public_6349a2f : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebx
        call public_63496a0
        pop edi
        public_6349a41 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebp
        call public_63496a0
        pop ebx
        public_6349a53 : nop
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x63499c0)
    }
}

#undef public_63499ff
#undef public_6349a1d
#undef public_6349a2f
#undef public_6349a41
#undef public_6349a53
