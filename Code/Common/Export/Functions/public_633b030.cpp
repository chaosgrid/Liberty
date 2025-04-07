#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e9f0);

#define public_633b061 _public_633b061
#define public_633b0b4 _public_633b0b4

PROC_DECLARE(0x633b030, internal_633b030, public_633b030);
extern "C" NAKED register_t __cdecl internal_633b030()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x8C]
        test eax, eax
        push edi
        jne public_633b0b4
/*FIXUP push offset public_63a4948 @0x633b041*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4948
        call public_632e9f0
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        je public_633b0b4
        push esi
        public_633b061 : nop
        mov esi, dword ptr ds : [edi+0xC10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x84]
        jne public_633b061
        pop esi
        public_633b0b4 : nop
        mov eax, dword ptr ds : [ebx+0x8C]
        pop edi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x633b030)
    }
}

#undef public_633b061
#undef public_633b0b4
