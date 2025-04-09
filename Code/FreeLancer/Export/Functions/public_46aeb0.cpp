#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4683b0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb811);

#define public_46af55 _public_46af55
#define public_46af68 _public_46af68
#define public_46af6d _public_46af6d
#define public_46afc4 _public_46afc4
#define public_46b011 _public_46b011
#define public_46b04b _public_46b04b
#define public_46b063 _public_46b063
#define public_46b0ae _public_46b0ae
#define public_46b0be _public_46b0be

PROC_DECLARE(0x46aeb0, internal_46aeb0, public_46aeb0);
extern "C" NAKED register_t __cdecl internal_46aeb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb811 @0x46aeb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb811
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov ax, word ptr ss : [esp+0x28]
        push ebx
        push esi
        mov esi, dword ptr ds : [public_66da7c]
        test esi, esi
        push edi
        mov word ptr ss : [esp+0x34], ax
        mov byte ptr ss : [esp+0x36], 0
        mov byte ptr ss : [esp+0x37], 0
        je public_46b0be
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_46cd50
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_46b0be
        mov edi, dword ptr ds : [eax+0x10]
        test edi, edi
        je public_46b0be
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_46b063
        mov al, byte ptr ds : [public_66d44c]
        mov ebx, 1
        test bl, al
        jne public_46af55
        or al, bl
        mov byte ptr ds : [public_66d44c], al
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, offset public_66d440
        call public_46ba60
/*FIXUP push offset _public_468bf0 @0x46af48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_46af55 : nop
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_46af68
        call public_4683b0
        mov esi, eax
        jmp public_46af6d
        public_46af68 : nop
        mov esi, offset public_66d440
        public_46af6d : nop
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x1C], offset public_66d418
        mov dword ptr ss : [esp+0x18], eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], bl
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        mov byte ptr ss : [esp+0x2C], 0
        je public_46afc4
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], 0
        public_46afc4 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        call public_46baf0
        mov ebx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_46bba0
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46baf0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_46b04b
        push ebp
        public_46b011 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        lea ebp, ds:[eax+8]
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        push ebp
        push eax
        call public_46ea00
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], eax
        jne public_46b011
        pop ebp
        public_46b04b : nop
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_46b063
        mov esi, ecx
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        public_46b063 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [public_66da7c]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, esi
        call public_46cd50
        mov edi, dword ptr ss : [esp+0x38]
        cmp edi, dword ptr ds : [esi+4]
        je public_46b0be
        lea ecx, ds:[edi+0xC]
        push ecx
        lea ecx, ds:[esi+0x18]
        call public_46cfa0
        mov ebx, dword ptr ds : [edi+0x10]
        test ebx, ebx
        je public_46b0ae
        mov ecx, ebx
        call public_46ba90
        push ebx
        call public_5b7e1d
        add esp, 4
        public_46b0ae : nop
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        call public_46c8c0
        inc dword ptr ds : [esi+0x14]
        public_46b0be : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x46aeb0)
    }
}

#undef public_46af55
#undef public_46af68
#undef public_46af6d
#undef public_46afc4
#undef public_46b011
#undef public_46b04b
#undef public_46b063
#undef public_46b0ae
#undef public_46b0be
