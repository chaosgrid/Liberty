#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cde50);

#define public_4cdea0 _public_4cdea0
#define public_4cdeb1 _public_4cdeb1
#define public_4cded0 _public_4cded0
#define public_4cdf1f _public_4cdf1f

PROC_DECLARE(0x4cde50, internal_4cde50, public_4cde50);
extern "C" NAKED register_t __cdecl internal_4cde50()
{
    __asm
    {
        cmp dword ptr ds : [ecx], 0
        jbe public_4cdf1f
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        lea edx, ds:[ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ecx
        lea ecx, ds:[edx+8]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edi
        mov edi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edi
        mov edi, dword ptr ds : [ecx+0x30]
        xor ebx, ebx
        test edi, edi
        mov dword ptr ds : [eax+0x30], edi
        jle public_4cdeb1
        lea edi, ds:[eax+0x10]
        sub ecx, eax
        push ebp
        lea esp, ss:[esp]
        public_4cdea0 : nop
        mov ebp, dword ptr ds : [ecx+edi]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc ebx
        add edi, 4
        cmp ebx, ebp
        jl public_4cdea0
        pop ebp
        public_4cdeb1 : nop
        mov eax, dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [esi+0x3C], eax
        mov ecx, dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+0x40], ecx
        mov ecx, edx
        lea eax, ds:[esi+0x44]
        sub ecx, esi
        mov edi, 0x10
        lea esp, ss:[esp]
        public_4cded0 : nop
        mov ebx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec edi
        jne public_4cded0
        mov eax, dword ptr ds : [edx+0x84]
        mov dword ptr ds : [esi+0x84], eax
        mov ecx, dword ptr ds : [edx+0x88]
        mov dword ptr ds : [esi+0x88], ecx
        mov eax, dword ptr ds : [edx+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        mov ecx, dword ptr ds : [edx+0x90]
        mov dword ptr ds : [esi+0x90], ecx
        mov edx, dword ptr ds : [edx+0x94]
        pop edi
        mov dword ptr ds : [esi+0x94], edx
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_4cdf1f : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x4cde50)
    }
}

#undef public_4cdea0
#undef public_4cdeb1
#undef public_4cded0
#undef public_4cdf1f
