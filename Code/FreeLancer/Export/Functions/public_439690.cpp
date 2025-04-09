#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_439690);
CLANG_FORWARD_PROC_SYMBOL(public_43a140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4396c0 _public_4396c0
#define public_4396e6 _public_4396e6
#define public_439712 _public_439712
#define public_439739 _public_439739
#define public_43975c _public_43975c
#define public_439769 _public_439769
#define public_439787 _public_439787
#define public_43978e _public_43978e

PROC_DECLARE(0x439690, internal_439690, public_439690);
extern "C" NAKED register_t __cdecl internal_439690()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        lea edi, ds:[esi+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_432240
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_4396c0
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_4396e6
        public_4396c0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 0x110
/*FIXUP push offset public_5caf30 @0x4396ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x4396d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_4396e6 : nop
        dec dword ptr ds : [eax+0xC]
        jne public_43978e
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_432240
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_439712
        mov edi, dword ptr ds : [eax+0x10]
        jmp public_439739
        public_439712 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x439722*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43972c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor edi, edi
        public_439739 : nop
        mov al, byte ptr ds : [esi+0x5A]
        test al, al
        jne public_43975c
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_43975c
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push ebp
        call dword ptr ds : [eax+0xA0]
        public_43975c : nop
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_439769
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_439769 : nop
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        mov dword ptr ds : [edi+8], 0
        je public_439787
        mov ecx, esi
        call public_43a140
        push esi
        call public_5b7e1d
        add esp, 4
        public_439787 : nop
        mov dword ptr ds : [edi+4], 0
        public_43978e : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x439690)
    }
}

#undef public_4396c0
#undef public_4396e6
#undef public_439712
#undef public_439739
#undef public_43975c
#undef public_439769
#undef public_439787
#undef public_43978e
