#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ce810);

#define public_4ce851 _public_4ce851
#define public_4ce862 _public_4ce862
#define public_4ce880 _public_4ce880

PROC_DECLARE(0x4ce810, internal_4ce810, public_4ce810);
extern "C" NAKED register_t __cdecl internal_4ce810()
{
    __asm
    {
        push ebx
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        lea ecx, ds:[esi+8]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+8]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], edi
        mov edi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], edi
        mov edi, dword ptr ds : [ecx+0x30]
        xor ebx, ebx
        test edi, edi
        mov dword ptr ds : [edx+0x30], edi
        jle public_4ce862
        lea edi, ds:[edx+0x10]
        sub ecx, edx
        push ebp
        public_4ce851 : nop
        mov ebp, dword ptr ds : [ecx+edi]
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+0x30]
        inc ebx
        add edi, 4
        cmp ebx, ebp
        jl public_4ce851
        pop ebp
        public_4ce862 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax+0x3C], ecx
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [eax+0x40], edx
        mov edx, esi
        lea ecx, ds:[eax+0x44]
        sub edx, eax
        mov edi, 0x10
        lea ebx, ds:[ebx]
        public_4ce880 : nop
        mov ebx, dword ptr ds : [edx+ecx]
        mov dword ptr ds : [ecx], ebx
        add ecx, 4
        dec edi
        jne public_4ce880
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [eax+0x84], ecx
        mov edx, dword ptr ds : [esi+0x88]
        mov dword ptr ds : [eax+0x88], edx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov dword ptr ds : [eax+0x8C], ecx
        mov edx, dword ptr ds : [esi+0x90]
        pop edi
        mov dword ptr ds : [eax+0x90], edx
        mov ecx, dword ptr ds : [esi+0x94]
        pop esi
        mov dword ptr ds : [eax+0x94], ecx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4ce810)
    }
}

#undef public_4ce851
#undef public_4ce862
#undef public_4ce880
