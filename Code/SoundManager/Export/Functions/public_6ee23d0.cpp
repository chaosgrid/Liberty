#include "SoundManager-PCH.h"


#define public_6ee2488 _public_6ee2488

PROC_DECLARE(0x6ee23d0, internal_6ee23d0, public_6ee23d0);
extern "C" NAKED register_t __cdecl internal_6ee23d0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        push ebx
        fchs 
        push esi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+8]
        fchs 
        push edi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x1C]
        fchs 
        lea edx, ds:[eax+0xA8]
        mov ecx, edx
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], esi
        fstp dword ptr ss : [esp+0x14]
        fild dword ptr ds : [eax+0xA4]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], esi
        mov ecx, dword ptr ss : [esp+0x24]
        fld st(0)
        lea esi, ds:[eax+0xB4]
        fmul dword ptr ds : [eax+0xB0]
        mov edi, esi
        fst dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [eax+0xB0]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        fmul dword ptr ds : [eax+0xBC]
        mov ecx, dword ptr ds : [eax+0x128]
        test ecx, ecx
        fst dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+0xBC]
        je public_6ee2488
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx]
        mov edi, dword ptr ds : [ecx]
        push 1
        push ebx
        mov ebx, dword ptr ds : [eax+0xB8]
        mov eax, dword ptr ds : [eax+0xAC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        push eax
        push edx
        push ecx
        call dword ptr ds : [edi+0x34]
        public_6ee2488 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ee23d0)
    }
}

#undef public_6ee2488
