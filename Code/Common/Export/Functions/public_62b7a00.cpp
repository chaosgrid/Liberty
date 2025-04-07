#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62b7a69 _public_62b7a69

PROC_DECLARE(0x62b7a00, internal_62b7a00, public_62b7a00);
extern "C" NAKED register_t __cdecl internal_62b7a00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [edi], 0
        mov esi, ecx
        je public_62b7a69
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax]
        push 0
        push 0
        push edi
        push edx
        push ecx
        push eax
        call dword ptr ds : [ebx+0x24]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1C0], eax
        jne public_62b7a69
        mov ecx, dword ptr ds : [esi+0x88]
        add ecx, 8
        mov ebx, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push edi
        push 0xE3
/*FIXUP push offset public_639e820 @0x62b7a59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e820
/*FIXUP push offset public_639e2e0 @0x62b7a5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e2e0
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_62b7a69 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b7a00)
    }
}

#undef public_62b7a69
