#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1010);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2dc0);

#define public_6ec3d26 _public_6ec3d26
#define public_6ec3d3a _public_6ec3d3a
#define public_6ec3d52 _public_6ec3d52
#define public_6ec3d7c _public_6ec3d7c
#define public_6ec3d90 _public_6ec3d90
#define public_6ec3df5 _public_6ec3df5
#define public_6ec3e00 _public_6ec3e00
#define public_6ec3e0a _public_6ec3e0a

PROC_DECLARE(0x6ec3cf0, internal_6ec3cf0, public_6ec3cf0);
extern "C" NAKED register_t __cdecl internal_6ec3cf0()
{
    __asm
    {
        sub esp, 0x70
        push ebx
        mov ebx, dword ptr ss : [esp+0x78]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov esi, ecx
/*FIXUP push offset public_6fb579c @0x6ec3d03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec3d26
        mov byte ptr ds : [esi+0x34], 1
        jmp public_6ec3d3a
        public_6ec3d26 : nop
        push 0
        mov ecx, ebx
        call edi
        push eax
        lea eax, ds:[esi+0x30]
        push eax
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec3d3a : nop
        mov ebp, 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        xor edi, edi
        test al, al
        jne public_6ec3df5
        public_6ec3d52 : nop
        cmp ebp, 0x32
        jge public_6ec3df5
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3048]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], 0
        jne public_6ec3d7c
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], 0
        jmp public_6ec3d90
        public_6ec3d7c : nop
        push eax
        lea ecx, ss:[esp+0x1C]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        public_6ec3d90 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, 0xD
        lea esi, ss:[esp+0x14]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov edi, dword ptr ds : [edx+0x10]
        lea esi, ds:[edx+0xC]
        mov dword ptr ss : [esp+0x7C], 0
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        call public_6ed1010
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x48]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ed2dc0
        mov edi, dword ptr ds : [esi+8]
        add esp, 8
        inc edi
        inc ebp
        push ebp
        mov ecx, ebx
        mov dword ptr ds : [esi+8], edi
        call dword ptr ds : [public_6fb306c]
        mov esi, dword ptr ss : [esp+0x10]
        xor edi, edi
        test al, al
        je public_6ec3d52
        public_6ec3df5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6ec3e0a
        mov edi, edi
        public_6ec3e00 : nop
        mov dword ptr ds : [eax+0x3C], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6ec3e00
        public_6ec3e0a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x6ec3cf0)
    }
}

#undef public_6ec3d26
#undef public_6ec3d3a
#undef public_6ec3d52
#undef public_6ec3d7c
#undef public_6ec3d90
#undef public_6ec3df5
#undef public_6ec3e00
#undef public_6ec3e0a
