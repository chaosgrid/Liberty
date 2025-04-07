#include "Alchemy-PCH.h"


#define public_62430a2 _public_62430a2
#define public_62430c3 _public_62430c3

PROC_DECLARE(0x6243080, internal_6243080, public_6243080);
extern "C" NAKED register_t __cdecl internal_6243080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xC]
        shl eax, 4
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        add eax, ecx
        lea ecx, ds:[eax+0x10]
        cmp ecx, edx
        je public_62430c3
        lea eax, ds:[ecx-8]
        push edi
        public_62430a2 : nop
        mov edi, dword ptr ds : [ecx]
        add ecx, 0x10
        mov dword ptr ds : [eax-8], edi
        mov edi, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax-4], edi
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+4], edi
        add eax, 0x10
        cmp ecx, edx
        jne public_62430a2
        pop edi
        public_62430c3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        add eax, 0xFFFFFFF0
        mov dword ptr ds : [esi+0xC], eax
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6243080)
    }
}

#undef public_62430a2
#undef public_62430c3
