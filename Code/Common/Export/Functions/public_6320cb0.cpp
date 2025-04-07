#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_626c230);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62b9530);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_631fdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_6321eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6320cf1 _public_6320cf1
#define public_6320d00 _public_6320d00
#define public_6320d43 _public_6320d43
#define public_6320d4a _public_6320d4a
#define public_6320d8c _public_6320d8c
#define public_6320d94 _public_6320d94
#define public_6320da0 _public_6320da0
#define public_6320dee _public_6320dee
#define public_6320df6 _public_6320df6
#define public_6320dff _public_6320dff
#define public_6320e10 _public_6320e10
#define public_6320e4b _public_6320e4b
#define public_6320e59 _public_6320e59
#define public_6320e99 _public_6320e99

PROC_DECLARE(0x6320cb0, internal_6320cb0, public_6320cb0);
extern "C" NAKED register_t __cdecl internal_6320cb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0xC
        or eax, 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        push ebp
        je public_6320e99
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, offset public_64018c4
        call public_6321eb0
        mov ebp, dword ptr ss : [esp+4]
        cmp ebp, dword ptr ds : [public_64018c8]
        je public_6320cf1
        add ebp, 0x10
        test ebp, ebp
        jne public_6320d00
        public_6320cf1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6320290
        add esp, 4
        mov ebp, eax
        public_6320d00 : nop
        test ebp, ebp
        mov eax, 0xFFFFFFFE
        je public_6320e99
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], edx
        jne public_6320d4a
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_64018ec
        call public_6301640
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_64018f0]
        je public_6320d43
        add eax, 0x10
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_6320d4a
        public_6320d43 : nop
        mov dword ptr ss : [ebp+0xC], 0
        public_6320d4a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push ebx
        push esi
        mov dword ptr ss : [ebp+0x74], edx
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov eax, dword ptr ss : [ebp+0x80]
        lea esi, ss:[ebp+0x78]
        push edi
        push ecx
        push eax
        push eax
        call public_626c230
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_628f050
        movzx ebx, byte ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6320d8c
        xor ecx, ecx
        jmp public_6320d94
        public_6320d8c : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        public_6320d94 : nop
        cmp ecx, ebx
        jae public_6320dff
        test ebx, ebx
        mov eax, ebx
        jge public_6320da0
        xor eax, eax
        public_6320da0 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        push edi
        push edx
        push eax
        mov ecx, esi
        call public_62b9530
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        lea ecx, ds:[edi+ebx*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6320dee
        xor eax, eax
        jmp public_6320df6
        public_6320dee : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6320df6 : nop
        lea edx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        public_6320dff : nop
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        jbe public_6320e59
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x2C], ebx
        nop 
        public_6320e10 : nop
        mov ebx, dword ptr ds : [public_64018f0]
        push edi
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, offset public_64018ec
        call public_6301640
        cmp dword ptr ss : [esp+0x28], ebx
        je public_6320e4b
        mov edx, dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_626b560
        public_6320e4b : nop
        mov eax, dword ptr ss : [esp+0x2C]
        add edi, 8
        dec eax
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6320e10
        public_6320e59 : nop
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        lea ecx, ss:[ebp+0x10]
        call public_630dda0
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        lea ecx, ss:[ebp+0x28]
        call public_630dda0
        mov edx, dword ptr ss : [esp+0x3C]
        push 0x17
        push edx
        lea eax, ss:[ebp+0x44]
        push eax
        call dword ptr ds : [public_6399234]
        add esp, 0xC
        mov ecx, ebp
        mov word ptr ss : [ebp+0x72], 0
        call public_631fdd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        public_6320e99 : nop
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6320cb0)
    }
}

#undef public_6320cf1
#undef public_6320d00
#undef public_6320d43
#undef public_6320d4a
#undef public_6320d8c
#undef public_6320d94
#undef public_6320da0
#undef public_6320dee
#undef public_6320df6
#undef public_6320dff
#undef public_6320e10
#undef public_6320e4b
#undef public_6320e59
#undef public_6320e99
