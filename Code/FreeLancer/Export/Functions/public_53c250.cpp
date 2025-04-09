#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53c250);

#define public_53c280 _public_53c280
#define public_53c291 _public_53c291

PROC_DECLARE(0x53c250, internal_53c250, public_53c250);
extern "C" NAKED register_t __cdecl internal_53c250()
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
        jle public_53c291
        lea ecx, ds:[eax+0x10]
        sub edx, eax
        push edi
        nop 
        public_53c280 : nop
        mov edi, dword ptr ds : [edx+ecx]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+0x30]
        inc esi
        add ecx, 4
        cmp esi, edi
        jl public_53c280
        pop edi
        public_53c291 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53c250)
    }
}

#undef public_53c280
#undef public_53c291
