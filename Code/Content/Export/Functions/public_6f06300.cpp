#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f06300);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb60);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6face20);

#define public_6f063b5 _public_6f063b5
#define public_6f0640e _public_6f0640e
#define public_6f06417 _public_6f06417
#define public_6f06426 _public_6f06426
#define public_6f06430 _public_6f06430
#define public_6f0644d _public_6f0644d
#define public_6f06460 _public_6f06460
#define public_6f064ad _public_6f064ad
#define public_6f064b6 _public_6f064b6
#define public_6f064c6 _public_6f064c6
#define public_6f064cf _public_6f064cf
#define public_6f064e4 _public_6f064e4
#define public_6f064f3 _public_6f064f3

PROC_DECLARE(0x6f06300, internal_6f06300, public_6f06300);
extern "C" NAKED register_t __cdecl internal_6f06300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6face20 @0x6f06302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6face20
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6fb33a0]
        mov al, byte ptr ss : [esp+0x18]
        add esp, 8
        test al, 0x40
        je public_6f064e4
        push ebp
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        call dword ptr ds : [public_6fb344c]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x14
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [public_6fb34b4]
        mov cl, byte ptr ss : [esp+0x2B]
        mov byte ptr ss : [esp+0x40], cl
        xor ecx, ecx
        add esp, 0x1C
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov byte ptr ss : [esp+0x8C], 1
        mov edi, eax
        jbe public_6f06426
        jge public_6f063b5
        xor eax, eax
        public_6f063b5 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6eed270
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[esi+edi*4]
        mov dword ptr ss : [esp+0x30], edx
        jne public_6f0640e
        xor eax, eax
        jmp public_6f06417
        public_6f0640e : nop
        mov eax, dword ptr ss : [esp+0x2C]
        sub eax, ecx
        sar eax, 2
        public_6f06417 : nop
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x28], esi
        public_6f06426 : nop
        xor esi, esi
        test eax, eax
        jbe public_6f0644d
        lea edi, ss:[esp+0x34]
        public_6f06430 : nop
        push edi
        push 1
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x2C]
        inc esi
        add edi, 4
        cmp esi, eax
        jb public_6f06430
        public_6f0644d : nop
        mov edi, dword ptr ss : [esp+0xA8]
        mov ebp, dword ptr ds : [public_6fb3370]
        lea ebx, ds:[ebx]
        public_6f06460 : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6f064cf
        sub ecx, eax
        mov esi, ecx
        sar esi, 2
        test esi, esi
        je public_6f064cf
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        jne public_6f064cf
        call ebp
        imul eax, esi
        mov ecx, dword ptr ss : [esp+0x28]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        lea esi, ds:[ecx+eax*4]
        push esi
        push edi
        call public_6f6cb60
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 8
        test al, al
        je public_6f064ad
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_6f06460
        public_6f064ad : nop
        lea eax, ds:[esi+4]
        cmp eax, ecx
        je public_6f064c6
        sub esi, eax
        public_6f064b6 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f064b6
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6f064c6 : nop
        sub ecx, 4
        mov dword ptr ss : [esp+0x2C], ecx
        jmp public_6f06460
        public_6f064cf : nop
        push eax
        mov byte ptr ss : [esp+0x90], 0
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop ebp
        jmp public_6f064f3
        public_6f064e4 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call dword ptr ds : [public_6fb3428]
        add esp, 8
        public_6f064f3 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_6eac0c0
        mov edx, dword ptr ss : [esp+0x98]
        push edx
        mov esi, eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x84]
        add esp, 8
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 0x18
        UNREACHABLE_TRAP(0x6f06300)
    }
}

#undef public_6f063b5
#undef public_6f0640e
#undef public_6f06417
#undef public_6f06426
#undef public_6f06430
#undef public_6f0644d
#undef public_6f06460
#undef public_6f064ad
#undef public_6f064b6
#undef public_6f064c6
#undef public_6f064cf
#undef public_6f064e4
#undef public_6f064f3
