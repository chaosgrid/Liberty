#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_622d220);
CLANG_FORWARD_PROC_SYMBOL(public_622d240);
CLANG_FORWARD_PROC_SYMBOL(public_622da40);
CLANG_FORWARD_PROC_SYMBOL(public_622e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624977e);

#define public_622e0c7 _public_622e0c7
#define public_622e0c9 _public_622e0c9
#define public_622e11e _public_622e11e
#define public_622e12d _public_622e12d
#define public_622e159 _public_622e159
#define public_622e167 _public_622e167
#define public_622e1a0 _public_622e1a0

PROC_DECLARE(0x622e0a0, internal_622e0a0, public_622e0a0);
extern "C" NAKED register_t __cdecl internal_622e0a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624977e @0x622e0a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624977e
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
        je public_622e0c7
        lea edi, ds:[ecx+0xC]
        jmp public_622e0c9
        public_622e0c7 : nop
        xor edi, edi
        public_622e0c9 : nop
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
        call public_622d240
        push ecx
        mov byte ptr ss : [esp+0x34], 3
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, esi
        call public_622d220
        lea edx, ss:[esp+0x1C]
        mov ecx, esi
        push edx
        mov byte ptr ss : [esp+0x38], 2
        call public_622da40
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ebx
        cmp eax, ebx
        je public_622e12d
        public_622e11e : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_622e11e
        public_622e12d : nop
        lea ecx, ds:[edi+0xB4]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ss : [esp+0x2C], bl
        call public_6244b50
        mov ebp, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 4
        je public_622e167
        public_622e159 : nop
        mov ecx, esi
        call public_620d670
        add esi, 4
        cmp esi, ebp
        jne public_622e159
        public_622e167 : nop
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
        je public_622e1a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_622e1a0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x622e0a0)
    }
}

#undef public_622e0c7
#undef public_622e0c9
#undef public_622e11e
#undef public_622e12d
#undef public_622e159
#undef public_622e167
#undef public_622e1a0
