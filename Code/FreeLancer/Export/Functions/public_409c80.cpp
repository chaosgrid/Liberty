#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_40d7c0);
CLANG_FORWARD_PROC_SYMBOL(public_40d7f0);
CLANG_FORWARD_PROC_SYMBOL(public_40ddd0);
CLANG_FORWARD_PROC_SYMBOL(public_40e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_40e200);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5756a0);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_409d70 _public_409d70
#define public_409d8a _public_409d8a
#define public_409d95 _public_409d95
#define public_409dab _public_409dab
#define public_409dc9 _public_409dc9
#define public_409de7 _public_409de7
#define public_409df4 _public_409df4
#define public_409e08 _public_409e08
#define public_409e13 _public_409e13
#define public_409e29 _public_409e29
#define public_409e2c _public_409e2c
#define public_409e46 _public_409e46
#define public_409e98 _public_409e98
#define public_409ec0 _public_409ec0
#define public_409ef9 _public_409ef9

PROC_DECLARE(0x409c80, internal_409c80, public_409c80);
extern "C" NAKED register_t __cdecl internal_409c80()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        push 0
/*FIXUP push offset public_61032c @0x409c8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_61032c
/*FIXUP push offset public_6101f0 @0x409c92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov esi, ecx
        call public_5b8058
        mov ebp, dword ptr ds : [esi+0x18]
        mov edi, eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        add esp, 0x14
        lea edx, ds:[edi+0x20]
        mov dword ptr ds : [esi+0x1C], ecx
        push edx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x14], ebp
        call public_40d2c0
        lea eax, ds:[edi+0x30]
        push eax
        lea ecx, ds:[esi+0x30]
        call public_5595c0
        lea ecx, ds:[edi+0x40]
        push ecx
        lea ecx, ds:[esi+0x40]
        call public_40d4b0
        mov al, byte ptr ds : [edi+0x50]
        mov cl, byte ptr ds : [esi+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov dl, byte ptr ds : [edi+0x50]
        xor dl, cl
        and dl, 0x10
        xor dl, cl
        mov byte ptr ds : [esi+0x50], dl
        mov eax, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [esi+0x50], eax
        mov ecx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], ecx
        mov edx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], edx
        mov eax, dword ptr ds : [edi+0x5C]
        lea ebx, ds:[edi+0x60]
        lea edi, ds:[esi+0x60]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x5C], eax
        je public_409ef9
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_409d70
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_409d8a
        public_409d70 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        public_409d8a : nop
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        jne public_409d95
        xor edx, edx
        jmp public_409dab
        public_409d95 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, ebp
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_409dab : nop
        cmp dword ptr ss : [esp+0x1C], edx
        ja public_409e46
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, ebp
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_409de7
        public_409dc9 : nop
        push ebp
        call public_40e0a0
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        add edx, 0x24
        add ebp, 0x24
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], edx
        mov ecx, edx
        jne public_409dc9
        public_409de7 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, ecx
        je public_409e08
        public_409df4 : nop
        push 0
        mov ecx, ebp
        call public_40e200
        mov eax, dword ptr ss : [esp+0x1C]
        add ebp, 0x24
        cmp ebp, eax
        jne public_409df4
        public_409e08 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_409e13
        xor edx, edx
        jmp public_409e29
        public_409e13 : nop
        mov ebx, dword ptr ds : [ebx+8]
        sub ebx, eax
        mov eax, 0x38E38E39
        imul ebx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_409e29 : nop
        lea edx, ds:[edx+edx*8]
        public_409e2c : nop
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[eax+edx*4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], ecx
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_409e46 : nop
        mov ecx, edi
        call public_5756a0
        mov ecx, ebx
        mov ebp, eax
        call public_5756d0
        cmp eax, ebp
        ja public_409e98
        mov ebp, dword ptr ds : [ebx+4]
        mov ecx, edi
        call public_5756d0
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[eax+eax*8]
        push ecx
        lea ebp, ss:[ebp+eax*4]
        push ebp
        push edx
        call public_40ddd0
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push eax
        push ecx
        push ebp
        mov ecx, edi
        call public_40d7f0
        mov ecx, ebx
        call public_5756d0
        lea edx, ds:[eax+eax*8]
        jmp public_409e2c
        public_409e98 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        call public_40d7c0
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        add esp, 4
        mov ecx, ebx
        call public_5756d0
        test eax, eax
        jge public_409ec0
        xor eax, eax
        public_409ec0 : nop
        lea eax, ds:[eax+eax*8]
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, edi
        call public_40d7f0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        mov dword ptr ds : [esi+0x18], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_409ef9 : nop
        pop edi
        mov dword ptr ds : [esi+0x18], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x409c80)
    }
}

#undef public_409d70
#undef public_409d8a
#undef public_409d95
#undef public_409dab
#undef public_409dc9
#undef public_409de7
#undef public_409df4
#undef public_409e08
#undef public_409e13
#undef public_409e29
#undef public_409e2c
#undef public_409e46
#undef public_409e98
#undef public_409ec0
#undef public_409ef9
