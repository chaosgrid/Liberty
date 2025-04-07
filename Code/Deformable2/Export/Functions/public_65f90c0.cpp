#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f90c0);

#define public_65f9142 _public_65f9142

PROC_DECLARE(0x65f90c0, internal_65f90c0, public_65f90c0);
extern "C" NAKED register_t __cdecl internal_65f90c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        push esi
        mov esi, ecx
        push edi
        mov ecx, 0x1C
        mov edi, edx
        rep stosd
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+0x68], eax
        mov dword ptr ds : [edx], 6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edx+0x6C], ecx
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edx+4], eax
        mov ecx, 0xC
        mov dword ptr ds : [edx+8], ecx
        mov eax, 0x18
        mov dword ptr ds : [edx+0xC], eax
        mov edi, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edx+0x10], edi
        mov edi, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edx+0x14], edi
        mov edi, dword ptr ds : [esi+0x28]
        add edi, ecx
        mov dword ptr ds : [edx+0x18], edi
        mov dword ptr ds : [edx+0x1C], ecx
        mov dword ptr ds : [edx+0x20], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edx+0x24], ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edx+0x28], eax
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_65f9142
        mov dword ptr ds : [edx+0x40], eax
        mov eax, 8
        mov dword ptr ds : [edx+0x44], eax
        mov dword ptr ds : [edx+0x48], eax
        mov ecx, dword ptr ds : [esi+0x54]
        mov dword ptr ds : [edx+0x4C], ecx
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [edx+0x50], eax
        public_65f9142 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f90c0)
    }
}

#undef public_65f9142
