#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49570);

#define public_6f49580 _public_6f49580
#define public_6f49582 _public_6f49582
#define public_6f495e6 _public_6f495e6
#define public_6f4960d _public_6f4960d
#define public_6f4961d _public_6f4961d
#define public_6f49629 _public_6f49629
#define public_6f49633 _public_6f49633
#define public_6f4963c _public_6f4963c
#define public_6f4965d _public_6f4965d
#define public_6f4966a _public_6f4966a
#define public_6f49671 _public_6f49671
#define public_6f49677 _public_6f49677

PROC_DECLARE(0x6f49570, internal_6f49570, public_6f49570);
extern "C" NAKED register_t __cdecl internal_6f49570()
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
        je public_6f49580
        lea eax, ss:[ebp+0x28]
        jmp public_6f49582
        public_6f49580 : nop
        xor eax, eax
        public_6f49582 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebx
        push eax
        rep movsd
        call public_6f438c0
        xor eax, eax
        mov dword ptr ss : [ebp+0x28], 0x12
        mov dword ptr ss : [ebp+0x58], eax
        mov dword ptr ss : [ebp+0x5C], eax
        mov ecx, dword ptr ds : [ebx]
        add esp, 0x30
        cmp ecx, 0x12
        jne public_6f49677
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x54], ecx
        mov esi, dword ptr ds : [ebx+0x30]
        cmp esi, eax
        je public_6f49671
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        cmp edi, 0xFFFFFFFD
        lea ebx, ss:[ebp+0x60]
        mov dword ptr ss : [esp+0x10], edi
        jbe public_6f495e6
        call dword ptr ds : [public_6f5a01c]
        public_6f495e6 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f4960d
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4960d
        cmp cl, 0xFF
        je public_6f4960d
        test edi, edi
        jne public_6f49633
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f4965d
        public_6f4960d : nop
        test edi, edi
        jne public_6f4961d
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f4965d
        public_6f4961d : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f49629
        cmp eax, edi
        jae public_6f4963c
        public_6f49629 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f49633 : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_6f5a018]
        public_6f4963c : nop
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
        public_6f4965d : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f4966a
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f4966a : nop
        mov dword ptr ss : [ebp+0x58], ebx
        mov ebx, dword ptr ss : [esp+0x18]
        public_6f49671 : nop
        mov edx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x5C], edx
        public_6f49677 : nop
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
        UNREACHABLE_TRAP(0x6f49570)
    }
}

#undef public_6f49580
#undef public_6f49582
#undef public_6f495e6
#undef public_6f4960d
#undef public_6f4961d
#undef public_6f49629
#undef public_6f49633
#undef public_6f4963c
#undef public_6f4965d
#undef public_6f4966a
#undef public_6f49671
#undef public_6f49677
