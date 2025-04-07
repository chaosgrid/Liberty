#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_629ad70);
CLANG_FORWARD_PROC_SYMBOL(public_629fcc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393bf3);

#define public_629fd82 _public_629fd82

PROC_DECLARE(0x629fcc0, internal_629fcc0, public_629fcc0);
extern "C" NAKED register_t __cdecl internal_629fcc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393bf3 @0x629fcc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393bf3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        push ecx
        push edi
        push 0x400000
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], esi
        call public_629ad70
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [esi+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_639cbec
        mov ebx, dword ptr ds : [ebx+0x70]
        cmp byte ptr ds : [ebx], 0
        mov byte ptr ss : [esp+0x18], 1
        je public_629fd82
        mov ecx, edi
        call public_6262d50
        mov edi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ebx
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x20], eax
        je public_629fd82
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        push 2
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        call public_627d8a0
        add esp, 4
        public_629fd82 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x629fcc0)
    }
}

#undef public_629fd82
