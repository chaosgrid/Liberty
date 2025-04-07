#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb15b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9ebc);

#define public_6eb1635 _public_6eb1635
#define public_6eb1650 _public_6eb1650
#define public_6eb166c _public_6eb166c
#define public_6eb16a0 _public_6eb16a0
#define public_6eb16b1 _public_6eb16b1
#define public_6eb16d7 _public_6eb16d7
#define public_6eb16e4 _public_6eb16e4
#define public_6eb16ea _public_6eb16ea

PROC_DECLARE(0x6eb15b0, internal_6eb15b0, public_6eb15b0);
extern "C" NAKED register_t __cdecl internal_6eb15b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9ebc @0x6eb15b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9ebc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push edi
        mov dword ptr ss : [esp+8], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6eb16ea
        push ebx
        push esi
        lea ecx, ss:[ebp+0x4C]
        mov dword ptr ss : [ebp+0x1C], edi
        mov byte ptr ss : [ebp+0x20], 0
        call dword ptr ds : [public_6fb3030]
        mov dword ptr ss : [ebp+0x54], edi
        mov ebx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [ebx+0x18]
        lea esi, ds:[ebx+0x20]
        cmp esi, edi
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [ebp+0x18], eax
        jne public_6eb1635
        mov dword ptr ss : [ebp+0x1C], edi
        mov byte ptr ss : [ebp+0x20], 0
        jmp public_6eb166c
        public_6eb1635 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x20]
        jb public_6eb1650
        mov eax, 0x1F
        public_6eb1650 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x20], 0
        mov dword ptr ss : [ebp+0x1C], eax
        xor edi, edi
        public_6eb166c : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], eax
        mov ecx, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], ecx
        mov edx, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [ebp+0x48], edx
        mov eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], eax
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x50], ecx
        mov eax, dword ptr ss : [ebp+0x54]
        cmp eax, 2
        jne public_6eb16a0
        mov ecx, dword ptr ss : [ebp+0x58]
        cmp ecx, edi
        je public_6eb16a0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        jmp public_6eb16b1
        public_6eb16a0 : nop
        cmp eax, 1
        jne public_6eb16b1
        mov ecx, dword ptr ss : [ebp+0x58]
        cmp ecx, edi
        je public_6eb16b1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6eb16b1 : nop
        mov dword ptr ss : [ebp+0x58], edi
        mov dword ptr ss : [ebp+0x54], edi
        mov ecx, dword ptr ds : [ebx+0x54]
        mov dword ptr ss : [ebp+0x54], ecx
        mov ecx, dword ptr ds : [ebx+0x58]
        mov dword ptr ss : [ebp+0x58], ecx
        mov ebp, dword ptr ss : [ebp+0x54]
        cmp ebp, 2
        pop esi
        pop ebx
        jne public_6eb16d7
        cmp ecx, edi
        je public_6eb16d7
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        jmp public_6eb16e4
        public_6eb16d7 : nop
        cmp ebp, 1
        jne public_6eb16e4
        cmp ecx, edi
        je public_6eb16e4
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6eb16e4 : nop
        inc dword ptr ds : [public_6fceec4]
        public_6eb16ea : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eb15b0)
    }
}

#undef public_6eb1635
#undef public_6eb1650
#undef public_6eb166c
#undef public_6eb16a0
#undef public_6eb16b1
#undef public_6eb16d7
#undef public_6eb16e4
#undef public_6eb16ea
