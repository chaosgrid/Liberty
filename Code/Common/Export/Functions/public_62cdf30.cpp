#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cdf57 _public_62cdf57
#define public_62cdf59 _public_62cdf59
#define public_62cdf65 _public_62cdf65
#define public_62cdf8d _public_62cdf8d

PROC_DECLARE(0x62cdf30, internal_62cdf30, public_62cdf30);
extern "C" NAKED register_t __cdecl internal_62cdf30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        lea eax, ds:[ebx+0xC]
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        lea edi, ds:[esi+0x168]
        je public_62cdf57
        add eax, 8
        jmp public_62cdf59
        public_62cdf57 : nop
        xor eax, eax
        public_62cdf59 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62cdf65
        push eax
        mov ecx, edi
        call public_6341610
        public_62cdf65 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x178], ecx
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62cdf8d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62cdf8d
        or byte ptr ds : [esi+0x28], 2
        mov eax, 1
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebx
        ret 4
        public_62cdf8d : nop
        mov al, byte ptr ds : [esi+0x28]
        and al, 0xFD
        pop edi
        mov byte ptr ds : [esi+0x28], al
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62cdf30)
    }
}

#undef public_62cdf57
#undef public_62cdf59
#undef public_62cdf65
#undef public_62cdf8d
