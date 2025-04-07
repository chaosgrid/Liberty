#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a380);
CLANG_FORWARD_PROC_SYMBOL(public_620a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a861);

#define public_6242662 _public_6242662
#define public_6242682 _public_6242682
#define public_6242686 _public_6242686
#define public_624268b _public_624268b
#define public_62426d5 _public_62426d5
#define public_62426d7 _public_62426d7
#define public_6242702 _public_6242702
#define public_6242759 _public_6242759
#define public_6242769 _public_6242769
#define public_624277c _public_624277c
#define public_624279b _public_624279b
#define public_62427a1 _public_62427a1

PROC_DECLARE(0x6242630, internal_6242630, public_6242630);
extern "C" NAKED register_t __cdecl internal_6242630()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a861 @0x6242638*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a861
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp], 8
        jne public_624277c
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6242662 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6242686
        test cl, cl
        je public_6242682
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6242686
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6242662
        public_6242682 : nop
        xor eax, eax
        jmp public_624268b
        public_6242686 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_624268b : nop
        test eax, eax
        jne public_624277c
        push 0x2C
        call public_624612c
        add esp, 4
        test eax, eax
        je public_62426d5
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bc94
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bc40
        mov dword ptr ds : [eax+0x28], 1
        mov edi, eax
        jmp public_62426d7
        public_62426d5 : nop
        xor edi, edi
        public_62426d7 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_6242702
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        public_6242702 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x50]
        mov ebp, eax
        test ebp, ebp
        je public_624279b
        lea esi, ds:[edi+8]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ds : [esi], offset public_624bc94
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], 2
        test eax, eax
        je public_6242769
        push 0
        mov ecx, esi
        call public_620a380
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6242759
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_620a8d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_6242759 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6242769
        push esi
        call public_62460e0
        add esp, 4
        public_6242769 : nop
        push edi
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_62427a1
        public_624277c : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        public_624279b : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edi
        public_62427a1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6242630)
    }
}

#undef public_6242662
#undef public_6242682
#undef public_6242686
#undef public_624268b
#undef public_62426d5
#undef public_62426d7
#undef public_6242702
#undef public_6242759
#undef public_6242769
#undef public_624277c
#undef public_624279b
#undef public_62427a1
