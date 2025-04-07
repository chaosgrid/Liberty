#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1198);

#define public_6f85c8d _public_6f85c8d
#define public_6f85cee _public_6f85cee
#define public_6f85d00 _public_6f85d00
#define public_6f85d29 _public_6f85d29
#define public_6f85d34 _public_6f85d34

PROC_DECLARE(0x6f85c40, internal_6f85c40, public_6f85c40);
extern "C" NAKED register_t __cdecl internal_6f85c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1198 @0x6f85c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1198
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push ebp
        mov ebp, ecx
        xor ecx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov ebx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [ebx+0xC]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        jbe public_6f85cee
        mov eax, edi
        jge public_6f85c8d
        xor eax, eax
        public_6f85c8d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+edi*4]
        mov dword ptr ss : [esp+0x24], ecx
        add esp, 4
        lea ecx, ss:[esp+0x14]
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x18], esi
        public_6f85cee : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f85d34
        mov edi, dword ptr ss : [esp+0x3C]
        mov ebp, 2
        public_6f85d00 : nop
        mov eax, dword ptr ds : [esi+8]
        test dword ptr ds : [eax+0x40], edi
        je public_6f85d29
        cmp dword ptr ds : [eax+0x3C], ebp
        jne public_6f85d29
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+0x48]
        lea ecx, ss:[esp+0x34]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x40], eax
        call public_6f937c0
        public_6f85d29 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6f85d00
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f85d34 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [ebp]
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x44]
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0x1C
        UNREACHABLE_TRAP(0x6f85c40)
    }
}

#undef public_6f85c8d
#undef public_6f85cee
#undef public_6f85d00
#undef public_6f85d29
#undef public_6f85d34
