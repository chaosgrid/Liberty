#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce9350);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d02db2 _public_6d02db2
#define public_6d02db4 _public_6d02db4
#define public_6d02dd6 _public_6d02dd6
#define public_6d02e86 _public_6d02e86
#define public_6d02e88 _public_6d02e88
#define public_6d02eeb _public_6d02eeb
#define public_6d02f0a _public_6d02f0a

PROC_DECLARE(0x6d02d90, internal_6d02d90, public_6d02d90);
extern "C" NAKED register_t __cdecl internal_6d02d90()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6d02db2
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6d02db4
        public_6d02db2 : nop
        xor eax, eax
        public_6d02db4 : nop
        cmp byte ptr ds : [eax+0x1A8], bl
        je public_6d02dd6
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x60]
        push edx
        push eax
        mov ecx, esi
        call public_6ce9350
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_6d02dd6 : nop
        mov ebp, dword ptr ss : [esp+0x60]
        mov cx, word ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_6d6401c]
        cmp cx, word ptr ds : [edx]
        jne public_6d02f0a
        mov ecx, dword ptr ds : [esi+0x28]
        push edi
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
        mov edi, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+0x10]
        push ecx
        push 0xD
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0x3F800000
        call public_6d43650
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 8
        cmp eax, ebx
        je public_6d02e86
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_6d02e88
        public_6d02e86 : nop
        xor eax, eax
        public_6d02e88 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebx
        je public_6d02eeb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], ecx
        lea edx, ss:[esp+0x3C]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [edx]
        public_6d02eeb : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [esi]
        push edi
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x21C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_6d02f0a : nop
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        push ebp
        mov ecx, esi
        call public_6ce9350
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6d02d90)
    }
}

#undef public_6d02db2
#undef public_6d02db4
#undef public_6d02dd6
#undef public_6d02e86
#undef public_6d02e88
#undef public_6d02eeb
#undef public_6d02f0a
