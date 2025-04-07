#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa5ab0);

#define public_6fa5b00 _public_6fa5b00
#define public_6fa5b11 _public_6fa5b11

PROC_DECLARE(0x6fa5ab0, internal_6fa5ab0, public_6fa5ab0);
extern "C" NAKED register_t __cdecl internal_6fa5ab0()
{
    __asm
    {
        mov eax, ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0x10]
        lea edx, ds:[eax+0x10]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x30]
        xor ebx, ebx
        test ecx, ecx
        mov dword ptr ds : [edx+0x30], ecx
        jle public_6fa5b11
        lea ecx, ds:[edx+0x10]
        sub esi, edx
        push ebp
        mov edi, edi
        public_6fa5b00 : nop
        mov ebp, dword ptr ds : [esi+ecx]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+0x30]
        inc ebx
        add ecx, 4
        cmp ebx, ebp
        jl public_6fa5b00
        pop ebp
        public_6fa5b11 : nop
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ds : [eax+0x44], edx
        mov ecx, dword ptr ds : [edi+0x48]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x48], ecx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6fa5ab0)
    }
}

#undef public_6fa5b00
#undef public_6fa5b11
