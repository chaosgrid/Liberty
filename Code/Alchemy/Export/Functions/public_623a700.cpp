#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_62397e0);
CLANG_FORWARD_PROC_SYMBOL(public_6239800);
CLANG_FORWARD_PROC_SYMBOL(public_6239f00);
CLANG_FORWARD_PROC_SYMBOL(public_623a700);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a2ee);

#define public_623a727 _public_623a727
#define public_623a729 _public_623a729
#define public_623a77e _public_623a77e
#define public_623a78d _public_623a78d
#define public_623a7b9 _public_623a7b9
#define public_623a7c7 _public_623a7c7
#define public_623a800 _public_623a800

PROC_DECLARE(0x623a700, internal_623a700, public_623a700);
extern "C" NAKED register_t __cdecl internal_623a700()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a2ee @0x623a708*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a2ee
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        cmp ecx, ebx
        push edi
        je public_623a727
        lea edi, ds:[ecx+0xC]
        jmp public_623a729
        public_623a727 : nop
        xor edi, edi
        public_623a729 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x2C], ebx
        lea esi, ds:[edi+0xD8]
        mov dword ptr ss : [esp+0x18], esi
        push ecx
        mov ecx, esi
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov byte ptr ss : [esp+0x34], 2
        call public_6239800
        push ecx
        mov byte ptr ss : [esp+0x34], 3
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, esi
        call public_62397e0
        lea edx, ss:[esp+0x1C]
        mov ecx, esi
        push edx
        mov byte ptr ss : [esp+0x38], 2
        call public_6239f00
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ebx
        cmp eax, ebx
        je public_623a78d
        public_623a77e : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_623a77e
        public_623a78d : nop
        lea ecx, ds:[edi+0xB4]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ss : [esp+0x2C], bl
        call public_6244b50
        mov ebp, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 4
        je public_623a7c7
        public_623a7b9 : nop
        mov ecx, esi
        call public_620d670
        add esi, 4
        cmp esi, ebp
        jne public_623a7b9
        public_623a7c7 : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebx
        mov dword ptr ds : [edi+0xA0], ebx
        mov dword ptr ds : [edi+0xA4], ebx
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_623a800
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_623a800 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x623a700)
    }
}

#undef public_623a727
#undef public_623a729
#undef public_623a77e
#undef public_623a78d
#undef public_623a7b9
#undef public_623a7c7
#undef public_623a800
