#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d010);
CLANG_FORWARD_PROC_SYMBOL(public_538560);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c09f8);

#define public_538590 _public_538590
#define public_538599 _public_538599
#define public_53859b _public_53859b
#define public_5385ad _public_5385ad
#define public_5385c0 _public_5385c0
#define public_5385d3 _public_5385d3
#define public_5385dc _public_5385dc
#define public_5385e0 _public_5385e0
#define public_5385f0 _public_5385f0
#define public_538601 _public_538601
#define public_538610 _public_538610
#define public_538619 _public_538619
#define public_53861b _public_53861b
#define public_538630 _public_538630
#define public_538637 _public_538637
#define public_538647 _public_538647
#define public_538662 _public_538662
#define public_538671 _public_538671

PROC_DECLARE(0x538560, internal_538560, public_538560);
extern "C" NAKED register_t __cdecl internal_538560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c09f8 @0x538562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c09f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c71d8]
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5de730
        xor edi, edi
        public_538590 : nop
        cmp edi, ebx
        jne public_538599
        mov edi, dword ptr ds : [esi+0x3C]
        jmp public_53859b
        public_538599 : nop
        mov edi, dword ptr ds : [edi]
        public_53859b : nop
        cmp edi, ebx
        je public_5385ad
        mov eax, dword ptr ds : [edi+8]
        push eax
        call ebp
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_538590
        public_5385ad : nop
        mov edi, dword ptr ds : [esi+0x3C]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x38], offset public_5de728
        je public_5385e0
        nop 
        lea esp, ss:[esp]
        public_5385c0 : nop
        cmp byte ptr ds : [esi+0x44], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_5385d3
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x48], eax
        jmp public_5385dc
        public_5385d3 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5385dc : nop
        cmp edi, ebx
        jne public_5385c0
        public_5385e0 : nop
        mov edi, dword ptr ds : [esi+0x48]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        je public_538601
        lea ecx, ds:[ecx]
        public_5385f0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_5385f0
        public_538601 : nop
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi], offset public_5de720
        mov dword ptr ss : [esp+0x1C], ebx
        xor edi, edi
        public_538610 : nop
        cmp edi, ebx
        jne public_538619
        mov edi, dword ptr ds : [esi+4]
        jmp public_53861b
        public_538619 : nop
        mov edi, dword ptr ds : [edi]
        public_53861b : nop
        cmp edi, ebx
        je public_538630
        mov edx, dword ptr ds : [edi+8]
        push edx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_538610
        public_538630 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_538647
        public_538637 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_43d010
        cmp edi, ebx
        jne public_538637
        public_538647 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5de718
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_538671
        public_538662 : nop
        mov ecx, edi
        mov edi, dword ptr ds : [edi]
        push 1
        call public_5afe80
        cmp edi, ebx
        jne public_538662
        public_538671 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x538560)
    }
}

#undef public_538590
#undef public_538599
#undef public_53859b
#undef public_5385ad
#undef public_5385c0
#undef public_5385d3
#undef public_5385dc
#undef public_5385e0
#undef public_5385f0
#undef public_538601
#undef public_538610
#undef public_538619
#undef public_53861b
#undef public_538630
#undef public_538637
#undef public_538647
#undef public_538662
#undef public_538671
