#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_6307f80);

#define public_629c2e7 _public_629c2e7
#define public_629c368 _public_629c368
#define public_629c380 _public_629c380
#define public_629c3aa _public_629c3aa
#define public_629c3f8 _public_629c3f8
#define public_629c433 _public_629c433
#define public_629c445 _public_629c445
#define public_629c46a _public_629c46a

PROC_DECLARE(0x629c2d0, internal_629c2d0, public_629c2d0);
extern "C" NAKED register_t __cdecl internal_629c2d0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        fcom dword ptr ds : [esi+0x7C]
        push edi
        fnstsw ax
        test ah, 0x41
        jne public_629c2e7
        fstp st(0)
        fld dword ptr ds : [esi+0x7C]
        public_629c2e7 : nop
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ds : [esi+0x50]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        test al, al
        mov edx, dword ptr ds : [esi]
        je public_629c3aa
        mov ecx, dword ptr ds : [esi+0x74]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jp public_629c46a
        push 0
        push 0x12
        mov ecx, esi
        call public_629b010
        mov eax, dword ptr ds : [esi+0x78]
        mov dword ptr ss : [esp+0xC], eax
        call public_6307f80
        fadd dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi+0x4C]
        test al, al
        lea edi, ds:[esi+0x4C]
        fstp qword ptr ds : [esi+0x58]
        je public_629c46a
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_629c380
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c368
        mov eax, dword ptr ds : [eax+8]
        push 1
        push eax
        call public_628b540
        add esp, 8
        public_629c368 : nop
        push edi
        push 0x11
        mov ecx, esi
        mov byte ptr ds : [edi], 0
        call public_629b010
        pop edi
        pop esi
        ret 4
        lea ebx, ds:[ebx]
        public_629c380 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639d660 @0x629c386*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629c390*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629c39a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        ret 4
        public_629c3aa : nop
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_629c46a
        call public_6307f80
        fcomp qword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 1
        jne public_629c46a
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_629c46a
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c3f8
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_629c46a
        public_629c3f8 : nop
        push 0
        push 0x13
        mov ecx, esi
        call public_629b010
        mov al, byte ptr ds : [esi+0x4C]
        cmp al, 1
        lea edi, ds:[esi+0x4C]
        je public_629c46a
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_629c445
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c433
        mov ecx, dword ptr ds : [eax+8]
        push 0
        push ecx
        call public_628b540
        add esp, 8
        public_629c433 : nop
        push edi
        push 0x11
        mov ecx, esi
        mov byte ptr ds : [edi], 1
        call public_629b010
        pop edi
        pop esi
        ret 4
        public_629c445 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639d660 @0x629c44b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629c455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629c45f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_629c46a : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629c2d0)
    }
}

#undef public_629c2e7
#undef public_629c368
#undef public_629c380
#undef public_629c3aa
#undef public_629c3f8
#undef public_629c433
#undef public_629c445
#undef public_629c46a
