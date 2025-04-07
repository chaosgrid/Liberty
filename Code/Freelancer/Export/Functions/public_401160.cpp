#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401160);
CLANG_FORWARD_PROC_SYMBOL(public_401480);
CLANG_FORWARD_PROC_SYMBOL(public_4016f0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8358);

#define public_401197 _public_401197
#define public_4011c3 _public_4011c3
#define public_4012b0 _public_4012b0
#define public_4012cf _public_4012cf
#define public_4012e5 _public_4012e5

PROC_DECLARE(0x401160, internal_401160, public_401160);
extern "C" NAKED register_t __cdecl internal_401160()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8358 @0x401168*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8358
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push esi
        mov esi, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax], 0
        jne public_401197
        or eax, 0xFFFFFFFF
        pop esi
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        public_401197 : nop
        push ebx
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_616440
        or edi, 0xFFFFFFFF
        call public_4016f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_616444]
        je public_4011c3
        inc dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+0x14]
        public_4011c3 : nop
        cmp edi, 0xFFFFFFFF
        mov ebx, edi
        jne public_4012e5
        mov eax, dword ptr ds : [public_5c6ddc]
        mov ecx, dword ptr ds : [eax]
        xor ebp, ebp
        cmp ecx, ebp
        je public_4012e5
        mov dword ptr ss : [esp+0x6C], ebp
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], offset public_5c7388
        xor eax, eax
        mov ecx, 0xB
        lea edi, ss:[esp+0x30]
        rep stosd
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov dword ptr ss : [esp+0x38], 0x80000000
        mov edi, 1
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x44], 3
        mov dword ptr ss : [esp+0x48], 0x8000080
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x28], 0x34
        mov dword ptr ss : [esp+0x58], ebx
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x70], ebp
        call dword ptr ds : [edx+0xC]
        cmp eax, ebp
        jne public_4012b0
        mov edx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_5c6dd4]
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6101d0]
        mov ebp, eax
        mov ebx, eax
        inc eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ds : [public_6101d0], eax
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_616440
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], ebp
        call public_401480
        jmp public_4012cf
        lea ecx, ds:[ecx]
        public_4012b0 : nop
        mov esi, dword ptr ds : [esi]
        push esi
        push 0x5C
/*FIXUP push offset public_5c735c @0x4012b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c735c
        mov eax, 0x100001
/*FIXUP push offset public_5c7334 @0x4012bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7334
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4012cf : nop
        mov eax, dword ptr ss : [esp+0x6C]
        test eax, eax
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        je public_4012e5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_4012e5 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x401160)
    }
}

#undef public_401197
#undef public_4011c3
#undef public_4012b0
#undef public_4012cf
#undef public_4012e5
