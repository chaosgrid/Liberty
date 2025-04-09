#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42adb0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_42b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_42c300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_42ae85 _public_42ae85
#define public_42aeb2 _public_42aeb2
#define public_42aedd _public_42aedd
#define public_42aee2 _public_42aee2

PROC_DECLARE(0x42ae40, internal_42ae40, public_42ae40);
extern "C" NAKED register_t __cdecl internal_42ae40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_42aee2
        mov cl, byte ptr ds : [public_67edc0]
        mov esi, dword ptr ds : [ebx]
        mov al, 1
        test al, cl
        jne public_42ae85
        mov dl, cl
        or dl, al
        mov ecx, offset public_67ede0
        mov byte ptr ds : [public_67edc0], dl
        call public_42b7b0
/*FIXUP push offset _public_42adb0 @0x42ae78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_42adb0
        call public_5b7e6c
        add esp, 4
/*FIXUP public_42ae85 : nop
        push offset public_67ede0 @0x42ae85*/
  FIXUP public_42ae85 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ede0
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_667cc0
        mov dword ptr ds : [public_67ede4], esi
        call public_42c300
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_667cc4]
        je public_42aee2
        lea esi, ds:[eax+0xC]
        test esi, esi
        jne public_42aedd
        public_42aeb2 : nop
        push edi
        mov ecx, ebx
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x168
/*FIXUP push offset public_5ca3dc @0x42aecc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca3a8 @0x42aed1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3a8
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        public_42aedd : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 
        public_42aee2 : nop
        xor esi, esi
        jmp public_42aeb2
        UNREACHABLE_TRAP(0x42ae40)
    }
}

#undef public_42ae85
#undef public_42aeb2
#undef public_42aedd
#undef public_42aee2
