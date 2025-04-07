#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed26b0);

#define public_6ed26e0 _public_6ed26e0
#define public_6ed26f1 _public_6ed26f1

PROC_DECLARE(0x6ed26b0, internal_6ed26b0, public_6ed26b0);
extern "C" NAKED register_t __cdecl internal_6ed26b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [edx+0x30]
        push esi
        xor esi, esi
        test ecx, ecx
        mov dword ptr ds : [eax+0x30], ecx
        jle public_6ed26f1
        lea ecx, ds:[eax+0x10]
        sub edx, eax
        push edi
        nop 
        public_6ed26e0 : nop
        mov edi, dword ptr ds : [edx+ecx]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+0x30]
        inc esi
        add ecx, 4
        cmp esi, edi
        jl public_6ed26e0
        pop edi
        public_6ed26f1 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed26b0)
    }
}

#undef public_6ed26e0
#undef public_6ed26f1
