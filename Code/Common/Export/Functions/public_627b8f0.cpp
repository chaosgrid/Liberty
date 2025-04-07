#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b8f0);
CLANG_FORWARD_PROC_SYMBOL(public_627ba10);
CLANG_FORWARD_PROC_SYMBOL(public_6303140);

#define public_627b9b0 _public_627b9b0
#define public_627b9e0 _public_627b9e0

PROC_DECLARE(0x627b8f0, internal_627b8f0, public_627b8f0);
extern "C" NAKED register_t __cdecl internal_627b8f0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        cmp esi, ebx
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        je public_627b9e0
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        pop edi
        je public_627b9e0
        mov eax, dword ptr ds : [public_6399034]
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x18], offset public_639b570
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x14], 0x14
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
/*FIXUP push offset public_639b55c @0x627b95d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b55c
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
/*FIXUP push offset public_639b558 @0x627b96f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b558
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        call public_6303140
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0xC
        cmp eax, ebx
        je public_627b9b0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x10]
        lea eax, ss:[esp+0x28]
        push eax
        call public_627ba10
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 4
        pop esi
        pop ebx
        add esp, 0x1C
        ret 
        lea esp, ss:[esp]
        public_627b9b0 : nop
        mov ecx, dword ptr ds : [public_6399028]
        push esi
        push 0x30
/*FIXUP push offset public_639b52c @0x627b9b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b52c
        mov eax, 0x100001
/*FIXUP push offset public_639b4fc @0x627b9c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b4fc
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        add esp, 0x14
        push eax
        call dword ptr ds : [edx+8]
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 
/*FIXUP public_627b9e0 : nop
        push offset public_639b4d8 @0x627b9e0*/
  FIXUP public_627b9e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b4d8
        push 0x18
/*FIXUP push offset public_639b52c @0x627b9e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b52c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x627b9f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x627b8f0)
    }
}

#undef public_627b9b0
#undef public_627b9e0
