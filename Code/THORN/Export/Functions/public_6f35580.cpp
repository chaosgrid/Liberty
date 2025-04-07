#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22500);
CLANG_FORWARD_PROC_SYMBOL(public_6f225f0);

#define public_6f355cc _public_6f355cc
#define public_6f35600 _public_6f35600
#define public_6f35696 _public_6f35696
#define public_6f356a7 _public_6f356a7

PROC_DECLARE(0x6f35580, internal_6f35580, public_6f35580);
extern "C" NAKED register_t __cdecl internal_6f35580()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx-8]
        push esi
        push edi
        lea edi, ds:[ebx-8]
        push edi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ebx]
        mov esi, eax
        push ebx
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [ecx+0x14]
        test esi, esi
        je public_6f356a7
        cmp eax, dword ptr ss : [ebp+0x10]
        ja public_6f356a7
        mov ecx, dword ptr ds : [ebx+4]
        call public_6f225f0
        test al, al
        mov eax, offset public_6f5ff7c
        jne public_6f355cc
        mov eax, offset public_6f5ff74
        public_6f355cc : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push eax
/*FIXUP push offset public_6f5f68c @0x6f355d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f68c
        push edx
        call dword ptr ds : [public_6f5a06c]
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 0xC
        push 0
        mov esi, eax
        call public_6f22500
        mov eax, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        test eax, eax
        jbe public_6f35696
        lea esp, ss:[esp]
        public_6f35600 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        push edi
        call dword ptr ds : [eax+0x18]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [ebp+0xC]
        sub esp, 0x18
        fstp qword ptr ss : [esp+0x10]
        lea eax, ds:[esi+edx]
        fld dword ptr ss : [esp+0x30]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6f5ff64 @0x6f3562c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff64
        push eax
        call dword ptr ds : [public_6f5a06c]
        mov ecx, dword ptr ds : [edi]
        add esp, 0x20
        lea edx, ss:[esp+0x20]
        push edx
        push ebx
        push edi
        add esi, eax
        call dword ptr ds : [ecx+0x30]
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp+0xC]
        sub esp, 0x20
        fstp qword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+eax]
        fld dword ptr ss : [esp+0x48]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x44]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6f5ff84 @0x6f35671*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff84
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esi, eax
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 0x28
        cmp esi, eax
        jae public_6f35696
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        cmp ebx, eax
        jb public_6f35600
        public_6f35696 : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6f356a7
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6f356a7 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f35580)
    }
}

#undef public_6f355cc
#undef public_6f35600
#undef public_6f35696
#undef public_6f356a7
