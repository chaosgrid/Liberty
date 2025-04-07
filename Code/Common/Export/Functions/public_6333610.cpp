#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6333610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6397616);

#define public_6333650 _public_6333650
#define public_633365d _public_633365d
#define public_6333683 _public_6333683
#define public_6333694 _public_6333694
#define public_63336a9 _public_63336a9
#define public_63336d0 _public_63336d0
#define public_63336e5 _public_63336e5

PROC_DECLARE(0x6333610, internal_6333610, public_6333610);
extern "C" NAKED register_t __cdecl internal_6333610()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397616 @0x6333612*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397616
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_63a4a08
        mov dword ptr ds : [edi+0x10], offset public_63a4a28
        mov eax, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], 2
        je public_6333683
        public_6333650 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_633365d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_633365d : nop
        mov ebp, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 4
        dec ecx
        mov dword ptr ds : [edi+0x24], ecx
        cmp ebp, dword ptr ds : [edi+0x20]
        mov esi, ebp
        jne public_6333650
        public_6333683 : nop
        mov ebx, dword ptr ds : [edi+0x2C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea ebp, ds:[edi+0x28]
        mov byte ptr ss : [esp+0x20], 1
        je public_63336a9
        public_6333694 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_6271cc0
        cmp esi, ebx
        jne public_6333694
        public_63336a9 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        xor eax, eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov ebx, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [ebx]
        lea ebp, ds:[edi+0x1C]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x20], al
        je public_63336e5
        lea ecx, ds:[ecx]
        public_63336d0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_6271cc0
        cmp esi, ebx
        jne public_63336d0
        public_63336e5 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov ecx, dword ptr ds : [edi+0x14]
        lea eax, ds:[edi+0x10]
        mov dword ptr ds : [eax], offset public_63a49cc
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x24], 3
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], offset public_63a49e4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6333610)
    }
}

#undef public_6333650
#undef public_633365d
#undef public_6333683
#undef public_6333694
#undef public_63336a9
#undef public_63336d0
#undef public_63336e5
