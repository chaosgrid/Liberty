#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5772d0);

#define public_577320 _public_577320
#define public_57734e _public_57734e
#define public_577353 _public_577353
#define public_577375 _public_577375
#define public_57739a _public_57739a
#define public_5773a1 _public_5773a1
#define public_5773a8 _public_5773a8
#define public_5773ad _public_5773ad
#define public_5773be _public_5773be
#define public_5773cd _public_5773cd
#define public_5773dd _public_5773dd

PROC_DECLARE(0x5772d0, internal_5772d0, public_5772d0);
extern "C" NAKED register_t __cdecl internal_5772d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
/*FIXUP push offset public_5c9adc @0x5772d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9adc
        push eax
        call dword ptr ds : [public_5c7150]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_5773dd
        push ebp
        mov ebp, dword ptr ds : [public_5c70d8]
        push edi
/*FIXUP push offset public_5e43e0 @0x5772f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e43e0
        push ebx
        call ebp
/*FIXUP push offset public_5e4388 @0x5772fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4388
/*FIXUP push offset public_5e43d8 @0x577303*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e43d8
        push ebx
        call ebp
        mov eax, dword ptr ds : [public_67c258]
        mov edi, dword ptr ds : [eax]
        add esp, 0x14
        cmp edi, eax
        je public_5773cd
        push esi
        mov edi, edi
        public_577320 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_5773be
        mov eax, dword ptr ds : [edi+0x20]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        je public_5773be
        mov eax, dword ptr ds : [edi+8]
        cmp eax, 0xCC
        jae public_57734e
        mov esi, dword ptr ds : [eax*4+public_614dd8]
        jmp public_577353
        public_57734e : nop
        mov esi, offset public_5e425c
        public_577353 : nop
        test eax, eax
        je public_5773be
/*FIXUP push offset public_5e43cc @0x577357*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e43cc
        push ebx
        call ebp
        push esi
/*FIXUP push offset public_5e43bc @0x577360*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e43bc
        push ebx
        call ebp
        mov esi, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [edi+0x20]
        add esp, 0x14
        cmp esi, eax
        je public_5773be
        public_577375 : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_5e43b0 @0x577378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e43b0
        push ebx
        call ebp
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        dec eax
        je public_5773a8
        sub eax, 3
        je public_5773a1
        sub eax, 0xC
        je public_57739a
        mov eax, offset public_5cb7d0
        jmp public_5773ad
        public_57739a : nop
        mov eax, offset public_5e43a8
        jmp public_5773ad
        public_5773a1 : nop
        mov eax, offset public_5e439c
        jmp public_5773ad
        public_5773a8 : nop
        mov eax, offset public_5e4394
        public_5773ad : nop
        push eax
        push ebx
        call ebp
        mov eax, dword ptr ds : [edi+0x20]
        add esi, 8
        add esp, 8
        cmp esi, eax
        jne public_577375
        public_5773be : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [public_67c258]
        jne public_577320
        pop esi
        public_5773cd : nop
        push ebx
        call dword ptr ds : [public_5c714c]
        add esp, 4
        pop edi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        public_5773dd : nop
        xor al, al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5772d0)
    }
}

#undef public_577320
#undef public_57734e
#undef public_577353
#undef public_577375
#undef public_57739a
#undef public_5773a1
#undef public_5773a8
#undef public_5773ad
#undef public_5773be
#undef public_5773cd
#undef public_5773dd
