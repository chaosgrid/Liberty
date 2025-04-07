#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3300);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac75d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8190);

#define public_6ac7606 _public_6ac7606
#define public_6ac7677 _public_6ac7677

PROC_DECLARE(0x6ac75d0, internal_6ac75d0, public_6ac75d0);
extern "C" NAKED register_t __cdecl internal_6ac75d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi]
        push esi
        mov ebx, dword ptr ds : [esi]
        lea eax, ds:[eax+ebx*8]
        push eax
        call public_6ac3450
        test eax, eax
        je public_6ac7606
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        push ecx
        call public_6ac8190
        neg eax
        pop edi
        pop esi
        sbb eax, eax
        pop ebp
        neg eax
        pop ebx
        ret 0x10
        public_6ac7606 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push ebp
        lea eax, ds:[edx+ebx*8]
        lea edi, ss:[ebp+ebx*4]
        push eax
        call public_6ac3300
        test eax, eax
        je public_6ac7677
        push esi
        push edi
        push ebp
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac7677
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        push edi
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac7677
        push esi
        push edi
        push edi
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac7677
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        lea eax, ds:[edx+ebx*4]
        lea edx, ds:[ecx+ebx*4]
        push eax
        push edi
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac7677
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x10
        public_6ac7677 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac75d0)
    }
}

#undef public_6ac7606
#undef public_6ac7677
