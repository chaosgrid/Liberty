#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bd70);
CLANG_FORWARD_PROC_SYMBOL(public_620d690);
CLANG_FORWARD_PROC_SYMBOL(public_62107b0);
CLANG_FORWARD_PROC_SYMBOL(public_62107d0);
CLANG_FORWARD_PROC_SYMBOL(public_62114c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247e30);

#define public_62114f9 _public_62114f9
#define public_6211516 _public_6211516
#define public_621152a _public_621152a
#define public_621154d _public_621154d
#define public_6211596 _public_6211596
#define public_62115b7 _public_62115b7
#define public_62115e0 _public_62115e0
#define public_62115ec _public_62115ec

PROC_DECLARE(0x62114c0, internal_62114c0, public_62114c0);
extern "C" NAKED register_t __cdecl internal_62114c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247e30 @0x62114c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247e30
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push edi
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_62115ec
        lea eax, ds:[edi+4]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], eax
        public_62114f9 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_621154d
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, esi
        cmp eax, ebp
        je public_621152a
        mov ebx, edi
        sub ebx, eax
        public_6211516 : nop
        push esi
        lea ecx, ds:[ebx+esi]
        call public_620d690
        add esi, 4
        cmp esi, ebp
        jne public_6211516
        mov ebx, dword ptr ss : [esp+0x3C]
        public_621152a : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, ebx
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_620bd70
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0xFFFFFFFC
        mov edx, eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], edx
        jmp public_62115e0
        public_621154d : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        mov ebp, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_62107d0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x20], eax
        call public_62107b0
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x2C], 1
        cmp eax, esi
        je public_62115b7
        public_6211596 : nop
        mov ecx, dword ptr ds : [edi]
        lea ebp, ds:[eax+0x24]
        add eax, 0xC
        push ebp
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA4]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        jne public_6211596
        public_62115b7 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xA0]
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 4
        add eax, 4
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        public_62115e0 : nop
        cmp edi, dword ptr ss : [esp+0x18]
        jne public_62114f9
        pop esi
        pop ebp
        public_62115ec : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62114c0)
    }
}

#undef public_62114f9
#undef public_6211516
#undef public_621152a
#undef public_621154d
#undef public_6211596
#undef public_62115b7
#undef public_62115e0
#undef public_62115ec
