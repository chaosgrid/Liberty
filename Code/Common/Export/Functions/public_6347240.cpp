#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6347240);
CLANG_FORWARD_PROC_SYMBOL(public_6347380);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);
CLANG_FORWARD_PROC_SYMBOL(public_6351250);
CLANG_FORWARD_PROC_SYMBOL(public_6391fce);

#define public_6347378 _public_6347378

PROC_DECLARE(0x6347240, internal_6347240, public_6347240);
extern "C" NAKED register_t __cdecl internal_6347240()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xA4]
        push edi
        push 0x24
        call public_6347380
        mov dword ptr ds : [esi+0x1B4], eax
        mov dword ptr ds : [eax+0x20], 0
        fld dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x94]
        mov edx, dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ecx+0xFC]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x1B4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, ecx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ss : [esp+0xC], ecx
        fstp dword ptr ds : [eax]
        lea edi, ds:[esi+0xE4]
        fstp dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x1B4]
        add eax, 0x10
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        push edi
        mov dword ptr ds : [eax+0xC], ecx
        lea ebx, ds:[esi+0xD4]
        push ebx
        lea ecx, ss:[esp+0x20]
        call public_6351250
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x68]
        push ecx
        mov ecx, edi
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x6C]
        fmul dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp]
        push edi
        push ebx
        call public_6350df0
        lea edx, ds:[esi+0xF4]
        push edx
        mov ecx, edi
        call public_6350bc0
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x68]
        push ecx
        lea eax, ds:[esi+0xC4]
        lea ecx, ds:[esi+0xB4]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x6C]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ds:[esi+0x124]
        call public_628be60
        test byte ptr ds : [esi], 0xC0
        jne public_6347378
        fld dword ptr ds : [esi+0x70]
        fadd st(0), st
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x18]
        call public_6391fce
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x94]
        fld dword ptr ss : [esp+0x1C]
        call public_6391fce
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x98]
        fld dword ptr ss : [esp+0x20]
        call public_6391fce
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x9C]
        public_6347378 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6347240)
    }
}

#undef public_6347378
