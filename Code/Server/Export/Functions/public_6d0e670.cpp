#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e670);

#define public_6d0e69e _public_6d0e69e
#define public_6d0e6a2 _public_6d0e6a2
#define public_6d0e6b4 _public_6d0e6b4
#define public_6d0e6e9 _public_6d0e6e9
#define public_6d0e704 _public_6d0e704
#define public_6d0e70c _public_6d0e70c
#define public_6d0e738 _public_6d0e738
#define public_6d0e748 _public_6d0e748

PROC_DECLARE(0x6d0e670, internal_6d0e670, public_6d0e670);
extern "C" NAKED register_t __cdecl internal_6d0e670()
{
    __asm
    {
        sub esp, 0x1C
        mov edx, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x18], esi
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6d0e69e
        xor edi, edi
        mov dword ptr ss : [esp+8], edi
        jmp public_6d0e6a2
        public_6d0e69e : nop
        mov edi, dword ptr ss : [esp+8]
        public_6d0e6a2 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0e748
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        public_6d0e6b4 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, dword ptr ds : [ecx]
        je public_6d0e738
        test edi, edi
        je public_6d0e738
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        test dword ptr ss : [esp+0x34], 0xFDFF
        jne public_6d0e6e9
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf73d0
        test al, al
        je public_6d0e738
        public_6d0e6e9 : nop
        test ebx, ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        je public_6d0e704
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6d0e70c
        public_6d0e704 : nop
        mov dword ptr ss : [esp+0x20], 0
        public_6d0e70c : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov dx, word ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x30]
        mov cx, word ptr ds : [eax]
        lea eax, ss:[esp+0x18]
        mov word ptr ss : [esp+0x1C], cx
        mov ecx, dword ptr ds : [public_6d8fb14]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        mov word ptr ss : [esp+0x28], dx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6d0e738 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xC]
        jne public_6d0e6b4
        pop ebx
        public_6d0e748 : nop
        pop edi
        pop esi
        add esp, 0x1C
        ret 0x14
        UNREACHABLE_TRAP(0x6d0e670)
    }
}

#undef public_6d0e69e
#undef public_6d0e6a2
#undef public_6d0e6b4
#undef public_6d0e6e9
#undef public_6d0e704
#undef public_6d0e70c
#undef public_6d0e738
#undef public_6d0e748
