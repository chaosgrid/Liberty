#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31d40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faea04);

#define public_6f31e70 _public_6f31e70
#define public_6f31e72 _public_6f31e72

PROC_DECLARE(0x6f31d40, internal_6f31d40, public_6f31d40);
extern "C" NAKED register_t __cdecl internal_6f31d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faea04 @0x6f31d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faea04
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi+4]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x4C], ebx
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6fb3038]
        mov ecx, dword ptr ds : [esi]
        push 0xC
        mov dword ptr ss : [esp+0x40], ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x50], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x48], 1
        je public_6f31e70
        push edi
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_6eb6be0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edi, ds:[esi+8]
        push edi
        mov byte ptr ss : [esp+0x58], 2
        mov dword ptr ds : [esi], offset public_6fb940c
        call dword ptr ds : [public_6fb34d8]
        lea edx, ss:[esp+0x4C]
        push edx
        push edi
        call dword ptr ds : [public_6fb3434]
        mov eax, dword ptr ds : [public_6fd0884]
        add esp, 0x14
        inc eax
        mov dword ptr ds : [public_6fd0884], eax
        pop edi
        jmp public_6f31e72
        public_6f31e70 : nop
        xor esi, esi
        public_6f31e72 : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp esi, ebx
        mov dword ptr ds : [eax], esi
        setne bl
        mov esi, dword ptr ds : [public_6fb3034]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x48], 3
        call esi
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x40]
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6f31d40)
    }
}

#undef public_6f31e70
#undef public_6f31e72
