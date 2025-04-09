#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_4102c0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_422120);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_4cc660);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4cc7af _public_4cc7af
#define public_4cc838 _public_4cc838

PROC_DECLARE(0x4cc660, internal_4cc660, public_4cc660);
extern "C" NAKED register_t __cdecl internal_4cc660()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        push 0xB71
        mov edi, ecx
        call public_421ed0
        push 0xBE2
        call public_421ed0
        mov esi, dword ptr ss : [esp+0x30]
        push esi
        call public_422950
        push 0x6A1
/*FIXUP push offset public_5d7220 @0x4cc68b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        push esi
        call public_422610
        push 0xBE2
        call public_421ed0
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        call public_4220a0
        push 0xC8
        push 0x80
        push 0x80
        call public_421a70
        push 8
        call public_421670
        xor ebx, ebx
        push ebx
        push ebx
        call public_421ca0
        mov ecx, dword ptr ds : [public_612370]
        push ecx
        push 0x40400000
        push 0xC0400000
        call public_421cc0
        mov edx, dword ptr ds : [public_612368]
        add esp, 0x44
        push ebx
        push edx
        call public_421ca0
        mov eax, dword ptr ds : [public_612370]
        push eax
        push 0x40400000
        push 0x40400000
        call public_421cc0
        mov ecx, dword ptr ds : [public_61236c]
        mov edx, dword ptr ds : [public_612368]
        push ecx
        push edx
        call public_421ca0
        mov eax, dword ptr ds : [public_612370]
        push eax
        push 0xC0400000
        push 0x40400000
        call public_421cc0
        mov ecx, dword ptr ds : [public_61236c]
        push ecx
        push ebx
        call public_421ca0
        mov edx, dword ptr ds : [public_612370]
        push edx
        push 0xC0400000
        push 0xC0400000
        call public_421cc0
        call public_421690
        mov al, 0x14
        mov byte ptr ss : [esp+0x4A], al
        mov byte ptr ss : [esp+0x49], al
        mov byte ptr ss : [esp+0x48], al
        lea eax, ss:[esp+0x48]
        push eax
        call public_410240
        add esp, 0x40
        push ebx
        push esi
        lea ecx, ss:[esp+0x34]
        push 1
        push ecx
        call public_4102c0
        push 0x18
        call public_5792b0
        add esp, 0x14
        test eax, eax
        jne public_4cc7af
        mov al, 0xFF
        lea edx, ss:[esp+0x28]
        push edx
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x2C], al
        mov byte ptr ss : [esp+0x2D], al
        mov byte ptr ss : [esp+0x2E], al
        call public_410240
        add esp, 4
        public_4cc7af : nop
        push 0xB44
        call public_421dd0
        push 0xB71
        call public_421dd0
        push 4
        call public_422120
        push 1
        call public_422190
        mov edi, dword ptr ds : [edi+0x170]
        add esp, 0x10
        cmp edi, ebx
        je public_4cc838
        cmp dword ptr ds : [edi], ebx
        je public_4cc838
        mov eax, dword ptr ds : [public_5c6d58]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [edi]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x28]
        public_4cc838 : nop
        call public_4101e0
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x4cc660)
    }
}

#undef public_4cc7af
#undef public_4cc838
