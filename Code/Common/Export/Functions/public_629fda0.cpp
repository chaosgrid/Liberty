#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_629adb0);
CLANG_FORWARD_PROC_SYMBOL(public_629af40);
CLANG_FORWARD_PROC_SYMBOL(public_629fda0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393bf3);

#define public_629fe0a _public_629fe0a
#define public_629fe44 _public_629fe44

PROC_DECLARE(0x629fda0, internal_629fda0, public_629fda0);
extern "C" NAKED register_t __cdecl internal_629fda0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393bf3 @0x629fda2*/
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
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639cbec
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 1
        je public_629fe0a
        push eax
        call public_627dc80
        mov ecx, dword ptr ds : [esi+0x20]
        add esp, 4
        cmp ecx, 0xFFFFFFFF
        je public_629fe0a
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x20], 0xFFFFFFFF
        public_629fe0a : nop
        mov ecx, esi
        call public_629af40
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x10], 0
        je public_629fe44
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+0x20], 0xFFFFFFFF
        public_629fe44 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_639ca04
        call public_629adb0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629fda0)
    }
}

#undef public_629fe0a
#undef public_629fe44
