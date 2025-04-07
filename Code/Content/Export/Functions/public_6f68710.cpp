#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68710);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68740 _public_6f68740
#define public_6f68752 _public_6f68752
#define public_6f687af _public_6f687af
#define public_6f687cc _public_6f687cc
#define public_6f687d6 _public_6f687d6
#define public_6f6880a _public_6f6880a

PROC_DECLARE(0x6f68710, internal_6f68710, public_6f68710);
extern "C" NAKED register_t __cdecl internal_6f68710()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ds : [public_6fce76c]
        push ebx
        push ebp
        push esi
        mov ebx, eax
        inc eax
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [public_6fce76c], eax
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], edi
        je public_6f68752
        mov edx, dword ptr ds : [ecx+4]
        lea ebx, ds:[ebx]
        public_6f68740 : nop
        mov ebp, dword ptr ds : [eax+8]
        cmp dword ptr ss : [ebp+4], edx
        je public_6f6880a
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f68740
        public_6f68752 : nop
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x58]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push 0x38
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f687af
        mov edi, eax
        public_6f687af : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [edx], eax
        je public_6f687cc
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        public_6f687cc : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov edi, eax
        public_6f687d6 : nop
        mov dword ptr ds : [eax+8], ecx
        push 0x41F00000
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6fd1c74 @0x6f687e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0x14
        public_6f6880a : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax+0x34], 1
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x18], ebp
        mov dword ptr ds : [eax+0x24], edx
        mov edx, dword ptr ds : [ecx]
        add eax, 0x28
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        jmp public_6f687d6
        UNREACHABLE_TRAP(0x6f68710)
    }
}

#undef public_6f68740
#undef public_6f68752
#undef public_6f687af
#undef public_6f687cc
#undef public_6f687d6
#undef public_6f6880a
