#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_62323a0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249c48);

#define public_62341c9 _public_62341c9
#define public_62341e9 _public_62341e9
#define public_62341ed _public_62341ed
#define public_62341f2 _public_62341f2
#define public_623423f _public_623423f
#define public_6234241 _public_6234241
#define public_6234252 _public_6234252
#define public_6234258 _public_6234258
#define public_623426d _public_623426d
#define public_623429f _public_623429f
#define public_62342b4 _public_62342b4
#define public_62342c9 _public_62342c9
#define public_62342de _public_62342de
#define public_62342f3 _public_62342f3
#define public_623430b _public_623430b
#define public_62343a9 _public_62343a9

PROC_DECLARE(0x6234190, internal_6234190, public_6234190);
extern "C" NAKED register_t __cdecl internal_6234190()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249c48 @0x6234198*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249c48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_62343a9
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_62341c9 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_62341ed
        cmp cl, bl
        je public_62341e9
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_62341ed
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_62341c9
        public_62341e9 : nop
        xor eax, eax
        jmp public_62341f2
        public_62341ed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62341f2 : nop
        cmp eax, ebx
        jne public_62343a9
        push 0x88
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_623423f
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_62323a0
        mov dword ptr ds : [esi], offset public_624eab0
        mov dword ptr ds : [edi], offset public_624eb10
        mov dword ptr ds : [esi+0x84], 1
        mov ebp, esi
        jmp public_6234241
        public_623423f : nop
        xor ebp, ebp
        public_6234241 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_623426d
        mov eax, 0xFFFFFFFC
        public_6234252 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        public_6234258 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_623426d : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+4]
        push eax
        push esi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6234252
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x24], 5
        cmp eax, ebx
        je public_623429f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_623429f : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x24], 4
        cmp eax, ebx
        je public_62342b4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_62342b4 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x24], 3
        cmp eax, ebx
        je public_62342c9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_62342c9 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x24], 2
        cmp eax, ebx
        je public_62342de
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_62342de : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x24], 1
        cmp eax, ebx
        je public_62342f3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_62342f3 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x24], 7
        cmp eax, ebx
        je public_623430b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_623430b : nop
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x28], 6
        call public_620b3f0
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push eax
        call public_620b3f0
        lea edx, ss:[esp+0x18]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_620b3a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x24], 9
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        lea ecx, ds:[esi+0x24]
        mov byte ptr ss : [esp+0x24], 8
        call public_620d1d0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], edi
        call public_620b350
        push ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6234258
        public_62343a9 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6234258
        UNREACHABLE_TRAP(0x6234190)
    }
}

#undef public_62341c9
#undef public_62341e9
#undef public_62341ed
#undef public_62341f2
#undef public_623423f
#undef public_6234241
#undef public_6234252
#undef public_6234258
#undef public_623426d
#undef public_623429f
#undef public_62342b4
#undef public_62342c9
#undef public_62342de
#undef public_62342f3
#undef public_623430b
#undef public_62343a9
