#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_6293210);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_6307f80);

#define public_629c082 _public_629c082
#define public_629c0bd _public_629c0bd
#define public_629c0d0 _public_629c0d0
#define public_629c0f5 _public_629c0f5

PROC_DECLARE(0x629c020, internal_629c020, public_629c020);
extern "C" NAKED register_t __cdecl internal_629c020()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0xC]
        test al, al
        jne public_629c0f5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_629c0f5
        call public_6307f80
        fcomp qword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 1
        jne public_629c0f5
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_629c0f5
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c082
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_629c0f5
        public_629c082 : nop
        push 0
        push 0x13
        mov ecx, esi
        call public_629b010
        mov al, byte ptr ds : [esi+0x4C]
        cmp al, 1
        lea edi, ds:[esi+0x4C]
        je public_629c0f5
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        je public_629c0d0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_629c0bd
        mov ecx, dword ptr ds : [eax+8]
        push 0
        push ecx
        call public_628b540
        add esp, 8
        public_629c0bd : nop
        push edi
        push 0x11
        mov ecx, esi
        mov byte ptr ds : [edi], 1
        call public_629b010
        jmp public_629c0f5
        lea esp, ss:[esp]
        public_629c0d0 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639d660 @0x629c0d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d660
        push 0x195
/*FIXUP push offset public_639d634 @0x629c0e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x629c0ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_629c0f5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        mov ecx, esi
        call public_6293210
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x629c020)
    }
}

#undef public_629c082
#undef public_629c0bd
#undef public_629c0d0
#undef public_629c0f5
