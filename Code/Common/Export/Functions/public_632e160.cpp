#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312970);
CLANG_FORWARD_PROC_SYMBOL(public_6312b70);
CLANG_FORWARD_PROC_SYMBOL(public_6312dd0);
CLANG_FORWARD_JUMP_SYMBOL(public_63974b0);

#define public_632e221 _public_632e221
#define public_632e24d _public_632e24d
#define public_632e271 _public_632e271
#define public_632e29d _public_632e29d

PROC_DECLARE(0x632e160, internal_632e160, public_632e160);
extern "C" NAKED register_t __cdecl internal_632e160()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63974b0 @0x632e168*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63974b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        push 4
        lea eax, ss:[esp+0x40]
        mov edi, ecx
        push eax
        mov ecx, esi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x3C]
        push 4
        lea edx, ss:[esp+0x40]
        mov dword ptr ds : [edi], ecx
        push edx
        mov ecx, esi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, esi
        mov dword ptr ds : [edi+4], eax
        call public_6312970
        mov ecx, esi
        mov byte ptr ds : [edi+8], al
        call public_6312970
        mov ecx, esi
        mov byte ptr ds : [edi+9], al
        call public_6312970
        push 4
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, esi
        mov byte ptr ds : [edi+0xA], al
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x3C]
        push 4
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edi+0xC], edx
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi+0x10], ecx
        mov ecx, esi
        call public_6312970
        push 4
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        mov byte ptr ds : [edi+0x14], al
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x3C]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ds : [edi+0x118], eax
        jle public_632e24d
        lea ebx, ds:[edi+0x98]
        public_632e221 : nop
        push 4
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ebx-0x80], ecx
        mov ecx, esi
        call public_6312b70
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x118]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_632e221
        public_632e24d : nop
        push 4
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x3C]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ds : [edi+0x21C], eax
        jle public_632e29d
        lea ebx, ds:[edi+0x19C]
        public_632e271 : nop
        mov ecx, esi
        call public_6312b70
        mov dword ptr ds : [ebx-0x80], eax
        push 4
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [edi+0x21C]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_632e271
        public_632e29d : nop
        push 4
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x3C]
        push 4
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [edi+0x220], eax
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x3C]
        push 4
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edi+0x224], edx
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [edi+0x228], ecx
        push edx
        mov ecx, esi
        call public_6312dd0
        push eax
        lea ecx, ds:[edi+0x22C]
        mov dword ptr ss : [esp+0x38], 0
        call public_630dda0
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ebx
        call public_630e210
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6312dd0
        push eax
        lea ecx, ds:[edi+0x244]
        mov dword ptr ss : [esp+0x38], 1
        call public_630dda0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ebx
        call public_630e210
        push 4
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_63128e0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edi+0x25C], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x632e160)
    }
}

#undef public_632e221
#undef public_632e24d
#undef public_632e271
#undef public_632e29d
