#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303550);

#define public_630f0e0 _public_630f0e0
#define public_630f135 _public_630f135

PROC_DECLARE(0x630f070, internal_630f070, public_630f070);
extern "C" NAKED register_t __cdecl internal_630f070()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6399040]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [public_6399040]
        mov esi, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push esi
/*FIXUP push offset _public_6303550 @0x630f0ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6303550
        push eax
        call dword ptr ds : [ecx+0x14]
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        je public_630f135
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_630f135
        push edi
        lea esp, ss:[esp]
        public_630f0e0 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [public_6399040]
        mov edi, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push edi
/*FIXUP push offset _public_6303550 @0x630f110*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6303550
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_630f0e0
        pop edi
        public_630f135 : nop
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x630f070)
    }
}

#undef public_630f0e0
#undef public_630f135
