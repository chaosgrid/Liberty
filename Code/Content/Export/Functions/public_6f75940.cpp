#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5960);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f74ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75940);
CLANG_FORWARD_PROC_SYMBOL(public_6f77090);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb01ff);

#define public_6f759af _public_6f759af
#define public_6f759e0 _public_6f759e0
#define public_6f759f9 _public_6f759f9
#define public_6f75a68 _public_6f75a68
#define public_6f75a79 _public_6f75a79
#define public_6f75a8e _public_6f75a8e
#define public_6f75ab3 _public_6f75ab3
#define public_6f75ad8 _public_6f75ad8
#define public_6f75ae1 _public_6f75ae1
#define public_6f75b35 _public_6f75b35
#define public_6f75b40 _public_6f75b40
#define public_6f75b4f _public_6f75b4f
#define public_6f75b67 _public_6f75b67
#define public_6f75b9b _public_6f75b9b
#define public_6f75ba4 _public_6f75ba4

PROC_DECLARE(0x6f75940, internal_6f75940, public_6f75940);
extern "C" NAKED register_t __cdecl internal_6f75940()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb01ff @0x6f75948*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb01ff
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_6fb300c]
        lea eax, ds:[edi+0x48]
        push eax
        lea ecx, ss:[esp+0x10]
        xor ebx, ebx
        push ecx
        mov dword ptr ss : [esp+0x1584], ebx
        call dword ptr ds : [public_6fb359c]
        add esp, 8
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, edi
        call public_6f748a0
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f759af
        xor eax, eax
        mov al, byte ptr ds : [edi+0x11C]
        push eax
        call public_6f5a7c0
        add esp, 4
        public_6f759af : nop
        push ebp
        push esi
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3028]
        push 1
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6f74ae0
        mov ecx, edi
        call public_6f77090
        mov esi, dword ptr ds : [edi+0x8C]
        cmp esi, dword ptr ds : [edi+0x90]
        je public_6f759f9
        mov edi, edi
        public_6f759e0 : nop
        push 1
        mov ecx, esi
        call public_6ed5960
        mov eax, dword ptr ds : [edi+0x90]
        add esi, 0x548
        cmp esi, eax
        jne public_6f759e0
        public_6f759f9 : nop
        lea edx, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0x1584], 1
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 2
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6fb32ac]
        mov esi, dword ptr ds : [public_6fb32a8]
        je public_6f75a8e
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6f75a79
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6f75a68
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6f75a68 : nop
        mov edx, dword ptr ss : [esp+0x1450]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6f75a79 : nop
        mov eax, dword ptr ss : [esp+0x144C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6f75a8e : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_6fb3390]
        je public_6f75ab3
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6f75ab3 : nop
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x145C], ebx
        je public_6f75ae1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f75ad8
        cmp cl, 0xFF
        je public_6f75ad8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f75ae1
        public_6f75ad8 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f75ae1 : nop
        mov dword ptr ss : [esp+0x1440], ebx
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov ecx, dword ptr ds : [public_6fb3304]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6f75b4f
        cmp dword ptr ss : [esp+0x28], ebx
        je public_6f75b40
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_6f75b35
        push eax
        call ebp
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_6f75b35 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call esi
        mov dword ptr ss : [esp+0x28], ebx
        public_6f75b40 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        public_6f75b4f : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        pop esi
        pop ebp
        je public_6f75b67
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        public_6f75b67 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6f75ba4
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f75b9b
        cmp cl, 0xFF
        je public_6f75b9b
        dec cl
        pop edi
        mov byte ptr ds : [eax], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        public_6f75b9b : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f75ba4 : nop
        mov ecx, dword ptr ss : [esp+0x1574]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x6f75940)
    }
}

#undef public_6f759af
#undef public_6f759e0
#undef public_6f759f9
#undef public_6f75a68
#undef public_6f75a79
#undef public_6f75a8e
#undef public_6f75ab3
#undef public_6f75ad8
#undef public_6f75ae1
#undef public_6f75b35
#undef public_6f75b40
#undef public_6f75b4f
#undef public_6f75b67
#undef public_6f75b9b
#undef public_6f75ba4
