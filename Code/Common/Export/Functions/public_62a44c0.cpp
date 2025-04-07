#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62a44c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a52a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a53c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5600);
CLANG_FORWARD_PROC_SYMBOL(public_62a5710);

#define public_62a44d2 _public_62a44d2
#define public_62a44e0 _public_62a44e0
#define public_62a4510 _public_62a4510
#define public_62a4591 _public_62a4591
#define public_62a45ba _public_62a45ba
#define public_62a45c0 _public_62a45c0
#define public_62a45c4 _public_62a45c4
#define public_62a45d1 _public_62a45d1
#define public_62a45e0 _public_62a45e0
#define public_62a45ef _public_62a45ef

PROC_DECLARE(0x62a44c0, internal_62a44c0, public_62a44c0);
extern "C" NAKED register_t __cdecl internal_62a44c0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62a44e0
        public_62a44d2 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_62a5600
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a44d2
        public_62a44e0 : nop
        mov ebp, dword ptr ds : [ebx+0xC]
        xor eax, eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ds : [public_63eb7f0]
        test al, al
        mov dword ptr ss : [esp+0x2C], 0x7F0000
        mov ebx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x14], ebx
        je public_62a45d1
        lea esp, ss:[esp]
        public_62a4510 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [eax]
        mov esi, eax
        test esi, esi
        je public_62a45d1
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x13]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x134]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62a45c4
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        xor edi, edi
        cmp ebx, ebp
        mov esi, ebx
        je public_62a45c4
        public_62a4591 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x18]
        push eax
        call public_62a53c0
        test al, al
        je public_62a45ba
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x1C]
        push edx
        inc edi
        call public_62a5710
        cmp edi, 2
        jge public_62a45c0
        public_62a45ba : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_62a4591
        public_62a45c0 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_62a45c4 : nop
        mov al, byte ptr ds : [public_63eb7f0]
        test al, al
        jne public_62a4510
        public_62a45d1 : nop
        cmp ebx, ebp
        mov esi, ebx
        je public_62a45ef
        mov edi, dword ptr ss : [esp+0x44]
        nop 
        lea esp, ss:[esp]
        public_62a45e0 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_62a52a0
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_62a45e0
        public_62a45ef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x62a44c0)
    }
}

#undef public_62a44d2
#undef public_62a44e0
#undef public_62a4510
#undef public_62a4591
#undef public_62a45ba
#undef public_62a45c0
#undef public_62a45c4
#undef public_62a45d1
#undef public_62a45e0
#undef public_62a45ef
