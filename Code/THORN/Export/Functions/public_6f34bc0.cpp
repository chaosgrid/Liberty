#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22500);
CLANG_FORWARD_PROC_SYMBOL(public_6f225f0);

#define public_6f34c0c _public_6f34c0c
#define public_6f34c35 _public_6f34c35
#define public_6f34c82 _public_6f34c82
#define public_6f34c93 _public_6f34c93

PROC_DECLARE(0x6f34bc0, internal_6f34bc0, public_6f34bc0);
extern "C" NAKED register_t __cdecl internal_6f34bc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
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
        je public_6f34c93
        cmp eax, dword ptr ss : [ebp+0x10]
        ja public_6f34c93
        mov ecx, dword ptr ds : [ebx+4]
        call public_6f225f0
        test al, al
        mov eax, offset public_6f5ff7c
        jne public_6f34c0c
        mov eax, offset public_6f5ff74
        public_6f34c0c : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push eax
/*FIXUP push offset public_6f5f68c @0x6f34c10*/
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
        jbe public_6f34c82
        public_6f34c35 : nop
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
/*FIXUP push offset public_6f5ff64 @0x6f34c61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ff64
        push eax
        call dword ptr ds : [public_6f5a06c]
        add esi, eax
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 0x20
        cmp esi, eax
        jae public_6f34c82
        mov eax, dword ptr ss : [esp+0x10]
        inc ebx
        cmp ebx, eax
        jb public_6f34c35
        public_6f34c82 : nop
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6f34c93
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6f34c93 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6f34bc0)
    }
}

#undef public_6f34c0c
#undef public_6f34c35
#undef public_6f34c82
#undef public_6f34c93
