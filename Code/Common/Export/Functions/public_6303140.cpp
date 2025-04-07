#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6303140);

#define public_63031fe _public_63031fe
#define public_6303204 _public_6303204

PROC_DECLARE(0x6303140, internal_6303140, public_6303140);
extern "C" NAKED register_t __cdecl internal_6303140()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        test ebx, ebx
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        push edi
        mov dword ptr ds : [esi], 0
        je public_63031fe
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        je public_63031fe
        mov dword ptr ss : [esp+0x10], offset public_639b84c
        mov ecx, 0xB
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [public_639905c]
        mov dword ptr ss : [esp+0x1C], 0x80000000
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x2C], 0x8000080
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0xC], 0x34
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        cmp dword ptr ds : [esi], 0
        jne public_6303204
        mov edx, dword ptr ds : [public_6399028]
        push ebx
        push 0xD8
/*FIXUP push offset public_63a26d8 @0x63031e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a26d8
        mov eax, 0x100001
/*FIXUP push offset public_63a26ac @0x63031ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a26ac
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 
        public_63031fe : nop
        mov dword ptr ds : [esi], 0
        public_6303204 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6303140)
    }
}

#undef public_63031fe
#undef public_6303204
