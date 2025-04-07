#include "RendComp-PCH.h"


#define public_6c30b21 _public_6c30b21
#define public_6c30b48 _public_6c30b48

PROC_DECLARE(0x6c30b10, internal_6c30b10, public_6c30b10);
extern "C" NAKED register_t __cdecl internal_6c30b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jge public_6c30b21
        or eax, 0xFFFFFFFF
        ret 8
        public_6c30b21 : nop
        mov edx, dword ptr ds : [eax+0x18]
        movzx edx, word ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        add edx, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+edx*4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        je public_6c30b48
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 8
        public_6c30b48 : nop
        mov dword ptr ds : [ecx], 0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c30b10)
    }
}

#undef public_6c30b21
#undef public_6c30b48
