#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42adb0);
CLANG_FORWARD_PROC_SYMBOL(public_42aef0);
CLANG_FORWARD_PROC_SYMBOL(public_42b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_42bc70);
CLANG_FORWARD_PROC_SYMBOL(public_42c0f0);
CLANG_FORWARD_PROC_SYMBOL(public_42c300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_42af3a _public_42af3a
#define public_42afd0 _public_42afd0
#define public_42b002 _public_42b002

PROC_DECLARE(0x42aef0, internal_42aef0, public_42aef0);
extern "C" NAKED register_t __cdecl internal_42aef0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_42b002
        mov cl, byte ptr ds : [public_67edc0]
        mov esi, dword ptr ds : [ebx]
        mov al, 1
        test al, cl
        jne public_42af3a
        mov dl, cl
        or dl, al
        mov ecx, offset public_67ede0
        mov byte ptr ds : [public_67edc0], dl
        call public_42b7b0
/*FIXUP push offset _public_42adb0 @0x42af2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_42adb0
        call public_5b7e6c
        add esp, 4
/*FIXUP public_42af3a : nop
        push offset public_67ede0 @0x42af3a*/
  FIXUP public_42af3a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ede0
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_667cc0
        mov dword ptr ds : [public_67ede4], esi
        call public_42c300
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_667cc4]
        je public_42b002
        lea edi, ds:[eax+0xC]
        test edi, edi
        je public_42b002
        mov esi, dword ptr ds : [public_5c6044]
        mov ecx, ebx
        lea ebp, ds:[edi+4]
        call esi
        push eax
        mov ecx, ebp
        call esi
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        mov ecx, ebx
        jne public_42afd0
        mov ebp, 0x100002
        call esi
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x17A
/*FIXUP push offset public_5ca3dc @0x42afa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca448 @0x42afa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca448
        push ebp
        call dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x14
        push edx
        push eax
        mov ecx, edi
        call public_42bc70
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        nop 
        public_42afd0 : nop
        mov edi, 0x100001
        call esi
        push eax
        mov ecx, ebp
        call esi
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x182
/*FIXUP push offset public_5ca3dc @0x42afe8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca40c @0x42afed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca40c
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 
        public_42b002 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_667cc0
        call public_42c0f0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        lea eax, ds:[ecx+0xC]
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42aef0)
    }
}

#undef public_42af3a
#undef public_42afd0
#undef public_42b002
