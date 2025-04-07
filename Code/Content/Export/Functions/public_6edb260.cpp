#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6edb260);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb730);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab351);

#define public_6edb394 _public_6edb394
#define public_6edb430 _public_6edb430
#define public_6edb512 _public_6edb512
#define public_6edb5ae _public_6edb5ae
#define public_6edb68b _public_6edb68b
#define public_6edb6f1 _public_6edb6f1
#define public_6edb6f4 _public_6edb6f4

PROC_DECLARE(0x6edb260, internal_6edb260, public_6edb260);
extern "C" NAKED register_t __cdecl internal_6edb260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab351 @0x6edb262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab351
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2A0
        mov eax, dword ptr ss : [esp+0x2B4]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x2BC]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x1B]
        mov dword ptr ds : [ebx+8], ecx
        xor edi, edi
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[ebx+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x2C0]
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x2C4]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x2C0], edi
        mov dword ptr ds : [ebx], offset public_6fb6980
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edb6f1
        push 0x10
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edb6f1
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x2C0]
        push edx
        call public_6f73930
        mov esi, eax
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edb6f4
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        call public_6eb6b30
        cmp eax, 4
        jae public_6edb394
        push 0x10
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+4], esi
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+8], edx
        public_6edb394 : nop
        mov ecx, esi
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_6edb512
        lea ecx, ss:[esp+0x2C]
        call public_6eac620
        mov esi, dword ptr ds : [esi+0x154]
        lea eax, ss:[esp+0x2C]
        push esi
        push eax
        mov byte ptr ss : [esp+0x2C0], 1
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x2C]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x2C]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x2B8], 0
        call public_6eec8d0
/*FIXUP push offset public_6fb696c @0x6edb3f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb696c
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x11C], edi
        mov byte ptr ss : [esp+0x120], 0
        call public_6ead640
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x4C], edi
        mov byte ptr ss : [esp+0x50], 0
        mov eax, offset public_6fb6844
        jne public_6edb430
        mov eax, offset public_6fb6840
/*FIXUP public_6edb430 : nop
        push offset public_6fb572c @0x6edb430*/
  FIXUP public_6edb430 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        lea ecx, ss:[esp+0x124]
        push ecx
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_6fb6838 @0x6edb442*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6838
        push edx
        call public_6eec2b0
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, 0x11
        lea esi, ss:[esp+0x64]
        lea edi, ss:[esp+0x1B8]
        rep movsd
/*FIXUP push offset public_6fb62ec @0x6edb463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea ecx, ss:[esp+0x1C0]
        push ecx
        lea edx, ss:[esp+0x204]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0xB8]
        mov ecx, 0x11
        lea edi, ss:[esp+0xB4]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x28
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x4C]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x54], 0
        mov byte ptr ss : [esp+0x58], 0
        call dword ptr ds : [public_6fb3454]
        mov ecx, 0x11
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0x98]
        lea edx, ss:[esp+0x9C]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6308 @0x6edb508*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6308
        jmp public_6edb68b
        public_6edb512 : nop
        mov ecx, esi
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        je public_6edb6f1
        lea ecx, ss:[esp+0x2C]
        call public_6eac620
        mov esi, dword ptr ds : [esi+0x154]
        lea eax, ss:[esp+0x2C]
        push esi
        push eax
        mov byte ptr ss : [esp+0x2C0], 2
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x2C]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x2C]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x2B8], 0
        call public_6eec8d0
/*FIXUP push offset public_6fb6958 @0x6edb573*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6958
        lea ecx, ss:[esp+0xD8]
        mov dword ptr ss : [esp+0xD8], edi
        mov byte ptr ss : [esp+0xDC], 0
        call public_6ead640
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x4C], edi
        mov byte ptr ss : [esp+0x50], 0
        mov eax, offset public_6fb6844
        jne public_6edb5ae
        mov eax, offset public_6fb6840
/*FIXUP public_6edb5ae : nop
        push offset public_6fb572c @0x6edb5ae*/
  FIXUP public_6edb5ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        lea ecx, ss:[esp+0xE0]
        push ecx
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_6fb6838 @0x6edb5c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6838
        push edx
        call public_6eec2b0
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, 0x11
        lea esi, ss:[esp+0x64]
        lea edi, ss:[esp+0x174]
        rep movsd
/*FIXUP push offset public_6fb62ec @0x6edb5e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea ecx, ss:[esp+0x17C]
        push ecx
        lea edx, ss:[esp+0x248]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0xB8]
        mov ecx, 0x11
        lea edi, ss:[esp+0xB4]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x28
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x4C]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x54], 0
        mov byte ptr ss : [esp+0x58], 0
        call dword ptr ds : [public_6fb3454]
        mov ecx, 0x11
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0x98]
        lea edx, ss:[esp+0x9C]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6948 @0x6edb686*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6948
        public_6edb68b : nop
        call esi
        add esp, 4
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x20]
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        lea eax, ss:[esp+0x270]
        push eax
        call public_6eeb730
        sub esp, 0x3C
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        jmp public_6edb6f4
        public_6edb6f1 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edb6f4 : nop
        mov ecx, dword ptr ss : [esp+0x2B0]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x2AC
        ret 0xC
        UNREACHABLE_TRAP(0x6edb260)
    }
}

#undef public_6edb394
#undef public_6edb430
#undef public_6edb512
#undef public_6edb5ae
#undef public_6edb68b
#undef public_6edb6f1
#undef public_6edb6f4
