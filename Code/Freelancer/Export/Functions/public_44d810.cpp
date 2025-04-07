#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d810);
CLANG_FORWARD_PROC_SYMBOL(public_453690);
CLANG_FORWARD_PROC_SYMBOL(public_453910);
CLANG_FORWARD_PROC_SYMBOL(public_456790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9cf1);

#define public_44d867 _public_44d867
#define public_44d869 _public_44d869
#define public_44d88e _public_44d88e
#define public_44d8df _public_44d8df
#define public_44d8f8 _public_44d8f8
#define public_44d923 _public_44d923
#define public_44d925 _public_44d925
#define public_44d975 _public_44d975
#define public_44d98d _public_44d98d

PROC_DECLARE(0x44d810, internal_44d810, public_44d810);
extern "C" NAKED register_t __cdecl internal_44d810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9cf1 @0x44d812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9cf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        mov al, byte ptr ds : [edi+4]
        and al, 1
        mov esi, ecx
        mov byte ptr ss : [esp+0x50], al
        jne public_44d88e
        push 0x9C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x50], eax
        test eax, eax
        mov dword ptr ss : [esp+0x44], 0
        je public_44d867
        push edi
        push esi
        push esi
        mov ecx, eax
        call public_453690
        mov ebx, eax
        jmp public_44d869
        public_44d867 : nop
        xor ebx, ebx
        public_44d869 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        lea edx, ds:[edi+8]
        lea esi, ds:[ebx+0xC]
        push edx
        push esi
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi]
        add edi, 0x14
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        jmp public_44d98d
        public_44d88e : nop
        mov ecx, dword ptr ds : [edi+0x38]
        push ecx
        push 7
        mov ecx, offset public_66d2d0
        call public_456790
        mov ebx, eax
        test ebx, ebx
        je public_44d8f8
        push 0x70
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x50], eax
        test eax, eax
        mov dword ptr ss : [esp+0x44], 1
        je public_44d8df
        push edi
        push esi
        push esi
        mov ecx, eax
        call public_453910
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x6C], ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        public_44d8df : nop
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ds : [eax+0x6C], ebx
        pop ebx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        public_44d8f8 : nop
        push 0x9C
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x50], eax
        test eax, eax
        mov dword ptr ss : [esp+0x44], 2
        je public_44d923
        push edi
        push esi
        push esi
        mov ecx, eax
        call public_453690
        mov ebx, eax
        jmp public_44d925
        public_44d923 : nop
        xor ebx, ebx
        public_44d925 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [edx+0x40]
        mov edx, dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ds : [edi+0x38]
        push edx
        push eax
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6248]
        test eax, eax
        je public_44d975
        add eax, 4
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6238]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea edx, ss:[esp+0xC]
        lea esi, ds:[ebx+0xC]
        push edx
        push esi
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call dword ptr ds : [eax+0x10]
        jmp public_44d98d
        public_44d975 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        lea eax, ds:[edi+8]
        lea esi, ds:[ebx+0xC]
        push eax
        push esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        add edi, 0x14
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_44d98d : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x44d810)
    }
}

#undef public_44d867
#undef public_44d869
#undef public_44d88e
#undef public_44d8df
#undef public_44d8f8
#undef public_44d923
#undef public_44d925
#undef public_44d975
#undef public_44d98d
