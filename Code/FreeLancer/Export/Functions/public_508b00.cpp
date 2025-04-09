#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_4227d0);
CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_5529b0);

#define public_508b3e _public_508b3e
#define public_508b5f _public_508b5f
#define public_508b90 _public_508b90
#define public_508cc5 _public_508cc5
#define public_508ce4 _public_508ce4

PROC_DECLARE(0x508b00, internal_508b00, public_508b00);
extern "C" NAKED register_t __cdecl internal_508b00()
{
    __asm
    {
        push ebx
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x2C0]
        test al, al
        je public_508ce4
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ebx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [edi+0x294]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_508b3e
        mov byte ptr ds : [edi+0x2B8], 0
        public_508b3e : nop
        fld dword ptr ds : [edi+0x294]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_508b5f
        mov al, byte ptr ds : [edi+0x2B8]
        test al, al
        jne public_508cc5
        public_508b5f : nop
        fld dword ptr ds : [edi+0x294]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_508cc5
        fld dword ptr ds : [edi+0x294]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_508b90
        mov byte ptr ds : [edi+0x2B8], 1
        public_508b90 : nop
        mov edx, dword ptr ds : [edi+0x294]
        push esi
        push ebx
        mov dword ptr ss : [esp+0x14], edx
        call public_4227d0
        push 0xB50
        call public_421ed0
        push 0
        call public_422190
        push 0xB71
        call public_421ed0
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 0xB44
        call public_421ed0
        push 6
        push 5
        call public_4220c0
        push 8
        call public_421670
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [edi+0x2A8]
        mov edx, dword ptr ds : [edi+0x2A4]
        push eax
        mov eax, dword ptr ds : [edi+0x2A0]
        push ecx
        push edx
        push eax
        call public_421bd0
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x38
        push ebx
        call dword ptr ds : [ecx+0x14]
        push 0
        push 0
        push 0
        mov esi, eax
        call public_421cc0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        sub edx, eax
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        push 0
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push 0
        sub esp, 8
        sub ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        call public_421cc0
        call public_421690
        push 1
        call public_422190
        push 0xB71
        call public_421dd0
        push 0xBE2
        call public_421ed0
        push 0xB44
        call public_421dd0
        push ebx
        call public_422910
        add esp, 0x20
        pop esi
        public_508cc5 : nop
        fld dword ptr ds : [edi+0x294]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_508ce4
        push ebx
        lea ecx, ds:[edi+0x100]
        call public_5529b0
        public_508ce4 : nop
        pop edi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x508b00)
    }
}

#undef public_508b3e
#undef public_508b5f
#undef public_508b90
#undef public_508cc5
#undef public_508ce4
