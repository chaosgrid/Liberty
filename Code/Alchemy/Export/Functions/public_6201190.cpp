#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201190);
CLANG_FORWARD_PROC_SYMBOL(public_6202070);
CLANG_FORWARD_PROC_SYMBOL(public_6202460);
CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202de0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624718d);

#define public_62011df _public_62011df
#define public_62011f9 _public_62011f9
#define public_6201229 _public_6201229
#define public_620123b _public_620123b
#define public_620124f _public_620124f
#define public_6201262 _public_6201262
#define public_6201280 _public_6201280
#define public_62012d7 _public_62012d7
#define public_62012db _public_62012db
#define public_62012ff _public_62012ff

PROC_DECLARE(0x6201190, internal_6201190, public_6201190);
extern "C" NAKED register_t __cdecl internal_6201190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624718d @0x6201192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624718d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        lea edi, ss:[ebp+4]
        mov dword ptr ss : [ebp], offset public_624b0e8
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_624b0bc
        mov eax, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [esp+0x28], 1
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x2C]
        xor ebx, ebx
        cmp eax, ebx
        je public_620123b
        mov esi, eax
        public_62011df : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x34]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x2C]
        cmp eax, ebx
        je public_62011f9
        push eax
        mov ecx, ebp
        call public_6202070
        public_62011f9 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        or eax, 0x80000000
        push eax
        push esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [public_6257914]
        cmp eax, ebx
        je public_6201229
        push ebx
        push esi
        push ebx
        call eax
        add esp, 0xC
        public_6201229 : nop
        mov edx, dword ptr ss : [ebp]
        push esi
        push ebp
        call dword ptr ds : [edx+0x58]
        cmp edi, ebx
        mov esi, edi
        jne public_62011df
        mov edi, dword ptr ss : [esp+0x14]
        public_620123b : nop
        mov eax, dword ptr ss : [ebp+0x28]
        mov byte ptr ss : [esp+0x28], bl
        cmp eax, ebx
        je public_620124f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0x28], ebx
        public_620124f : nop
        mov dword ptr ss : [esp+0x1C], edi
        mov esi, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x28], 2
        cmp esi, ebx
        je public_6201280
        public_6201262 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x34]
        mov dword ptr ds : [edi+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [ecx+0x50]
        mov esi, dword ptr ds : [edi+0x1C]
        cmp esi, ebx
        jne public_6201262
        public_6201280 : nop
        lea esi, ds:[edi+8]
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62012d7
        mov ecx, eax
        cmp eax, ecx
        jne public_62012d7
        mov edx, dword ptr ds : [edi+4]
        mov ecx, esi
        push edx
        call public_6202da0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        push edx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6202460
        jmp public_62012ff
        public_62012d7 : nop
        cmp eax, edi
        je public_62012ff
        public_62012db : nop
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6202de0
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, esi
        call public_62029c0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_62012db
        public_62012ff : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push ecx
        mov dword ptr ds : [esi+0x10], ebx
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6201190)
    }
}

#undef public_62011df
#undef public_62011f9
#undef public_6201229
#undef public_620123b
#undef public_620124f
#undef public_6201262
#undef public_6201280
#undef public_62012d7
#undef public_62012db
#undef public_62012ff
