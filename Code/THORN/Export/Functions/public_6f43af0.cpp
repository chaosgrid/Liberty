#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f43af0);

#define public_6f43aff _public_6f43aff
#define public_6f43b01 _public_6f43b01
#define public_6f43bb5 _public_6f43bb5
#define public_6f43bc4 _public_6f43bc4
#define public_6f43bc9 _public_6f43bc9
#define public_6f43bfe _public_6f43bfe
#define public_6f43c25 _public_6f43c25
#define public_6f43c35 _public_6f43c35
#define public_6f43c41 _public_6f43c41
#define public_6f43c4b _public_6f43c4b
#define public_6f43c54 _public_6f43c54
#define public_6f43c75 _public_6f43c75
#define public_6f43c82 _public_6f43c82
#define public_6f43c87 _public_6f43c87
#define public_6f43ca9 _public_6f43ca9

PROC_DECLARE(0x6f43af0, internal_6f43af0, public_6f43af0);
extern "C" NAKED register_t __cdecl internal_6f43af0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        test ebp, ebp
        push esi
        push edi
        je public_6f43aff
        lea eax, ss:[ebp+0x28]
        jmp public_6f43b01
        public_6f43aff : nop
        xor eax, eax
        public_6f43b01 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebx
        push eax
        rep movsd
        call public_6f438c0
        xor eax, eax
        mov dword ptr ss : [ebp+0x28], 0xA
        mov dword ptr ss : [ebp+0x64], eax
        mov dword ptr ss : [ebp+0x70], eax
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x30
        cmp ecx, 0xA
        jne public_6f43c87
        mov ecx, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x6C], ecx
        mov dl, byte ptr ds : [ebx+0x40]
        mov byte ptr ss : [ebp+0x68], dl
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x54], ecx
        mov edx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x5C], edx
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x78], ecx
        mov edx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x58], edx
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x74], ecx
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x60], edx
        mov esi, dword ptr ds : [ebx+0x3C]
        cmp esi, eax
        je public_6f43bc9
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea edx, ss:[ebp+0x7C]
        mov dword ptr ss : [esp+0x18], ecx
        push ecx
        mov ecx, edx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f43bb5
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [ebp+0x80]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x80]
        mov dword ptr ss : [ebp+0x84], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f43bb5 : nop
        mov eax, dword ptr ss : [ebp+0x80]
        test eax, eax
        jne public_6f43bc4
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f43bc4 : nop
        mov dword ptr ss : [ebp+0x64], eax
        xor eax, eax
        public_6f43bc9 : nop
        mov esi, dword ptr ds : [ebx+0x48]
        cmp esi, eax
        je public_6f43ca9
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea ebx, ss:[ebp+0x8C]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_6f5a050]
        cmp eax, edi
        jae public_6f43bfe
        call dword ptr ds : [public_6f5a01c]
        public_6f43bfe : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f43c25
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f43c25
        cmp cl, 0xFF
        je public_6f43c25
        test edi, edi
        jne public_6f43c4b
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f43c75
        public_6f43c25 : nop
        test edi, edi
        jne public_6f43c35
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f43c75
        public_6f43c35 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f43c41
        cmp eax, edi
        jae public_6f43c54
        public_6f43c41 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f43c4b : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_6f5a018]
        public_6f43c54 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, edi
        mov edi, dword ptr ds : [ebx+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f43c75 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f43c82
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f43c82 : nop
        mov dword ptr ss : [ebp+0x70], ebx
        jmp public_6f43ca9
        public_6f43c87 : nop
        mov ecx, 0x3F800000
        mov dword ptr ss : [ebp+0x6C], 0xBF800000
        mov byte ptr ss : [ebp+0x68], 0
        mov dword ptr ss : [ebp+0x54], eax
        mov dword ptr ss : [ebp+0x5C], ecx
        mov dword ptr ss : [ebp+0x78], eax
        mov dword ptr ss : [ebp+0x58], eax
        mov dword ptr ss : [ebp+0x74], ecx
        mov dword ptr ss : [ebp+0x60], ecx
        public_6f43ca9 : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov edx, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [ebp+0x40]
        pop edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, dword ptr ss : [ebp+0x44]
        add ecx, eax
        mov eax, dword ptr ss : [ebp+0x48]
        pop esi
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dword ptr ss : [ebp+0x14], edx
        mov dword ptr ss : [ebp+0x18], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f43af0)
    }
}

#undef public_6f43aff
#undef public_6f43b01
#undef public_6f43bb5
#undef public_6f43bc4
#undef public_6f43bc9
#undef public_6f43bfe
#undef public_6f43c25
#undef public_6f43c35
#undef public_6f43c41
#undef public_6f43c4b
#undef public_6f43c54
#undef public_6f43c75
#undef public_6f43c82
#undef public_6f43c87
#undef public_6f43ca9
