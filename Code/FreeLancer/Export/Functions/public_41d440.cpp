#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_41d440);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8a42);

#define public_41d516 _public_41d516
#define public_41d54e _public_41d54e

PROC_DECLARE(0x41d440, internal_41d440, public_41d440);
extern "C" NAKED register_t __cdecl internal_41d440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8a42 @0x41d442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8a42
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        xor ebx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x8C]
        push eax
        mov byte ptr ss : [esp+0x88], 1
        call dword ptr ds : [public_5c60a0]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        cmp eax, ebx
        je public_41d516
        cmp word ptr ds : [eax], bx
        jne public_41d54e
        public_41d516 : nop
        push 0x18
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_41c970
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x8C]
        push edx
        call dword ptr ds : [public_5c609c]
        lea eax, ss:[esp+0x50]
        add esp, 0x10
        mov dword ptr ss : [esp+0xC], eax
        public_41d54e : nop
        push eax
        call dword ptr ds : [public_5c71c8]
        mov esi, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [esi]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_5c70b4]
        mov eax, dword ptr ds : [esi]
        lea edx, ds:[edi+edi]
        add eax, edx
        mov dword ptr ds : [esi], eax
        mov esi, dword ptr ds : [public_5c6098]
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x78], bl
        call esi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x70]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 
        UNREACHABLE_TRAP(0x41d440)
    }
}

#undef public_41d516
#undef public_41d54e
