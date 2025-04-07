#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f850);

#define public_6d1f855 _public_6d1f855
#define public_6d1f867 _public_6d1f867
#define public_6d1f87a _public_6d1f87a

PROC_DECLARE(0x6d1f850, internal_6d1f850, public_6d1f850);
extern "C" NAKED register_t __cdecl internal_6d1f850()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_6d1f855 : nop
        mov eax, dword ptr ds : [ecx+0x1000]
        lea edx, ds:[eax+0x10]
        cmp edx, esi
        ja public_6d1f867
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6d1f87a
        public_6d1f867 : nop
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ecx+0x1000]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x1000], edx
        jmp public_6d1f855
        public_6d1f87a : nop
        mov eax, dword ptr ds : [ecx+0x1000]
        lea edx, ds:[eax+0x10]
        mov dword ptr ds : [ecx+0x1004], edx
        mov dword ptr ds : [eax+8], esi
        mov eax, dword ptr ds : [ecx+0x1000]
        mov dword ptr ds : [ecx+0x1008], esi
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0x100C], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1f850)
    }
}

#undef public_6d1f855
#undef public_6d1f867
#undef public_6d1f87a
