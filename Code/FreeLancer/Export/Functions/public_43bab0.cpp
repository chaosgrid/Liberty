#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4288e0);
CLANG_FORWARD_PROC_SYMBOL(public_428a40);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43bab0);
CLANG_FORWARD_PROC_SYMBOL(public_456990);
CLANG_FORWARD_PROC_SYMBOL(public_4569b0);
CLANG_FORWARD_PROC_SYMBOL(public_4569d0);

#define public_43bae0 _public_43bae0
#define public_43bb07 _public_43bb07
#define public_43bb3a _public_43bb3a
#define public_43bb4a _public_43bb4a

PROC_DECLARE(0x43bab0, internal_43bab0, public_43bab0);
extern "C" NAKED register_t __cdecl internal_43bab0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x24], eax
        call public_432240
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_43bae0
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43bb07
        public_43bae0 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43baf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43bafa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43bb07 : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0xCC]
        mov dword ptr ss : [esp+0xC], eax
        mov al, byte ptr ds : [edi+0x58]
        test al, al
        mov ecx, dword ptr ds : [esi+0xD0]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_43bb4a
        mov al, byte ptr ds : [esi+0xD4]
        test al, al
        mov ebx, dword ptr ds : [public_5c6030]
        jne public_43bb3a
        lea ecx, ss:[esp+0xC]
        call ebx
        public_43bb3a : nop
        mov al, byte ptr ds : [esi+0xD5]
        test al, al
        jne public_43bb4a
        lea ecx, ss:[esp+0x10]
        call ebx
        public_43bb4a : nop
        xor edx, edx
        mov dl, byte ptr ds : [esi+0xD4]
        push 0xBF800000
        lea eax, ss:[esp+0x10]
        push edx
        push eax
        call public_4288e0
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0xD5]
        push 0xBF800000
        lea edx, ss:[esp+0x20]
        push ecx
        push edx
        call public_428a40
        add esp, 0x18
        mov byte ptr ds : [edi+0x58], 0
        call public_456990
        fstp dword ptr ss : [esp+0x1C]
        push 0xC2C00000
        mov ecx, offset public_66d2d0
        call public_4569b0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 0
        mov ecx, offset public_66d2d0
        call public_4569d0
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x43bab0)
    }
}

#undef public_43bae0
#undef public_43bb07
#undef public_43bb3a
#undef public_43bb4a
