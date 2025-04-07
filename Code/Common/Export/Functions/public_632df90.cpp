#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);
CLANG_FORWARD_PROC_SYMBOL(public_6312940);
CLANG_FORWARD_PROC_SYMBOL(public_6312ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6312ce0);

#define public_632e050 _public_632e050
#define public_632e07d _public_632e07d
#define public_632e0a7 _public_632e0a7
#define public_632e0d4 _public_632e0d4

PROC_DECLARE(0x632df90, internal_632df90, public_632df90);
extern "C" NAKED register_t __cdecl internal_632df90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 4
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6312890
        mov edx, dword ptr ds : [esi+4]
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edx
        call public_6312890
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+8]
        push ecx
        mov ecx, edi
        call public_6312940
        xor edx, edx
        mov dl, byte ptr ds : [esi+9]
        mov ecx, edi
        push edx
        call public_6312940
        xor eax, eax
        mov al, byte ptr ds : [esi+0xA]
        mov ecx, edi
        push eax
        call public_6312940
        mov ecx, dword ptr ds : [esi+0xC]
        push 4
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, edi
        call public_6312890
        mov eax, dword ptr ds : [esi+0x10]
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_6312890
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x14]
        mov ecx, edi
        push edx
        call public_6312940
        mov eax, dword ptr ds : [esi+0x118]
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_6312890
        mov eax, dword ptr ds : [esi+0x118]
        xor ebp, ebp
        test eax, eax
        jle public_632e07d
        lea ebx, ds:[esi+0x98]
        lea esp, ss:[esp]
        public_632e050 : nop
        mov edx, dword ptr ds : [ebx-0x80]
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edx
        call public_6312890
        mov ecx, dword ptr ds : [ebx]
        push ecx
        mov ecx, edi
        call public_6312ad0
        mov eax, dword ptr ds : [esi+0x118]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_632e050
        public_632e07d : nop
        mov edx, dword ptr ds : [esi+0x21C]
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edx
        call public_6312890
        mov eax, dword ptr ds : [esi+0x21C]
        xor ebp, ebp
        test eax, eax
        jle public_632e0d4
        lea ebx, ds:[esi+0x19C]
        public_632e0a7 : nop
        mov ecx, dword ptr ds : [ebx-0x80]
        push ecx
        mov ecx, edi
        call public_6312ad0
        mov edx, dword ptr ds : [ebx]
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edx
        call public_6312890
        mov eax, dword ptr ds : [esi+0x21C]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_632e0a7
        public_632e0d4 : nop
        mov ecx, dword ptr ds : [esi+0x220]
        push 4
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, edi
        call public_6312890
        mov eax, dword ptr ds : [esi+0x224]
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_6312890
        mov edx, dword ptr ds : [esi+0x228]
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], edx
        call public_6312890
        lea ecx, ds:[esi+0x22C]
        push ecx
        mov ecx, edi
        call public_6312ce0
        lea edx, ds:[esi+0x244]
        push edx
        mov ecx, edi
        call public_6312ce0
        mov eax, dword ptr ds : [esi+0x25C]
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_6312890
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x632df90)
    }
}

#undef public_632e050
#undef public_632e07d
#undef public_632e0a7
#undef public_632e0d4
