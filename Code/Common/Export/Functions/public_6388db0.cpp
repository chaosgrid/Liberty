#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6372280);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_63864e0);
CLANG_FORWARD_PROC_SYMBOL(public_6388db0);
CLANG_FORWARD_PROC_SYMBOL(public_6389050);
CLANG_FORWARD_PROC_SYMBOL(public_638ac90);
CLANG_FORWARD_PROC_SYMBOL(public_638afe0);

#define public_6388e61 _public_6388e61
#define public_6388ea8 _public_6388ea8
#define public_6388ec6 _public_6388ec6
#define public_6388ee3 _public_6388ee3
#define public_6388f1b _public_6388f1b
#define public_6388f23 _public_6388f23
#define public_6388f53 _public_6388f53
#define public_6388f68 _public_6388f68
#define public_6388f81 _public_6388f81
#define public_6388fae _public_6388fae
#define public_6388fc3 _public_6388fc3
#define public_6388fe0 _public_6388fe0
#define public_6388fea _public_6388fea
#define public_6389015 _public_6389015
#define public_638903f _public_638903f
#define public_6389048 _public_6389048

PROC_DECLARE(0x6388db0, internal_6388db0, public_6388db0);
extern "C" NAKED register_t __cdecl internal_6388db0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0x3FF00000
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        call public_63864e0
        push ebx
        call public_6372280
        push eax
        mov dword ptr ss : [esp+0x28], eax
        call public_636ec10
        push eax
        call public_636ec70
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        test edi, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6388ea8
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test esi, esi
        je public_6388ea8
        public_6388e61 : nop
        mov ecx, dword ptr ds : [public_658bb70]
        lea edx, ss:[esp+0x28]
        inc ecx
        push edx
        mov dword ptr ds : [public_658bb70], ecx
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        call public_637fd60
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push ebx
        push eax
        call public_6381270
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_636e1b0
        mov esi, dword ptr ds : [edi]
        add esp, 0x24
        add edi, 4
        test esi, esi
        jne public_6388e61
        public_6388ea8 : nop
        mov eax, dword ptr ds : [public_658b110]
        test eax, eax
        mov esi, dword ptr ss : [ebp+0x10]
        jne public_6388ec6
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6388ee3
        mov eax, dword ptr ds : [public_658b100]
        test eax, eax
        jne public_6388f1b
        public_6388ec6 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edx
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ebx
        push ecx
        push edx
        call public_6389050
        add esp, 0x18
        public_6388ee3 : nop
        mov eax, dword ptr ds : [public_658b100]
        test eax, eax
        jne public_6388f1b
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6388f53
        mov eax, dword ptr ds : [public_658b110]
        test eax, eax
        jne public_6388f53
        fld qword ptr ss : [esp+0x18]
        fsub qword ptr ss : [esp+0x20]
        fld qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_63a5a60]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6388f53
        public_6388f1b : nop
        lea eax, ds:[esi+0x10]
        mov ecx, 3
        public_6388f23 : nop
        fld qword ptr ds : [public_63a5940]
        dec ecx
        fsub qword ptr ds : [eax]
        sub eax, 8
        test ecx, ecx
        fstp qword ptr ds : [eax+8]
        ja public_6388f23
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push ebx
        push edx
        push eax
        call public_6389050
        add esp, 0x18
        public_6388f53 : nop
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6388f81
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_6388f81
        public_6388f68 : nop
        mov ecx, dword ptr ds : [public_658b804]
        push ecx
        push eax
        call public_6377fe0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_6388f68
        public_6388f81 : nop
        lea edx, ss:[esp+0x10]
        push edx
        call public_636ecc0
        lea eax, ss:[esp+0x18]
        push eax
        call public_636ecc0
        mov eax, dword ptr ds : [public_658b054]
        add esp, 8
        test eax, eax
        jne public_6388fae
        mov eax, dword ptr ds : [public_658b188]
        test eax, eax
        je public_6389048
        public_6388fae : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        je public_6388fc3
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_6389048
        public_6388fc3 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        mov ecx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [ebx+0x48], ecx
        je public_6389048
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6389048
        public_6388fe0 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_6388fea
        mov eax, dword ptr ds : [esi+8]
        public_6388fea : nop
        mov edx, dword ptr ds : [eax+0x48]
        cmp edx, dword ptr ds : [public_658b8e0]
        je public_638903f
        mov ecx, dword ptr ds : [public_658b054]
        test ecx, ecx
        je public_6389015
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        call public_638ac90
        add esp, 0x14
        public_6389015 : nop
        mov eax, dword ptr ds : [public_658b188]
        test eax, eax
        je public_638903f
        mov esi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        call public_638afe0
        add esp, 0x10
        public_638903f : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6388fe0
        public_6389048 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6388db0)
    }
}

#undef public_6388e61
#undef public_6388ea8
#undef public_6388ec6
#undef public_6388ee3
#undef public_6388f1b
#undef public_6388f23
#undef public_6388f53
#undef public_6388f68
#undef public_6388f81
#undef public_6388fae
#undef public_6388fc3
#undef public_6388fe0
#undef public_6388fea
#undef public_6389015
#undef public_638903f
#undef public_6389048
