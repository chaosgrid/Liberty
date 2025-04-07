#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e940);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_629ef47 _public_629ef47
#define public_629ef4f _public_629ef4f

PROC_DECLARE(0x629eed0, internal_629eed0, public_629eed0);
extern "C" NAKED register_t __cdecl internal_629eed0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_629ef4f
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
        call public_630e940
        add esp, 0xC
        test al, al
        jne public_629ef47
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+4]
        push ebx
        mov ebx, dword ptr ds : [eax+0x88]
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+0x20]
        add ecx, 8
        mov ebp, 0x100002
        call public_6333e60
        push eax
        push edi
        lea ecx, ds:[ebx+8]
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x8E
/*FIXUP push offset public_639d980 @0x629ef34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d980
/*FIXUP push offset public_639d928 @0x629ef39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d928
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x1C
        pop edi
        pop ebp
        pop ebx
        public_629ef47 : nop
        mov eax, dword ptr ss : [esp+8]
        pop esi
        ret 4
        public_629ef4f : nop
        mov eax, dword ptr ds : [esi+0x24]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629eed0)
    }
}

#undef public_629ef47
#undef public_629ef4f
