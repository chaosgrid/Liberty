#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_5145a0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_5145e4 _public_5145e4
#define public_5145e6 _public_5145e6
#define public_5145ff _public_5145ff
#define public_51460a _public_51460a
#define public_51460d _public_51460d
#define public_5146a5 _public_5146a5
#define public_5146a9 _public_5146a9
#define public_514713 _public_514713
#define public_51473a _public_51473a

PROC_DECLARE(0x5145a0, internal_5145a0, public_5145a0);
extern "C" NAKED register_t __cdecl internal_5145a0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        mov edi, ecx
        call public_54baf0
        cmp esi, eax
        mov eax, dword ptr ds : [edi+0x14]
        sete bl
        test eax, eax
        je public_5145e4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_5145e4
        add eax, 0xC
        test eax, eax
        je public_5145e4
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5145e4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_5145e6
        public_5145e4 : nop
        xor eax, eax
        public_5145e6 : nop
        push 0x800000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        test eax, eax
        jne public_5145ff
        xor edi, edi
        jmp public_51460d
        public_5145ff : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_51460a
        xor edi, edi
        jmp public_51460d
        public_51460a : nop
        mov edi, dword ptr ds : [eax+4]
        public_51460d : nop
        mov al, byte ptr ds : [esi+0x185]
        test al, 2
        mov dword ptr ss : [esp+0x44], edi
        jne public_51473a
        or al, 3
        test bl, bl
        mov ebx, dword ptr ds : [public_5c6040]
        mov byte ptr ds : [esi+0x185], al
        je public_5146a9
        add edi, 0x54
        mov ecx, edi
        call ebx
        test al, al
        jne public_5146a5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [edx+0x1C]
        jmp public_514713
        public_5146a5 : nop
        mov edi, dword ptr ss : [esp+0x44]
        public_5146a9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [edx+0x1C]
        add edi, 0x68
        public_514713 : nop
        mov ecx, edi
        mov ebp, eax
        call ebx
        test al, al
        jne public_51473a
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push ebp
        push esi
        push edi
        call public_40f080
        add esp, 4
        mov ecx, offset public_674c60
        push eax
        call public_503070
        public_51473a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x5145a0)
    }
}

#undef public_5145e4
#undef public_5145e6
#undef public_5145ff
#undef public_51460a
#undef public_51460d
#undef public_5146a5
#undef public_5146a9
#undef public_514713
#undef public_51473a
