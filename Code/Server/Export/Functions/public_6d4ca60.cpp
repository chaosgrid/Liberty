#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ca60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63408);

#define public_6d4cb25 _public_6d4cb25
#define public_6d4cb82 _public_6d4cb82
#define public_6d4cb84 _public_6d4cb84
#define public_6d4cb8d _public_6d4cb8d
#define public_6d4cbbe _public_6d4cbbe
#define public_6d4cbc0 _public_6d4cbc0
#define public_6d4cbda _public_6d4cbda

PROC_DECLARE(0x6d4ca60, internal_6d4ca60, public_6d4ca60);
extern "C" NAKED register_t __cdecl internal_6d4ca60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63408 @0x6d4ca62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63408
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [public_6d64560]
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        push eax
        mov ecx, edi
        call ebp
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [esi]
        lea edx, ds:[eax+1]
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi], edx
        call ebp
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
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
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov eax, dword ptr ss : [esp+0x54]
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x48], 1
        call dword ptr ds : [public_6d64938]
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64934]
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, ebx
        jle public_6d4cbda
        mov dword ptr ss : [esp+0x10], eax
        public_6d4cb25 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        push eax
        mov ecx, edi
        call ebp
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [esi]
        lea edx, ds:[eax+1]
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi], edx
        call ebp
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        push eax
        mov ecx, edi
        call ebp
        cmp word ptr ss : [esp+0x50], 0x21
        mov byte ptr ss : [esp+0x18], al
        jne public_6d4cb8d
        push 0x18
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x54], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x44], 2
        je public_6d4cb82
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push eax
        call public_6d4ca60
        jmp public_6d4cb84
        public_6d4cb82 : nop
        xor eax, eax
        public_6d4cb84 : nop
        mov byte ptr ss : [esp+0x44], 1
        mov dword ptr ss : [esp+0x54], eax
        public_6d4cb8d : nop
        push 0xC
        call dword ptr ds : [public_6d64930]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x44], 3
        je public_6d4cbbe
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push ecx
        push edx
        mov ecx, eax
        call dword ptr ds : [public_6d6492c]
        jmp public_6d4cbc0
        public_6d4cbbe : nop
        xor eax, eax
        public_6d4cbc0 : nop
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x48], 1
        call dword ptr ds : [public_6d64928]
        dec dword ptr ss : [esp+0x10]
        jne public_6d4cb25
        public_6d4cbda : nop
        mov esi, dword ptr ss : [esp+0x4C]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64894]
        mov dword ptr ss : [esp+0x1C], 1
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x44], bl
        call dword ptr ds : [public_6d64694]
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x6d4ca60)
    }
}

#undef public_6d4cb25
#undef public_6d4cb82
#undef public_6d4cb84
#undef public_6d4cb8d
#undef public_6d4cbbe
#undef public_6d4cbc0
#undef public_6d4cbda
