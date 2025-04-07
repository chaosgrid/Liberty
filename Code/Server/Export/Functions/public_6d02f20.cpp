#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce9550);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d02f41 _public_6d02f41
#define public_6d02f43 _public_6d02f43
#define public_6d02f64 _public_6d02f64
#define public_6d03002 _public_6d03002
#define public_6d03004 _public_6d03004
#define public_6d03065 _public_6d03065

PROC_DECLARE(0x6d02f20, internal_6d02f20, public_6d02f20);
extern "C" NAKED register_t __cdecl internal_6d02f20()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6d02f41
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6d02f43
        public_6d02f41 : nop
        xor eax, eax
        public_6d02f43 : nop
        cmp byte ptr ds : [eax+0x1A8], bl
        je public_6d02f64
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x5C]
        push edx
        push eax
        mov ecx, esi
        call public_6ce9550
        pop esi
        pop ebx
        add esp, 0x50
        ret 8
        public_6d02f64 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call public_6d06cd0
        mov edi, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+0x10]
        push ecx
        push 0xD
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        call public_6d43650
        mov esi, dword ptr ds : [esi+0x10]
        add esp, 8
        cmp esi, ebx
        pop edi
        je public_6d03002
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6d03002
        mov ecx, esi
        jmp public_6d03004
        public_6d03002 : nop
        xor ecx, ecx
        public_6d03004 : nop
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebx
        je public_6d03065
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], ecx
        lea edx, ss:[esp+0x34]
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [edx]
        public_6d03065 : nop
        pop esi
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6d02f20)
    }
}

#undef public_6d02f41
#undef public_6d02f43
#undef public_6d02f64
#undef public_6d03002
#undef public_6d03004
#undef public_6d03065
