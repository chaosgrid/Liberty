#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f830);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6167a);

#define public_6d0d3d5 _public_6d0d3d5
#define public_6d0d3d7 _public_6d0d3d7
#define public_6d0d3e8 _public_6d0d3e8
#define public_6d0d3f5 _public_6d0d3f5
#define public_6d0d3f7 _public_6d0d3f7
#define public_6d0d408 _public_6d0d408
#define public_6d0d434 _public_6d0d434
#define public_6d0d470 _public_6d0d470
#define public_6d0d489 _public_6d0d489

PROC_DECLARE(0x6d0d370, internal_6d0d370, public_6d0d370);
extern "C" NAKED register_t __cdecl internal_6d0d370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6167a @0x6d0d372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6167a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov ebx, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], ebp
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        push ebp
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x38], 2
        call dword ptr ds : [public_6d64594]
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x34], 3
        je public_6d0d3d5
        add eax, 8
        jmp public_6d0d3d7
        public_6d0d3d5 : nop
        xor eax, eax
        public_6d0d3d7 : nop
        cmp eax, dword ptr ss : [esp+0x14]
        je public_6d0d3e8
        push eax
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d6447c]
        public_6d0d3e8 : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, ebp
        je public_6d0d3f5
        add eax, 8
        jmp public_6d0d3f7
        public_6d0d3f5 : nop
        xor eax, eax
        public_6d0d3f7 : nop
        cmp eax, dword ptr ss : [esp+0x1C]
        je public_6d0d408
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d6447c]
        public_6d0d408 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x48]
        mov cl, byte ptr ds : [eax]
        mov esi, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x24], edx
        mov byte ptr ss : [esp+0x28], cl
        mov edi, dword ptr ds : [esi+4]
        push 0x20
        call public_6d60012
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [eax], esi
        jne public_6d0d434
        mov edi, eax
        public_6d0d434 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d0f830
        mov ecx, dword ptr ds : [ebx+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+0x1C], ecx
        cmp dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x34], 4
        je public_6d0d470
        push ebp
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d6447c]
        public_6d0d470 : nop
        cmp dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_6d0d489
        push ebp
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d6447c]
        public_6d0d489 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0x10
        UNREACHABLE_TRAP(0x6d0d370)
    }
}

#undef public_6d0d3d5
#undef public_6d0d3d7
#undef public_6d0d3e8
#undef public_6d0d3f5
#undef public_6d0d3f7
#undef public_6d0d408
#undef public_6d0d434
#undef public_6d0d470
#undef public_6d0d489
