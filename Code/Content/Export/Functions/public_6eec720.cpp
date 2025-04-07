#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eec720);
CLANG_FORWARD_PROC_SYMBOL(public_6eed5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eedc10);
CLANG_FORWARD_PROC_SYMBOL(public_6eee680);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabdd0);

#define public_6eec810 _public_6eec810
#define public_6eec83a _public_6eec83a

PROC_DECLARE(0x6eec720, internal_6eec720, public_6eec720);
extern "C" NAKED register_t __cdecl internal_6eec720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabdd0 @0x6eec722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabdd0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        mov al, byte ptr ss : [esp+0x3C]
        push ebx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        mov byte ptr ss : [esp+0x20], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [esp+0x1C]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x30], edx
        mov byte ptr ss : [esp+0x34], al
        call public_6eedc10
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        lea ecx, ss:[esp+0x38]
        call public_6eee680
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], 1
        call public_6eed5e0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x4C], bl
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x48], ecx
        je public_6eec83a
        lea ebx, ds:[ebx]
        public_6eec810 : nop
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x48], esi
        jne public_6eec810
        mov eax, dword ptr ss : [esp+0x20]
        public_6eec83a : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6eec720)
    }
}

#undef public_6eec810
#undef public_6eec83a
