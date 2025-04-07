#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47120);
CLANG_FORWARD_PROC_SYMBOL(public_6d48d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d57090);
CLANG_FORWARD_PROC_SYMBOL(public_6d57760);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a180);

#define public_6d48de7 _public_6d48de7
#define public_6d48e43 _public_6d48e43
#define public_6d48e4e _public_6d48e4e
#define public_6d48e62 _public_6d48e62

PROC_DECLARE(0x6d48d50, internal_6d48d50, public_6d48d50);
extern "C" NAKED register_t __cdecl internal_6d48d50()
{
    __asm
    {
        sub esp, 0x30C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x31C]
        push esi
        push edi
        push ebp
        lea eax, ss:[esp+0x120]
        push 0x200
        push eax
        mov edi, ecx
        mov byte ptr ss : [esp+0x128], 0
        call dword ptr ds : [public_6d644d0]
        add esp, 0xC
        lea ecx, ss:[esp+0x11C]
        lea esi, ds:[edi+0x50]
        push ecx
        mov ecx, esi
        call public_6d57090
        mov edx, dword ptr ss : [esp+0x320]
        push 0
        push ebp
        push edx
        mov ebx, eax
        lea eax, ss:[esp+0x24]
        push 0
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6d47120
        test al, al
        je public_6d48de7
        push ebp
        mov edx, ebx
        push 0x200
        push edx
        call dword ptr ds : [public_6d644d0]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x30C
        ret 8
        public_6d48de7 : nop
        mov edx, dword ptr ds : [public_6d64a44]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0x4A8
/*FIXUP push offset public_6d6b280 @0x6d48df7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100002
/*FIXUP push offset public_6d6b3e0 @0x6d48e01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b3e0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        lea eax, ss:[esp+0x11C]
        push eax
        mov ecx, esi
        call public_6d5a180
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d48e43
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x120]
        push ecx
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        jne public_6d48e43
        lea eax, ss:[esp+0x10]
        jmp public_6d48e4e
        public_6d48e43 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], edx
        lea eax, ss:[esp+0x14]
        public_6d48e4e : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x54]
        je public_6d48e62
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d57760
        public_6d48e62 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x30C
        ret 8
        UNREACHABLE_TRAP(0x6d48d50)
    }
}

#undef public_6d48de7
#undef public_6d48e43
#undef public_6d48e4e
#undef public_6d48e62
