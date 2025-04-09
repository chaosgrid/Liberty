#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564610);
CLANG_FORWARD_PROC_SYMBOL(public_5a3ee0);

#define public_5a3ef4 _public_5a3ef4
#define public_5a3fe0 _public_5a3fe0
#define public_5a4007 _public_5a4007
#define public_5a4017 _public_5a4017
#define public_5a4023 _public_5a4023
#define public_5a402d _public_5a402d
#define public_5a4036 _public_5a4036
#define public_5a4056 _public_5a4056
#define public_5a4063 _public_5a4063
#define public_5a4074 _public_5a4074

PROC_DECLARE(0x5a3ee0, internal_5a3ee0, public_5a3ee0);
extern "C" NAKED register_t __cdecl internal_5a3ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x20]
        sub esp, 0xC
        test eax, eax
        push ebx
        push esi
        mov ebx, ecx
        jne public_5a3ef4
        mov eax, 0xF
        public_5a3ef4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+0x384], eax
        mov esi, dword ptr ds : [ecx]
        lea eax, ds:[ebx+0xA8]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ebx+0x60]
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+0x350]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        fadd dword ptr ds : [ebx+0x68]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[ebx+0xB4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov al, byte ptr ds : [ebx+0x35C]
        mov dword ptr ds : [ecx+8], edx
        mov cl, byte ptr ss : [esp+0x24]
        mov dl, byte ptr ss : [esp+0x28]
        shl cl, 3
        xor cl, al
        and cl, 8
        xor cl, al
        test esi, esi
        mov eax, dword ptr ss : [esp+0x2C]
        mov byte ptr ds : [ebx+0x35C], cl
        mov ecx, dword ptr ss : [esp+0x30]
        mov byte ptr ds : [ebx+0x2D1], dl
        mov dword ptr ds : [ebx+0xCC], eax
        mov dword ptr ds : [ebx+0x38C], ecx
        je public_5a4074
        cmp byte ptr ds : [esi], 0
        je public_5a4074
        push ebp
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea ebp, ds:[ebx+0x368]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_5c6f90]
        cmp eax, edi
        jae public_5a3fe0
        call dword ptr ds : [public_5c7070]
        public_5a3fe0 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_5a4007
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5a4007
        cmp cl, 0xFF
        je public_5a4007
        test edi, edi
        jne public_5a402d
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        jmp public_5a4056
        public_5a4007 : nop
        test edi, edi
        jne public_5a4017
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        jmp public_5a4056
        public_5a4017 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_5a4023
        cmp eax, edi
        jae public_5a4036
        public_5a4023 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        public_5a402d : nop
        mov ecx, ebp
        push edi
        call dword ptr ds : [public_5c7074]
        public_5a4036 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_5a4056 : nop
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        jne public_5a4063
        mov ebp, dword ptr ds : [public_5c7078]
        public_5a4063 : nop
        push ebp
        call public_564610
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx+0x380], eax
        pop ebp
        public_5a4074 : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 0x20
        UNREACHABLE_TRAP(0x5a3ee0)
    }
}

#undef public_5a3ef4
#undef public_5a3fe0
#undef public_5a4007
#undef public_5a4017
#undef public_5a4023
#undef public_5a402d
#undef public_5a4036
#undef public_5a4056
#undef public_5a4063
#undef public_5a4074
