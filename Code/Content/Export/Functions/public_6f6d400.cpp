#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d400);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafdd0);

#define public_6f6d434 _public_6f6d434
#define public_6f6d43f _public_6f6d43f
#define public_6f6d460 _public_6f6d460
#define public_6f6d46b _public_6f6d46b
#define public_6f6d46d _public_6f6d46d
#define public_6f6d4b4 _public_6f6d4b4
#define public_6f6d4de _public_6f6d4de

PROC_DECLARE(0x6f6d400, internal_6f6d400, public_6f6d400);
extern "C" NAKED register_t __cdecl internal_6f6d400()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ds : [public_6fd1cb0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafdd0 @0x6f6d40e*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafdd0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6fd1cac]
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        cmp eax, ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        je public_6f6d4de
        mov edx, dword ptr ds : [edi]
        public_6f6d434 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d43f
        add eax, 0x14
        cmp eax, ecx
        jne public_6f6d434
        public_6f6d43f : nop
        cmp eax, ecx
        je public_6f6d4de
        mov ecx, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ss : [esp+0x58]
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        je public_6f6d46b
        mov edx, dword ptr ds : [edi]
        lea ebx, ds:[ebx]
        public_6f6d460 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6d46d
        add eax, 4
        cmp eax, ecx
        jne public_6f6d460
        public_6f6d46b : nop
        mov eax, ecx
        public_6f6d46d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f6d4b4
        push edi
        push ecx
        mov ecx, esi
        call public_6eb5770
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x5C], 1
        call public_6eb5f30
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6fa6e80
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 
        public_6f6d4b4 : nop
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x60], 0
        call public_6fa6e80
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 
        public_6f6d4de : nop
        mov cl, byte ptr ss : [esp+0x58]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x24], cl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov esi, dword ptr ss : [esp+0x58]
        push esi
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call public_6eb5770
        push esi
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x5C], 1
        call public_6eb5f30
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x5C], eax
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6fa6e80
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6eb35b0
        mov eax, dword ptr ds : [public_6fd1cb0]
        lea ecx, ss:[esp+0x34]
        push ecx
        push 1
        push eax
        mov ecx, offset public_6fd1ca8
        mov byte ptr ss : [esp+0x5C], 1
        call public_6f6f0d0
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x58], bl
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6f6d400)
    }
}

#undef public_6f6d434
#undef public_6f6d43f
#undef public_6f6d460
#undef public_6f6d46b
#undef public_6f6d46d
#undef public_6f6d4b4
#undef public_6f6d4de
