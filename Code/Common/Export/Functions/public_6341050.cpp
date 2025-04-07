#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633e920);
CLANG_FORWARD_PROC_SYMBOL(public_6341050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639787c);

#define public_63410a0 _public_63410a0
#define public_63410a2 _public_63410a2
#define public_63410d3 _public_63410d3
#define public_63410db _public_63410db
#define public_63410e1 _public_63410e1
#define public_6341100 _public_6341100
#define public_6341113 _public_6341113
#define public_634111d _public_634111d
#define public_6341196 _public_6341196
#define public_63411b3 _public_63411b3
#define public_63411e8 _public_63411e8

PROC_DECLARE(0x6341050, internal_6341050, public_6341050);
extern "C" NAKED register_t __cdecl internal_6341050()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639787c @0x6341052*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639787c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_63411e8
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        add ebx, 4
        add ebp, 4
        test ebx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        je public_63410a0
        lea eax, ds:[ebx+4]
        jmp public_63410a2
        public_63410a0 : nop
        xor eax, eax
        public_63410a2 : nop
        lea esi, ds:[eax+4]
        lea edi, ss:[ebp+8]
        mov ecx, 0x11
        rep movsd
        mov dword ptr ss : [ebp+4], offset public_63993e8
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [ebp+0x4C], ecx
        mov edx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x50], edx
        mov al, byte ptr ds : [ebx+0x54]
        mov byte ptr ss : [ebp+0x54], al
        mov ecx, dword ptr ds : [ebx+0x58]
        test ecx, ecx
        jne public_63410d3
        xor eax, eax
        jmp public_63410db
        public_63410d3 : nop
        mov eax, dword ptr ds : [ebx+0x5C]
        sub eax, ecx
        sar eax, 5
        public_63410db : nop
        test eax, eax
        jge public_63410e1
        xor eax, eax
        public_63410e1 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ss : [ebp+0x58], eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov edx, dword ptr ds : [ebx+0x58]
        add esp, 4
        cmp edx, ecx
        mov dword ptr ss : [esp+0x34], ecx
        je public_634111d
        mov edi, edi
        public_6341100 : nop
        test eax, eax
        je public_6341113
        mov ecx, 8
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x34]
        public_6341113 : nop
        add edx, 0x20
        add eax, 0x20
        cmp edx, ecx
        jne public_6341100
        public_634111d : nop
        mov dword ptr ss : [ebp+0x5C], eax
        mov dword ptr ss : [ebp+0x60], eax
        mov cl, byte ptr ds : [ebx+0x64]
        mov byte ptr ss : [ebp+0x64], cl
        mov edx, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [ebp+0x68], edx
        mov eax, dword ptr ds : [ebx+0x6C]
        mov dword ptr ss : [ebp+0x6C], eax
        mov ecx, dword ptr ds : [ebx+0x70]
        mov dword ptr ss : [ebp+0x70], ecx
        lea edx, ds:[ebx+0x74]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0x74]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ds : [ebx+0x80]
        lea edi, ss:[ebp+0x80]
        push 0xC14
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x34], edx
        je public_63411b3
        public_6341196 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ds:[esi+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_633e920
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_6341196
        public_63411b3 : nop
        mov eax, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [ebp+0x8C], eax
        mov ecx, dword ptr ds : [ebx+0x90]
        pop edi
        mov dword ptr ss : [ebp+0x90], ecx
        mov edx, dword ptr ds : [ebx+0x94]
        pop esi
        mov dword ptr ss : [ebp+0x94], edx
        mov dword ptr ss : [ebp], offset public_63a5144
        mov dword ptr ss : [ebp+4], offset public_63a5134
        pop ebx
        public_63411e8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6341050)
    }
}

#undef public_63410a0
#undef public_63410a2
#undef public_63410d3
#undef public_63410db
#undef public_63410e1
#undef public_6341100
#undef public_6341113
#undef public_634111d
#undef public_6341196
#undef public_63411b3
#undef public_63411e8
