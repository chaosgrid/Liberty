#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc670);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc850);
CLANG_FORWARD_PROC_SYMBOL(public_6ecdc70);
CLANG_FORWARD_PROC_SYMBOL(public_6ece990);
CLANG_FORWARD_PROC_SYMBOL(public_6eced00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecc610 _public_6ecc610
#define public_6ecc61e _public_6ecc61e

PROC_DECLARE(0x6ecc540, internal_6ecc540, public_6ecc540);
extern "C" NAKED register_t __cdecl internal_6ecc540()
{
    __asm
    {
        sub esp, 0x54
        mov al, byte ptr ss : [esp+0x58]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x2C], al
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6ec38a0
        mov edi, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [edi+0x3C]
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x50], edx
        call public_6ecc670
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[edi+0x28]
        call public_6ece990
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6eced00
        mov ebp, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x50]
        call public_6ecc850
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call public_6ed0c50
        add esp, 4
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x38], ebx
        call public_6ec38c0
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        push eax
        call public_6ed0c50
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x10], ebx
        je public_6ecc61e
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, esi
        mov edx, eax
        lea ebx, ds:[ebx]
        public_6ecc610 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_6ecc610
        mov edi, dword ptr ss : [esp+0x68]
        public_6ecc61e : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[ebp+0x14]
        call public_6ecdc70
        mov edx, dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edx
        mov ebp, dword ptr ds : [edi+0x3C]
        inc ebp
        push ecx
        mov dword ptr ds : [edi+0x3C], ebp
        call public_6ed0c50
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6ed0c50
        add esp, 8
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6ecc540)
    }
}

#undef public_6ecc610
#undef public_6ecc61e
