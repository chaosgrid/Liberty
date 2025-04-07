#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_6307f80);

#define public_629c1d9 _public_629c1d9
#define public_629c1f0 _public_629c1f0
#define public_629c215 _public_629c215
#define public_629c21c _public_629c21c
#define public_629c25d _public_629c25d
#define public_629c28d _public_629c28d
#define public_629c2a1 _public_629c2a1
#define public_629c2c6 _public_629c2c6

PROC_DECLARE(0x629c190, internal_629c190, public_629c190);
extern "C" NAKED register_t __cdecl internal_629c190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push eax
        mov esi, ecx
        call public_629aed0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_629c21c
        mov al, byte ptr ds : [esi+0x4C]
        test al, al
        lea edi, ds:[esi+0x4C]
        je public_629c215
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_629c1f0
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c1d9
        mov ecx, dword ptr ds : [eax+8]
        push 1
        push ecx
        call public_628b540
        add esp, 8
        public_629c1d9 : nop
        push edi
        push 0x11
        mov ecx, esi
        mov byte ptr ds : [edi], 0
        call public_629b010
        pop edi
        xor al, al
        pop esi
        ret 4
        lea ecx, ds:[ecx]
        public_629c1f0 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639d660 @0x629c1f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629c200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629c20a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_629c215 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_629c21c : nop
        call public_6307f80
        fcomp qword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 1
        jne public_629c2c6
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_629c2c6
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c25d
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_629c2c6
        public_629c25d : nop
        mov al, byte ptr ds : [esi+0x4C]
        cmp al, 1
        lea edi, ds:[esi+0x4C]
        je public_629c2c6
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_629c2a1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c28d
        mov ecx, dword ptr ds : [eax+8]
        push 0
        push ecx
        call public_628b540
        add esp, 8
        public_629c28d : nop
        push edi
        push 0x11
        mov ecx, esi
        mov byte ptr ds : [edi], 1
        call public_629b010
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_629c2a1 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639d660 @0x629c2a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629c2b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629c2bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_629c2c6 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629c190)
    }
}

#undef public_629c1d9
#undef public_629c1f0
#undef public_629c215
#undef public_629c21c
#undef public_629c25d
#undef public_629c28d
#undef public_629c2a1
#undef public_629c2c6
