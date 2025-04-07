#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202550);
CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202e40);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_62471cb);

#define public_620257e _public_620257e
#define public_620259c _public_620259c
#define public_62025e7 _public_62025e7
#define public_62025ec _public_62025ec
#define public_620260d _public_620260d

PROC_DECLARE(0x6202550, internal_6202550, public_6202550);
extern "C" NAKED register_t __cdecl internal_6202550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62471cb @0x6202552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62471cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov esi, dword ptr ds : [edi+0x1C]
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_620259c
        public_620257e : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ds : [edi+0x1C]
        cmp esi, ebp
        jne public_620257e
        public_620259c : nop
        lea esi, ds:[edi+8]
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_62025e7
        mov ecx, eax
        cmp eax, ecx
        jne public_62025e7
        mov eax, dword ptr ds : [edi+4]
        mov ecx, esi
        push eax
        call public_6202da0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_620260d
        public_62025e7 : nop
        cmp eax, edi
        je public_620260d
        push ebx
        public_62025ec : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6202e40
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        mov ecx, esi
        call public_62029c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62025ec
        pop ebx
        public_620260d : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_62460e0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push edx
        mov dword ptr ds : [esi+0x10], ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6202550)
    }
}

#undef public_620257e
#undef public_620259c
#undef public_62025e7
#undef public_62025ec
#undef public_620260d
