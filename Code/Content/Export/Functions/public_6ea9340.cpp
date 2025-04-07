#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7d20);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9340);
CLANG_FORWARD_PROC_SYMBOL(public_6eacef0);
CLANG_FORWARD_PROC_SYMBOL(public_6eacf80);
CLANG_FORWARD_PROC_SYMBOL(public_6ead780);
CLANG_FORWARD_PROC_SYMBOL(public_6ead830);
CLANG_FORWARD_PROC_SYMBOL(public_6eae320);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9a4b);

#define public_6ea9488 _public_6ea9488
#define public_6ea949a _public_6ea949a

PROC_DECLARE(0x6ea9340, internal_6ea9340, public_6ea9340);
extern "C" NAKED register_t __cdecl internal_6ea9340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9a4b @0x6ea9342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9a4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        or edi, 0xFFFFFFFF
        mov esi, ecx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_6fb3030]
        mov ecx, dword ptr ds : [public_6fceec4]
        inc ecx
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ds : [public_6fceec4], ecx
        mov ebp, dword ptr ss : [esp+0xD8]
        push ebp
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xD0], ebx
        call public_6ea7d20
        mov ebp, dword ptr ss : [ebp+0x44]
        lea ecx, ss:[esp+0xA0]
        call public_6eacef0
        push eax
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0xD0], 1
        mov dword ptr ss : [esp+0x7C], ebp
        call public_6eae320
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x74]
        push ecx
        lea ecx, ds:[esi+0x70]
        mov byte ptr ss : [esp+0xD4], 2
        call public_6ead830
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0xCC], 1
        call public_6eacf80
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0xCC], bl
        call public_6eacf80
        mov eax, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x1C]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6ead780
        mov esi, dword ptr ds : [esi+0x20]
        mov esi, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [ebp], esi
        mov edx, dword ptr ds : [public_6fceec4]
        dec edx
        cmp eax, 2
        mov dword ptr ss : [esp+0xCC], edi
        mov dword ptr ds : [public_6fceec4], edx
        jne public_6ea9488
        mov ecx, dword ptr ss : [esp+0x6C]
        cmp ecx, ebx
        je public_6ea949a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        jmp public_6ea949a
        public_6ea9488 : nop
        cmp eax, 1
        jne public_6ea949a
        mov ecx, dword ptr ss : [esp+0x6C]
        cmp ecx, ebx
        je public_6ea949a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6ea949a : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 8
        UNREACHABLE_TRAP(0x6ea9340)
    }
}

#undef public_6ea9488
#undef public_6ea949a
