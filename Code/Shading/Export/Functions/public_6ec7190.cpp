#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec71d0 _public_6ec71d0
#define public_6ec71d8 _public_6ec71d8
#define public_6ec7218 _public_6ec7218
#define public_6ec721b _public_6ec721b
#define public_6ec7238 _public_6ec7238
#define public_6ec723a _public_6ec723a
#define public_6ec724a _public_6ec724a
#define public_6ec725a _public_6ec725a
#define public_6ec726c _public_6ec726c

PROC_DECLARE(0x6ec7190, internal_6ec7190, public_6ec7190);
extern "C" NAKED register_t __cdecl internal_6ec7190()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        lea esi, ds:[edi+8]
        push edx
        mov ecx, esi
        or ebx, 0xFFFFFFFF
        call public_6ec6120
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec71d0
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ec71d0
        lea eax, ss:[esp+0x10]
        jmp public_6ec71d8
        public_6ec71d0 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6ec71d8 : nop
        mov ebp, dword ptr ds : [eax]
        cmp ebp, dword ptr ds : [edi+0xC]
        je public_6ec726c
        push 0x1C
        call public_6ed0c5c
        xor edi, edi
        add esp, 4
        cmp eax, edi
        je public_6ec7238
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax], offset public_6ed2bb8
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [public_6ed57e8]
        cmp ecx, edi
        mov dword ptr ds : [public_6ed57e8], eax
        jne public_6ec7218
        mov dword ptr ds : [public_6ed57e4], eax
        jmp public_6ec721b
        public_6ec7218 : nop
        mov dword ptr ds : [ecx+0x10], eax
        public_6ec721b : nop
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], edi
        inc dword ptr ds : [public_6ed57ec]
        mov dword ptr ds : [eax], offset public_6ed2b9c
        mov dword ptr ds : [eax+0x18], 1
        mov esi, eax
        jmp public_6ec723a
        public_6ec7238 : nop
        xor esi, esi
        public_6ec723a : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_6ec724a
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], edi
        public_6ec724a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, edi
        mov dword ptr ds : [esi+4], eax
        je public_6ec725a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec725a : nop
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6ec726c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ec7190)
    }
}

#undef public_6ec71d0
#undef public_6ec71d8
#undef public_6ec7218
#undef public_6ec721b
#undef public_6ec7238
#undef public_6ec723a
#undef public_6ec724a
#undef public_6ec725a
#undef public_6ec726c
