#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be6c0);
CLANG_FORWARD_PROC_SYMBOL(public_4bedc0);
CLANG_FORWARD_PROC_SYMBOL(public_4bef00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4bef5b _public_4bef5b
#define public_4bef6d _public_4bef6d
#define public_4befc1 _public_4befc1
#define public_4beff4 _public_4beff4
#define public_4bf08c _public_4bf08c
#define public_4bf09c _public_4bf09c
#define public_4bf0e2 _public_4bf0e2
#define public_4bf107 _public_4bf107

PROC_DECLARE(0x4bef00, internal_4bef00, public_4bef00);
extern "C" NAKED register_t __cdecl internal_4bef00()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_4bedc0
        mov edi, dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_4bef6d
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_5d6134 @0x4bef25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6134
        push 4
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x476
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_4bef5b
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4bef5b : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx+0x334], 0
        jmp public_4beff4
        public_4bef6d : nop
        mov ebx, dword ptr ds : [public_5c69a0]
        lea ecx, ss:[esp+0x10]
        call ebx
        lea ecx, ss:[esp+0x14]
        call ebx
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        mov dword ptr ss : [esp+0x24], 0
        call public_4be6c0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x18
        test eax, eax
        je public_4befc1
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        public_4befc1 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ds : [edi+0x10]
        fmul qword ptr ds : [public_5ca320]
        call public_5b7ec0
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x20]
        fstp dword ptr ds : [eax+0x334]
        public_4beff4 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
/*FIXUP push offset public_5d0ec4 @0x4beffc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov dword ptr ds : [esi+0x24], edi
        mov cl, byte ptr ds : [edi]
        mov edi, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [edi+0x330]
        mov al, cl
        shl al, 6
        mov bl, dl
        xor bl, al
        and bl, 0x40
        xor bl, dl
        mov byte ptr ds : [edi+0x330], bl
        mov edi, dword ptr ds : [esi+0xC]
        mov dl, byte ptr ds : [edi+0x330]
        mov bl, dl
        xor bl, al
        and bl, 0x40
        xor bl, dl
        xor edx, edx
        cmp cl, dl
        mov byte ptr ds : [edi+0x330], bl
        je public_4bf09c
        mov eax, dword ptr ds : [esi+8]
        mov ecx, 2
        mov dword ptr ds : [eax+0x70], ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x70], ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0x70], ecx
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x70], ecx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0x70], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edx
        je public_4bf08c
        mov dword ptr ds : [eax+0x70], ecx
        public_4bf08c : nop
        pop edi
        mov byte ptr ds : [esi+0x28], 1
        pop esi
        pop ebx
        add esp, 0x90
        ret 4
        public_4bf09c : nop
        mov ecx, dword ptr ds : [esi+8]
        mov bl, byte ptr ds : [ecx+0x330]
        mov eax, 1
        test al, bl
        je public_4bf0e2
        mov dword ptr ds : [ecx+0x70], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ecx+0x70], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0x70], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx+0x70], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+0x70], eax
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, edx
        je public_4bf107
        pop edi
        mov dword ptr ds : [ecx+0x70], eax
        mov byte ptr ds : [esi+0x28], al
        pop esi
        pop ebx
        add esp, 0x90
        ret 4
        public_4bf0e2 : nop
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+0x70], edx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, edx
        je public_4bf107
        mov dword ptr ds : [ecx+0x70], edx
        public_4bf107 : nop
        pop edi
        mov byte ptr ds : [esi+0x28], al
        pop esi
        pop ebx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x4bef00)
    }
}

#undef public_4bef5b
#undef public_4bef6d
#undef public_4befc1
#undef public_4beff4
#undef public_4bf08c
#undef public_4bf09c
#undef public_4bf0e2
#undef public_4bf107
