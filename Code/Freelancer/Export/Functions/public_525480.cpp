#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5255d1 _public_5255d1

PROC_DECLARE(0x525480, internal_525480, public_525480);
extern "C" NAKED register_t __cdecl internal_525480()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_5c6368]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x1A0]
        mov al, byte ptr ds : [edi+0xAC]
        test al, al
        je public_5255d1
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_5255d1
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_5255d1
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 7
        cmp dl, 7
        jne public_5255d1
        mov eax, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x1B0]
        mov ecx, dword ptr ds : [esi+0xE4]
        cmp ecx, dword ptr ds : [public_673378]
        jne public_5255d1
        mov eax, dword ptr ds : [edi+0xA8]
        test eax, eax
        je public_5255d1
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[eax+0x28]
        push edx
        call dword ptr ds : [public_5c680c]
        test eax, eax
        je public_5255d1
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x7C]
        mov esi, eax
        test esi, esi
        je public_5255d1
        mov ebx, dword ptr ds : [public_5c71dc]
        call ebx
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5caeec]
        fild dword ptr ds : [esi+0x24]
        fdivr dword ptr ds : [public_5c75dc]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_5255d1
        fild dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0xA8]
        mov ecx, dword ptr ds : [eax+0xE4]
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+0x1C]
        fild dword ptr ds : [esi+0x1C]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xC]
        call ebx
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5caeec]
        fadd dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov edx, dword ptr ds : [public_67ecd0]
        mov ebx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [esi+4]
        push edx
        push eax
        mov eax, dword ptr ds : [edi]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax]
        push eax
        call public_554e90
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        call dword ptr ds : [ebx+0xF8]
        public_5255d1 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x525480)
    }
}

#undef public_5255d1
