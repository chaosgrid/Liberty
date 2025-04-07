#include "Common-PCH.h"


#define public_6295c03 _public_6295c03

PROC_DECLARE(0x6295bf0, internal_6295bf0, public_6295bf0);
extern "C" NAKED register_t __cdecl internal_6295bf0()
{
    __asm
    {
        mov eax, ecx
        mov cx, word ptr ds : [eax]
        cmp cx, word ptr ds : [public_63a4aa4]
        jne public_6295c03
        xor al, al
        ret 4
        public_6295c03 : nop
        mov edx, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax+0xC]
        push edi
        mov edi, edx
        add eax, 0x30
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ds : [eax]
        add edx, 0x24
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [edx+8], eax
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6295bf0)
    }
}

#undef public_6295c03
