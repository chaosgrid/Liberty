#include "DALib-PCH.h"


#define public_65c67f0 _public_65c67f0
#define public_65c6814 _public_65c6814

PROC_DECLARE(0x65c67d0, internal_65c67d0, public_65c67d0);
extern "C" NAKED register_t __cdecl internal_65c67d0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        jbe public_65c6814
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        or esi, 0xFFFFFFFF
        add ecx, 2
        lea eax, ds:[edx+1]
        sub esi, edx
        lea ecx, ds:[ecx]
        public_65c67f0 : nop
        mov dl, byte ptr ds : [ecx-2]
        mov byte ptr ds : [eax-1], dl
        mov dl, byte ptr ds : [ecx-1]
        mov byte ptr ds : [eax], dl
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax+1], dl
        mov dl, byte ptr ds : [ecx+1]
        mov byte ptr ds : [eax+2], dl
        add eax, 4
        lea edx, ds:[esi+eax]
        add ecx, 4
        cmp edx, edi
        jb public_65c67f0
        pop esi
        public_65c6814 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x65c67d0)
    }
}

#undef public_65c67f0
#undef public_65c6814
