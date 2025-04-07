#include "RendComp-PCH.h"


#define public_6c30da1 _public_6c30da1

PROC_DECLARE(0x6c30d90, internal_6c30d90, public_6c30d90);
extern "C" NAKED register_t __cdecl internal_6c30d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jge public_6c30da1
        or eax, 0xFFFFFFFF
        ret 0x10
        public_6c30da1 : nop
        mov edx, dword ptr ds : [eax+0x18]
        movzx edx, word ptr ds : [edx+0x10]
        lea ecx, ds:[edx+ecx+2]
        mov edx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [edx+0x34]
        lea ecx, ds:[ecx+ecx*2]
        movzx ecx, word ptr ds : [edx+ecx*4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [ecx+0x34]
        movzx ecx, word ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [eax+0x18]
        movzx esi, word ptr ds : [esi+0x10]
        lea ecx, ds:[esi+ecx*2]
        add ecx, dword ptr ds : [eax+0xC]
        lea eax, ds:[ecx+ecx*2]
        lea ecx, ds:[edx+eax*2+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6c30d90)
    }
}

#undef public_6c30da1
