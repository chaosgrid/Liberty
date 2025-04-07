#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c189f);

#define public_55f7ca _public_55f7ca
#define public_55f7f8 _public_55f7f8
#define public_55f89e _public_55f89e
#define public_55f9dc _public_55f9dc

PROC_DECLARE(0x55f660, internal_55f660, public_55f660);
extern "C" NAKED register_t __cdecl internal_55f660()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c189f @0x55f668*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c189f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5CC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x34A]
        xor ebx, ebx
        cmp al, bl
        push edi
        je public_55f9dc
        cmp byte ptr ds : [esi+0x349], bl
        je public_55f9dc
        cmp dword ptr ds : [esi+0x32C], ebx
        je public_55f7f8
        fld dword ptr ds : [esi+0x334]
        call public_5b7ec0
        fld dword ptr ds : [esi+0x330]
        mov edi, eax
        call public_5b7ec0
        mov ecx, dword ptr ds : [public_67eca8]
        mov ebp, eax
        push 0xFF
        lea eax, ss:[esp+0x3E0]
        push eax
        mov eax, dword ptr ds : [esi+0x32C]
        push eax
        push ecx
        call public_4347e0
        push ebp
        push edi
        lea edx, ss:[esp+0x3F4]
        push edx
        lea eax, ss:[esp+0x1F8]
/*FIXUP push offset public_5e1a00 @0x55f6f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1a00
        push eax
        call dword ptr ds : [public_5c70ec]
        add esp, 0x24
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5E4], ebx
        call public_4144b0
        or ebp, 0xFFFFFFFF
        push ebp
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x5EC], 1
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x60], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x74], bl
        lea ecx, ss:[esp+0x1DC]
        push ecx
        mov dword ptr ss : [esp+0x5E8], 2
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea edx, ds:[edi+1]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_4142a0
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        lea eax, ss:[esp+0x1E0]
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x20]
        mov word ptr ds : [edx+edi*2], bx
        push eax
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], ebx
        call public_4be370
        add esp, 0x10
        mov ebx, 3
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5E4], ebx
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x5E4], 5
        call public_4144f0
        mov byte ptr ss : [esp+0x5E4], 4
        public_55f7ca : nop
        lea ecx, ss:[esp+0x30]
        call public_445d70
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x5E4], bl
        call public_444e20
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x5E4], ebp
        call public_444e20
        jmp public_55f9dc
        public_55f7f8 : nop
        cmp dword ptr ds : [esi+0xCC], ebx
        je public_55f89e
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5E4], 6
        call public_4144b0
        or ebp, 0xFFFFFFFF
        push ebp
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x5EC], 7
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x60], ebx
        call public_413df0
        mov byte ptr ss : [esp+0x74], bl
        mov eax, dword ptr ds : [esi+0xCC]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x5E8], 8
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], eax
        call public_4be370
        add esp, 4
        mov ebx, 9
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x5E4], ebx
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x5E4], 0xB
        call public_4144f0
        mov byte ptr ss : [esp+0x5E4], 0xA
        jmp public_55f7ca
        public_55f89e : nop
        fld dword ptr ds : [esi+0x334]
        call public_5b7ec0
        fld dword ptr ds : [esi+0x330]
        mov edi, eax
        call public_5b7ec0
        push eax
        push edi
        lea ecx, ss:[esp+0xE4]
/*FIXUP push offset public_5e19f4 @0x55f8bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e19f4
        push ecx
        call dword ptr ds : [public_5c70ec]
        add esp, 0x10
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x5E4], 0xC
        call public_4144b0
        or ebp, 0xFFFFFFFF
        push ebp
        push ebx
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x5EC], 0xD
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x80], ebp
        mov dword ptr ss : [esp+0xC4], ebx
        call public_413df0
        mov byte ptr ss : [esp+0xD8], bl
        push ebp
        lea edx, ss:[esp+0xE0]
        push edx
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x5EC], 0xE
        call public_413df0
        lea eax, ss:[esp+0x78]
        push eax
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x80], ebx
        call public_4be370
        add esp, 4
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x5E4], 0xF
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x5E4], 0x11
        call public_4144f0
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x5E4], 0x10
        call public_445d70
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x5E4], 0xF
        call public_444e20
        mov eax, dword ptr ss : [esp+0x80]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x5E4], ebp
        je public_55f9dc
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        public_55f9dc : nop
        mov ecx, esi
        call public_5a17b0
        mov ecx, dword ptr ss : [esp+0x5DC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5D8
        ret 
        UNREACHABLE_TRAP(0x55f660)
    }
}

#undef public_55f7ca
#undef public_55f7f8
#undef public_55f89e
#undef public_55f9dc
