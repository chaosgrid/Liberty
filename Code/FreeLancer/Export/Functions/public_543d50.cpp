#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_543d50);
CLANG_FORWARD_PROC_SYMBOL(public_549e30);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb90);
CLANG_FORWARD_PROC_SYMBOL(public_54bc10);
CLANG_FORWARD_PROC_SYMBOL(public_5544d0);

#define public_543d93 _public_543d93
#define public_543d95 _public_543d95
#define public_543db4 _public_543db4
#define public_543db6 _public_543db6
#define public_543ebf _public_543ebf
#define public_543eda _public_543eda
#define public_543eec _public_543eec

PROC_DECLARE(0x543d50, internal_543d50, public_543d50);
extern "C" NAKED register_t __cdecl internal_543d50()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [public_673378]
        jne public_543eec
        mov ebx, dword ptr ss : [esp+0x84]
        test ebx, ebx
        je public_543d93
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_543d93
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_543d93
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_543d95
        public_543d93 : nop
        xor eax, eax
        public_543d95 : nop
        lea ecx, ds:[edi+0xC]
        test ecx, ecx
        je public_543db4
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_543db4
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_543db6
        public_543db4 : nop
        xor ecx, ecx
        public_543db6 : nop
        mov esi, dword ptr ss : [esp+0x88]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_5c6ad0]
        push 0x401C0000
        push 0
        call public_5544d0
        add esp, 8
        call public_54baf0
        cmp edi, eax
        jne public_543eec
        mov edi, dword ptr ds : [public_5c71ec]
        add esi, 0x41
        push esi
/*FIXUP push offset public_5dffbc @0x543dec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffbc
        lea eax, ss:[esp+0x48]
/*FIXUP push offset public_5dffa8 @0x543df5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffa8
        push eax
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        call edi
        mov edx, dword ptr ds : [ebx]
        add esp, 0x10
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC0]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0xF], al
        jne public_543ebf
        push esi
/*FIXUP push offset public_5dffb0 @0x543e86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffb0
        lea ecx, ss:[esp+0x48]
/*FIXUP push offset public_5dffa8 @0x543e8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffa8
        push ecx
        call edi
        mov edx, dword ptr ds : [ebx]
        add esp, 0x10
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC0]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0xF], al
        je public_543eda
        public_543ebf : nop
        call public_549e30
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_54bb90
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 0x74
        ret 8
        public_543eda : nop
        call public_549e30
/*FIXUP push offset public_5cc404 @0x543edf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        call public_54bc10
        add esp, 4
        public_543eec : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x543d50)
    }
}

#undef public_543d93
#undef public_543d95
#undef public_543db4
#undef public_543db6
#undef public_543ebf
#undef public_543eda
#undef public_543eec
