#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f43f40);

#define public_6f43f50 _public_6f43f50
#define public_6f43f52 _public_6f43f52
#define public_6f44008 _public_6f44008
#define public_6f44017 _public_6f44017
#define public_6f4401c _public_6f4401c
#define public_6f44051 _public_6f44051
#define public_6f44078 _public_6f44078
#define public_6f44088 _public_6f44088
#define public_6f44094 _public_6f44094
#define public_6f4409e _public_6f4409e
#define public_6f440a7 _public_6f440a7
#define public_6f440c8 _public_6f440c8
#define public_6f440d5 _public_6f440d5
#define public_6f440dc _public_6f440dc
#define public_6f440e4 _public_6f440e4
#define public_6f4410b _public_6f4410b

PROC_DECLARE(0x6f43f40, internal_6f43f40, public_6f43f40);
extern "C" NAKED register_t __cdecl internal_6f43f40()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        test ebp, ebp
        push esi
        push edi
        je public_6f43f50
        lea eax, ss:[ebp+0x28]
        jmp public_6f43f52
        public_6f43f50 : nop
        xor eax, eax
        public_6f43f52 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebx
        push eax
        rep movsd
        call public_6f438c0
        xor eax, eax
        mov dword ptr ss : [ebp+0x28], 0xB
        mov dword ptr ss : [ebp+0x54], ebp
        mov dword ptr ss : [ebp+0x70], eax
        mov dword ptr ss : [ebp+0x74], eax
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x30
        cmp ecx, 0xB
        jne public_6f440e4
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x58], ecx
        mov edx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x5C], edx
        mov ecx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x60], ecx
        mov edx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ss : [ebp+0x64], edx
        mov cl, byte ptr ds : [ebx+0x40]
        mov byte ptr ss : [ebp+0x68], cl
        mov dl, byte ptr ds : [ebx+0x41]
        mov byte ptr ss : [ebp+0x69], dl
        mov ecx, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x6C], ecx
        mov esi, dword ptr ds : [ebx+0x48]
        cmp esi, eax
        je public_6f4401c
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push 1
        lea edx, ss:[ebp+0xAC]
        mov dword ptr ss : [esp+0x14], ecx
        push ecx
        mov ecx, edx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f44008
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [ebp+0xB0]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0xB0]
        mov eax, edx
        mov dword ptr ss : [ebp+0xB4], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f44008 : nop
        mov eax, dword ptr ss : [ebp+0xB0]
        test eax, eax
        jne public_6f44017
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f44017 : nop
        mov dword ptr ss : [ebp+0x70], eax
        xor eax, eax
        public_6f4401c : nop
        mov esi, dword ptr ds : [ebx+0x4C]
        cmp esi, eax
        je public_6f440dc
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea ebx, ss:[ebp+0xBC]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_6f5a050]
        cmp eax, edi
        jae public_6f44051
        call dword ptr ds : [public_6f5a01c]
        public_6f44051 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f44078
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f44078
        cmp cl, 0xFF
        je public_6f44078
        test edi, edi
        jne public_6f4409e
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f440c8
        public_6f44078 : nop
        test edi, edi
        jne public_6f44088
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f440c8
        public_6f44088 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f44094
        cmp eax, edi
        jae public_6f440a7
        public_6f44094 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f4409e : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_6f5a018]
        public_6f440a7 : nop
        mov eax, dword ptr ss : [esp+0x10]
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
        public_6f440c8 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f440d5
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f440d5 : nop
        mov dword ptr ss : [ebp+0x74], ebx
        mov ebx, dword ptr ss : [esp+0x18]
        public_6f440dc : nop
        mov edx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x78], edx
        jmp public_6f4410b
        public_6f440e4 : nop
        mov ecx, 0x3F800000
        mov dword ptr ss : [ebp+0x58], eax
        mov dword ptr ss : [ebp+0x5C], 1
        mov dword ptr ss : [ebp+0x60], 5
        mov dword ptr ss : [ebp+0x64], ecx
        mov byte ptr ss : [ebp+0x68], 0
        mov byte ptr ss : [ebp+0x69], 0
        mov dword ptr ss : [ebp+0x6C], ecx
        mov dword ptr ss : [ebp+0x78], eax
        public_6f4410b : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ss : [ebp+0x40]
        pop edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x48]
        add edx, eax
        mov eax, dword ptr ss : [ebp+0x44]
        pop esi
        mov dword ptr ss : [ebp+0x1C], edx
        mov dword ptr ss : [ebp+0x14], eax
        mov dword ptr ss : [ebp+0x18], ecx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f43f40)
    }
}

#undef public_6f43f50
#undef public_6f43f52
#undef public_6f44008
#undef public_6f44017
#undef public_6f4401c
#undef public_6f44051
#undef public_6f44078
#undef public_6f44088
#undef public_6f44094
#undef public_6f4409e
#undef public_6f440a7
#undef public_6f440c8
#undef public_6f440d5
#undef public_6f440dc
#undef public_6f440e4
#undef public_6f4410b
