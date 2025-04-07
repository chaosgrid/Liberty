#include "Shading-PCH.h"


#define public_6ebd861 _public_6ebd861
#define public_6ebd872 _public_6ebd872
#define public_6ebd8a5 _public_6ebd8a5

PROC_DECLARE(0x6ebd810, internal_6ebd810, public_6ebd810);
extern "C" NAKED register_t __cdecl internal_6ebd810()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        push edi
        lea edx, ss:[esp+8]
        push edx
/*FIXUP push offset public_6ed4834 @0x6ebd821*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4834
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ebd872
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6ed1000]
        lea edi, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi]
        add esp, 4
        test eax, eax
        je public_6ebd861
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6ebd861 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x14]
        public_6ebd872 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        mov edi, eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6ebd8a5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ebd8a5 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ebd810)
    }
}

#undef public_6ebd861
#undef public_6ebd872
#undef public_6ebd8a5
