#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f58190);
CLANG_FORWARD_PROC_SYMBOL(public_6f58870);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf7c0);

#define public_6f581c6 _public_6f581c6
#define public_6f58210 _public_6f58210
#define public_6f5823a _public_6f5823a
#define public_6f58292 _public_6f58292
#define public_6f582aa _public_6f582aa
#define public_6f582c4 _public_6f582c4
#define public_6f582cf _public_6f582cf
#define public_6f582d1 _public_6f582d1
#define public_6f5830b _public_6f5830b
#define public_6f5831a _public_6f5831a
#define public_6f58323 _public_6f58323
#define public_6f58335 _public_6f58335
#define public_6f5839b _public_6f5839b
#define public_6f583ae _public_6f583ae

PROC_DECLARE(0x6f58190, internal_6f58190, public_6f58190);
extern "C" NAKED register_t __cdecl internal_6f58190()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faf7c0 @0x6f58198*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf7c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        mov ecx, edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f583ae
        push ebx
        mov ebx, dword ptr ds : [public_6fb3054]
        push ebp
        push esi
/*FIXUP public_6f581c6 : nop
        push offset public_6fbba28 @0x6f581c6*/
  FIXUP public_6f581c6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbba28
        mov ecx, edi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f5839b
        mov al, byte ptr ss : [esp+0x74]
        xor esi, esi
        mov byte ptr ss : [esp+0x40], al
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x6C], esi
        call dword ptr ds : [public_6fb3030]
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f58335
        nop 
        public_6f58210 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f58216*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, edi
        call esi
        test al, al
        mov ecx, edi
        je public_6f5823a
        call ebx
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f58323
/*FIXUP public_6f5823a : nop
        push offset public_6fbba20 @0x6f5823a*/
  FIXUP public_6f5823a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbba20
        call esi
        test al, al
        je public_6f58323
        mov ecx, edi
        call ebx
        mov esi, dword ptr ds : [public_6fb3000]
        push eax
        call esi
        add esp, 4
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_6fd0ddc
        mov dword ptr ss : [esp+0x20], eax
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_6fd0de0]
        je public_6f582aa
        add eax, 0x10
        test eax, eax
        je public_6f582aa
        mov ebp, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ebp
        je public_6f58323
        public_6f58292 : nop
        push esi
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6f95e00
        add esi, 4
        cmp esi, ebp
        jne public_6f58292
        jmp public_6f58323
        public_6f582aa : nop
        mov ecx, edi
        call ebx
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f582cf
        public_6f582c4 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6f582d1
        add ecx, 4
        cmp ecx, edx
        jne public_6f582c4
        public_6f582cf : nop
        mov ecx, edx
        public_6f582d1 : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], ecx
        jne public_6f5830b
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6eae440
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x78], 1
        call public_6eb5f30
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        jmp public_6f5831a
        public_6f5830b : nop
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x78], 0
        push eax
        public_6f5831a : nop
        lea ecx, ss:[esp+0x30]
        call public_6fa6e80
        public_6f58323 : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f58210
        xor esi, esi
        public_6f58335 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x50], ecx
        push edx
        lea ecx, ss:[esp+0x58]
        call public_6eb35b0
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, offset public_6fd0ddc
        mov byte ptr ss : [esp+0x74], 1
        call public_6f58870
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x60], esi
        mov dword ptr ss : [esp+0x64], esi
        mov dword ptr ss : [esp+0x68], esi
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        public_6f5839b : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f581c6
        pop esi
        pop ebp
        pop ebx
        public_6f583ae : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6f58190)
    }
}

#undef public_6f581c6
#undef public_6f58210
#undef public_6f5823a
#undef public_6f58292
#undef public_6f582aa
#undef public_6f582c4
#undef public_6f582cf
#undef public_6f582d1
#undef public_6f5830b
#undef public_6f5831a
#undef public_6f58323
#undef public_6f58335
#undef public_6f5839b
#undef public_6f583ae
