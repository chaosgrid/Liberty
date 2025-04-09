#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4cdf40);

#define public_4cdf73 _public_4cdf73
#define public_4cdf92 _public_4cdf92
#define public_4cdfac _public_4cdfac

PROC_DECLARE(0x4cdf40, internal_4cdf40, public_4cdf40);
extern "C" NAKED register_t __cdecl internal_4cdf40()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x3C]
        push esi
        push edi
        mov esi, 0xFFFFFF9C
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call public_430ab0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4cdfac
        mov eax, dword ptr ss : [ebp+0x84]
        xor ebx, ebx
        test eax, eax
        jle public_4cdfac
        lea esi, ss:[ebp+0x44]
        public_4cdf73 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_4cdf92
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x38]
        cmp eax, dword ptr ss : [esp+0x10]
        jle public_4cdf92
        mov dword ptr ss : [esp+0x10], eax
        public_4cdf92 : nop
        mov eax, dword ptr ss : [ebp+0x84]
        inc ebx
        add esi, 4
        cmp ebx, eax
        jl public_4cdf73
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_4cdfac : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4cdf40)
    }
}

#undef public_4cdf73
#undef public_4cdf92
#undef public_4cdfac
