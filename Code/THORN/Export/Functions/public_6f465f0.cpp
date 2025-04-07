#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f465f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f4668a _public_6f4668a
#define public_6f466a3 _public_6f466a3
#define public_6f466b0 _public_6f466b0
#define public_6f466e5 _public_6f466e5
#define public_6f4670c _public_6f4670c
#define public_6f4671c _public_6f4671c
#define public_6f46728 _public_6f46728
#define public_6f46732 _public_6f46732
#define public_6f4673b _public_6f4673b
#define public_6f4675c _public_6f4675c
#define public_6f46769 _public_6f46769
#define public_6f46773 _public_6f46773
#define public_6f4678e _public_6f4678e

PROC_DECLARE(0x6f465f0, internal_6f465f0, public_6f465f0);
extern "C" NAKED register_t __cdecl internal_6f465f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        xor eax, eax
        mov dword ptr ss : [ebp+0x98], eax
        mov dword ptr ss : [ebp+0x104], eax
        sub esp, 0x2C
        lea eax, ss:[ebp+0x28]
        mov edi, esp
        mov dword ptr ss : [ebp+0x9C], 1
        mov ecx, 0xB
        mov esi, ebx
        push eax
        rep movsd
        call public_6f438c0
        xor edx, edx
        mov dword ptr ss : [ebp+0x28], 7
        mov dword ptr ss : [ebp+0x54], edx
        mov dword ptr ss : [ebp+0xA0], edx
        mov dword ptr ss : [ebp+0xA4], edx
        mov eax, dword ptr ds : [ebx]
        add esp, 0x30
        cmp eax, 7
        jne public_6f4678e
        mov eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x54], eax
        test byte ptr ss : [ebp+0x30], 0x10
        lea esi, ds:[ebx+0x30]
        lea edi, ss:[ebp+0x58]
        mov ecx, 0xC
        rep movsd
        je public_6f4668a
        lea ecx, ds:[ebx+0x60]
        mov esi, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x88]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        jmp public_6f466b0
        public_6f4668a : nop
        mov eax, dword ptr ds : [public_6f61e20]
        cmp eax, edx
        lea esi, ss:[ebp+0x88]
        jne public_6f466a3
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f466a3 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x30]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x50]
        xor edx, edx
        public_6f466b0 : nop
        mov esi, dword ptr ds : [ebx+0x78]
        cmp esi, edx
        je public_6f46773
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea ebx, ss:[ebp+0xA8]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_6f5a050]
        cmp eax, edi
        jae public_6f466e5
        call dword ptr ds : [public_6f5a01c]
        public_6f466e5 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f4670c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4670c
        cmp cl, 0xFF
        je public_6f4670c
        test edi, edi
        jne public_6f46732
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f4675c
        public_6f4670c : nop
        test edi, edi
        jne public_6f4671c
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f4675c
        public_6f4671c : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f46728
        cmp eax, edi
        jae public_6f4673b
        public_6f46728 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f46732 : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_6f5a018]
        public_6f4673b : nop
        mov ecx, edi
        mov edi, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f4675c : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f46769
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f46769 : nop
        mov dword ptr ss : [ebp+0xA0], ebx
        mov ebx, dword ptr ss : [esp+0x18]
        public_6f46773 : nop
        mov edx, dword ptr ds : [ebx+0x7C]
        mov dword ptr ss : [ebp+0xA4], edx
        mov eax, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x98], eax
        mov ecx, dword ptr ds : [ebx+0x74]
        mov dword ptr ss : [ebp+0x9C], ecx
        public_6f4678e : nop
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
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f465f0)
    }
}

#undef public_6f4668a
#undef public_6f466a3
#undef public_6f466b0
#undef public_6f466e5
#undef public_6f4670c
#undef public_6f4671c
#undef public_6f46728
#undef public_6f46732
#undef public_6f4673b
#undef public_6f4675c
#undef public_6f46769
#undef public_6f46773
#undef public_6f4678e
