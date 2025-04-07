#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6cebd60 _public_6cebd60
#define public_6cebd62 _public_6cebd62
#define public_6cebe67 _public_6cebe67

PROC_DECLARE(0x6cebd40, internal_6cebd40, public_6cebd40);
extern "C" NAKED register_t __cdecl internal_6cebd40()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x10]
        xor ebx, ebx
        cmp esi, ebx
        je public_6cebd60
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6cebd62
        public_6cebd60 : nop
        xor esi, esi
        public_6cebd62 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        push ebp
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        call public_6d06cd0
        mov ebp, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx+0x20]
        mov edi, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x24], 0x40000
        mov dword ptr ss : [esp+0x2C], eax
        fld dword ptr ds : [esi+0x198]
        fsub dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        fstp dword ptr ss : [esp+0x34]
        push 0xD
        fld dword ptr ds : [esi+0x19C]
        fdivr dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x19C]
        fdivr dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x40]
        call public_6d43650
        add esp, 8
        mov ecx, esi
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebx
        pop ebp
        je public_6cebe67
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], ecx
        lea edx, ss:[esp+0x38]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [edx]
        public_6cebe67 : nop
        fld dword ptr ds : [edi+4]
        pop edi
        fstp dword ptr ds : [esi+0x198]
        pop esi
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6cebd40)
    }
}

#undef public_6cebd60
#undef public_6cebd62
#undef public_6cebe67
