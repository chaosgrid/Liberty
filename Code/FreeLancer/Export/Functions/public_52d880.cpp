#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427a10);
CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_429040);
CLANG_FORWARD_PROC_SYMBOL(public_52c830);
CLANG_FORWARD_PROC_SYMBOL(public_52d880);
CLANG_FORWARD_JUMP_SYMBOL(public_5c04b8);

#define public_52d959 _public_52d959
#define public_52d95b _public_52d95b
#define public_52d9e5 _public_52d9e5

PROC_DECLARE(0x52d880, internal_52d880, public_52d880);
extern "C" NAKED register_t __cdecl internal_52d880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c04b8 @0x52d882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c04b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x48]
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], edi
        call public_52c830
        mov edx, dword ptr ds : [edi+4]
        xor ebx, ebx
        mov dword ptr ds : [edi+0x40], ebx
        mov dword ptr ds : [edi], offset public_5dd5d8
        mov eax, dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+0x84]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52d9e5
        mov ecx, dword ptr ds : [public_5c6d44]
        cmp dword ptr ds : [ecx], ebx
        je public_52d9e5
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+4]
        push esi
        add ecx, 0x84
        push 1
        push ecx
        call public_427a10
        push 0x64
        call public_428f80
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_52d959
        push 1
        mov ecx, esi
        call public_429040
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], 0x3F800000
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], 0x43B40000
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c9efc
        mov ecx, esi
        jmp public_52d95b
        public_52d959 : nop
        xor ecx, ecx
        public_52d95b : nop
        mov dword ptr ds : [edi+0x40], ecx
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [edi+0x40]
        lea esi, ss:[esp+0x10]
        push esi
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x94]
        pop esi
        public_52d9e5 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, edi
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x52d880)
    }
}

#undef public_52d959
#undef public_52d95b
#undef public_52d9e5
