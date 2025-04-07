#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0f10);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf3e0);

#define public_6ec29eb _public_6ec29eb
#define public_6ec2a02 _public_6ec2a02
#define public_6ec2a29 _public_6ec2a29
#define public_6ec2a57 _public_6ec2a57
#define public_6ec2a63 _public_6ec2a63
#define public_6ec2a6e _public_6ec2a6e
#define public_6ec2a76 _public_6ec2a76
#define public_6ec2ab4 _public_6ec2ab4
#define public_6ec2acf _public_6ec2acf
#define public_6ec2ae3 _public_6ec2ae3
#define public_6ec2b2b _public_6ec2b2b
#define public_6ec2b3d _public_6ec2b3d
#define public_6ec2b45 _public_6ec2b45
#define public_6ec2b67 _public_6ec2b67
#define public_6ec2b6f _public_6ec2b6f
#define public_6ec2b7b _public_6ec2b7b
#define public_6ec2b83 _public_6ec2b83
#define public_6ec2baa _public_6ec2baa
#define public_6ec2bdb _public_6ec2bdb
#define public_6ec2be3 _public_6ec2be3

PROC_DECLARE(0x6ec29d0, internal_6ec29d0, public_6ec29d0);
extern "C" NAKED register_t __cdecl internal_6ec29d0()
{
    __asm
    {
        sub esp, 0x48
        push ebp
        mov ebp, dword ptr ss : [esp+0x54]
        push esi
        or esi, 0xFFFFFFFF
        test ebp, ebp
        jne public_6ec29eb
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0x48
        ret 0x10
        public_6ec29eb : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [edi+0x58]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x60], eax
        je public_6ec2ae3
        public_6ec2a02 : nop
        mov ebx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x68]
        cmp dword ptr ds : [ebx+8], ecx
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ec2a29
        lea ecx, ss:[esp+0x60]
        call public_6ec5e20
        mov eax, dword ptr ss : [esp+0x60]
        cmp eax, dword ptr ds : [edi+0x58]
        jne public_6ec2a02
        jmp public_6ec2ae3
        public_6ec2a29 : nop
        mov edx, dword ptr ss : [ebp+0x24]
        test edx, edx
        lea esi, ss:[ebp+0x20]
        je public_6ec2a57
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0x64]
        sar ecx, 2
        cmp edx, ecx
        jae public_6ec2a57
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax+edx*4]
        push 1
        push ecx
        mov ecx, edi
        call public_6ec0bd0
        mov eax, dword ptr ss : [esp+0x60]
        public_6ec2a57 : nop
        cmp ebp, dword ptr ds : [eax+0x10]
        je public_6ec2a63
        mov ecx, ebp
        call public_6ebe560
        public_6ec2a63 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ec2a6e
        xor eax, eax
        jmp public_6ec2a76
        public_6ec2a6e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ec2a76 : nop
        mov edx, dword ptr ss : [esp+0x64]
        lea edi, ds:[edx+1]
        cmp eax, edi
        jae public_6ec2acf
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call public_6ecde00
        cmp eax, edi
        mov ecx, esi
        jae public_6ec2ab4
        mov ebx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x10]
        push eax
        call public_6ecde00
        sub edi, eax
        push edi
        push ebx
        mov ecx, esi
        call public_6ece6e0
        mov ebx, dword ptr ss : [esp+0x14]
        jmp public_6ec2acf
        public_6ec2ab4 : nop
        call public_6ecde00
        cmp edi, eax
        jae public_6ec2acf
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        lea eax, ds:[edx+edi*4]
        push eax
        mov ecx, esi
        call public_6ec3fe0
        public_6ec2acf : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [esp+0x64]
        mov edi, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+edx*4], ebx
        mov eax, dword ptr ss : [esp+0x60]
        xor esi, esi
        public_6ec2ae3 : nop
        cmp eax, dword ptr ds : [edi+0x58]
        jne public_6ec2be3
        mov esi, dword ptr ss : [esp+0x68]
        push esi
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_6ed4d40 @0x6ec2af5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4d40
        push eax
        call dword ptr ds : [public_6ed1058]
        add esp, 0xC
        push 0
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        mov ecx, edi
        call public_6ec0f10
        test al, al
        jne public_6ec2b2b
        pop edi
        or esi, 0xFFFFFFFF
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x48
        ret 0x10
        public_6ec2b2b : nop
        mov ebx, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [ebx+0x24]
        test ecx, ecx
        lea esi, ds:[ebx+0x20]
        jne public_6ec2b3d
        xor eax, eax
        jmp public_6ec2b45
        public_6ec2b3d : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ec2b45 : nop
        mov ebp, dword ptr ss : [esp+0x64]
        lea edi, ss:[ebp+1]
        cmp eax, edi
        jae public_6ec2bdb
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x64], 0
        jne public_6ec2b67
        xor eax, eax
        jmp public_6ec2b6f
        public_6ec2b67 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ec2b6f : nop
        cmp eax, edi
        jae public_6ec2baa
        test ecx, ecx
        jne public_6ec2b7b
        xor eax, eax
        jmp public_6ec2b83
        public_6ec2b7b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6ec2b83 : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x64]
        push ecx
        sub edi, eax
        push edi
        push edx
        mov ecx, esi
        call public_6ece6e0
        mov ecx, dword ptr ds : [ebx+0x24]
        pop edi
        mov dword ptr ds : [ecx+ebp*4], ebx
        xor esi, esi
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x48
        ret 0x10
        public_6ec2baa : nop
        test ecx, ecx
        je public_6ec2bdb
        mov edx, dword ptr ds : [esi+8]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_6ec2bdb
        lea eax, ds:[ecx+edi*4]
        push eax
        push edx
        push edx
        call public_6ecf3e0
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_6ecb170
        mov dword ptr ds : [esi+8], edi
        public_6ec2bdb : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov dword ptr ds : [ecx+ebp*4], ebx
        xor esi, esi
        public_6ec2be3 : nop
        pop edi
        pop ebx
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x48
        ret 0x10
        UNREACHABLE_TRAP(0x6ec29d0)
    }
}

#undef public_6ec29eb
#undef public_6ec2a02
#undef public_6ec2a29
#undef public_6ec2a57
#undef public_6ec2a63
#undef public_6ec2a6e
#undef public_6ec2a76
#undef public_6ec2ab4
#undef public_6ec2acf
#undef public_6ec2ae3
#undef public_6ec2b2b
#undef public_6ec2b3d
#undef public_6ec2b45
#undef public_6ec2b67
#undef public_6ec2b6f
#undef public_6ec2b7b
#undef public_6ec2b83
#undef public_6ec2baa
#undef public_6ec2bdb
#undef public_6ec2be3
