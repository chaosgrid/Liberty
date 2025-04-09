#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41f8a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41f90c _public_41f90c
#define public_41f929 _public_41f929
#define public_41f941 _public_41f941
#define public_41f95e _public_41f95e

PROC_DECLARE(0x41f8a0, internal_41f8a0, public_41f8a0);
extern "C" NAKED register_t __cdecl internal_41f8a0()
{
    __asm
    {
        sub esp, 0x48
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, 9
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFE
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFD
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFC
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFB
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFA
        mov dword ptr ss : [esp+0x24], 0xFFFFFFF9
        mov dword ptr ss : [esp+0x28], 0xFFFFFFF8
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFF7
        jb public_41f90c
        mov dword ptr ss : [esp+0x34], 0
        jmp public_41f929
        public_41f90c : nop
        mov eax, dword ptr ss : [esp+eax*4+0xC]
        mov cl, byte ptr ss : [esp+0x5C]
        mov dl, byte ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x34], eax
        mov byte ptr ss : [esp+0x48], cl
        mov byte ptr ss : [esp+0x49], 0
        mov byte ptr ss : [esp+0x4A], dl
        public_41f929 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi+4]
        push 0x2C
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_41f941
        mov edi, eax
        public_41f941 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_41f95e
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        rep movsd
        public_41f95e : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x41f8a0)
    }
}

#undef public_41f90c
#undef public_41f929
#undef public_41f941
#undef public_41f95e
