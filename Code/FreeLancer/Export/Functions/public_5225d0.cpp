#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5225d0);
CLANG_FORWARD_PROC_SYMBOL(public_522700);
CLANG_FORWARD_PROC_SYMBOL(public_522a60);
CLANG_FORWARD_PROC_SYMBOL(public_5261b0);
CLANG_FORWARD_PROC_SYMBOL(public_54e040);
CLANG_FORWARD_PROC_SYMBOL(public_54e900);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_52265d _public_52265d
#define public_5226a9 _public_5226a9
#define public_5226c9 _public_5226c9
#define public_5226e0 _public_5226e0
#define public_5226f5 _public_5226f5

PROC_DECLARE(0x5225d0, internal_5225d0, public_5225d0);
extern "C" NAKED register_t __cdecl internal_5225d0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        push ebp
        mov esi, ecx
        mov byte ptr ss : [esp+0x17], 0
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov al, byte ptr ds : [esi+0x198]
        test al, al
        je public_52265d
        push 0x2C
        call public_5792b0
        add esp, 4
        cmp eax, 1
        jle public_52265d
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_52265d
        lea ecx, ss:[esp+0x14]
        lea edi, ds:[esi+0x19C]
        push ecx
        mov ecx, edi
        call public_54e040
        test al, al
        je public_52265d
        push 0x42C80000
        push ebp
        mov ecx, esi
        call public_522700
        mov edx, dword ptr ds : [esi+0xDC]
        push 2
        push edx
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x1F], 1
        call public_54e900
        public_52265d : nop
        push 0x21
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5226c9
        push 0x1B
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5226c9
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5226c9
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c6688]
        test al, al
        je public_5226c9
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_5226a9
        push 0x42C80000
        push ebp
        mov ecx, esi
        call public_522700
        mov byte ptr ss : [esp+0x13], 1
        public_5226a9 : nop
        push ebp
        mov ecx, esi
        call public_522a60
        fld dword ptr ds : [esi+0xCC]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_5226c9
        mov byte ptr ss : [esp+0x13], 0
        public_5226c9 : nop
        mov edi, dword ptr ds : [esi+0x224]
        mov ebx, dword ptr ds : [esi+0x228]
        cmp edi, ebx
        je public_5226f5
        lea esp, ss:[esp]
        public_5226e0 : nop
        push esi
        lea ecx, ss:[esp+0x17]
        push ecx
        mov ecx, dword ptr ds : [edi]
        push ebp
        call public_5261b0
        add edi, 4
        cmp edi, ebx
        jne public_5226e0
        public_5226f5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5225d0)
    }
}

#undef public_52265d
#undef public_5226a9
#undef public_5226c9
#undef public_5226e0
#undef public_5226f5
