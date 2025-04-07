#include "Common-PCH.h"


#define public_62bc690 _public_62bc690
#define public_62bc69f _public_62bc69f

PROC_DECLARE(0x62bc660, internal_62bc660, public_62bc660);
extern "C" NAKED register_t __cdecl internal_62bc660()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_639dd00
        mov edx, dword ptr ds : [eax+8]
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        mov ecx, esi
        cmp ecx, esi
        je public_62bc69f
        push edi
        lea esp, ss:[esp]
        public_62bc690 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        add ecx, 4
        add edx, 4
        cmp ecx, esi
        jne public_62bc690
        pop edi
        public_62bc69f : nop
        mov dword ptr ds : [eax+0xC], edx
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62bc660)
    }
}

#undef public_62bc690
#undef public_62bc69f
