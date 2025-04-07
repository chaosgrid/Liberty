#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_417420);
CLANG_FORWARD_PROC_SYMBOL(public_4175f0);
CLANG_FORWARD_PROC_SYMBOL(public_417800);
CLANG_FORWARD_PROC_SYMBOL(public_417ca0);
CLANG_FORWARD_PROC_SYMBOL(public_418960);

#define public_417620 _public_417620
#define public_417656 _public_417656
#define public_41765e _public_41765e
#define public_4176f4 _public_4176f4
#define public_4176f6 _public_4176f6
#define public_41770c _public_41770c
#define public_41771f _public_41771f
#define public_417739 _public_417739
#define public_417747 _public_417747

PROC_DECLARE(0x4175f0, internal_4175f0, public_4175f0);
extern "C" NAKED register_t __cdecl internal_4175f0()
{
    __asm
    {
        sub esp, 0x810
        call public_40cdc0
        call dword ptr ds : [public_41b020]
        test eax, eax
        je public_417747
        push ebx
        mov ebx, dword ptr ds : [public_41b028]
        push ebp
        mov ebp, dword ptr ds : [public_41b024]
        push esi
        push edi
        lea esp, ss:[esp]
        public_417620 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [public_41bb8c]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_417ca0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        je public_417656
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_417656
        lea eax, ss:[esp+0x14]
        jmp public_41765e
        public_417656 : nop
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x18]
        public_41765e : nop
        mov edx, dword ptr ds : [public_41bb8c]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edx+4]
        je public_417739
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        call public_418960
        cmp eax, dword ptr ss : [esp+0x824]
        jb public_417739
        mov esi, dword ptr ss : [esp+0x10]
        call public_40cdc0
        push esi
        call ebx
        add esp, 4
        mov edi, eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [public_41bb8c]
        mov dword ptr ss : [esp+0x1C], esi
        call public_417800
        mov edx, dword ptr ds : [public_41bb8c]
        mov eax, dword ptr ds : [edx+4]
        cmp dword ptr ss : [esp+0x1C], eax
        je public_41770c
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        mov ecx, eax
        shr ecx, 0x10
        test ecx, ecx
        jl public_4176f4
        mov esi, dword ptr ds : [public_429dd0]
        test esi, esi
        je public_4176f4
        mov edx, dword ptr ds : [public_429dd4]
        sub edx, esi
        sar edx, 2
        cmp ecx, edx
        jae public_4176f4
        mov ecx, dword ptr ds : [esi+ecx*4]
        and eax, 0xFFFF
        jmp public_4176f6
        public_4176f4 : nop
        xor ecx, ecx
        public_4176f6 : nop
        push 0x400
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        push ecx
        call public_417420
        add esp, 0x10
        jmp public_41771f
        public_41770c : nop
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_4259d0 @0x417710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259d0
        push eax
        call dword ptr ds : [public_41b988]
        add esp, 8
        public_41771f : nop
        call public_40ce70
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x828]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [edx]
        public_417739 : nop
        call ebp
        test eax, eax
        jne public_417620
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_417747 : nop
        add esp, 0x810
        jmp public_40ce70
        UNREACHABLE_TRAP(0x4175f0)
    }
}

#undef public_417620
#undef public_417656
#undef public_41765e
#undef public_4176f4
#undef public_4176f6
#undef public_41770c
#undef public_41771f
#undef public_417739
#undef public_417747
