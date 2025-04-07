#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a630);
CLANG_FORWARD_PROC_SYMBOL(public_620c710);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a801);

#define public_6241722 _public_6241722
#define public_6241742 _public_6241742
#define public_6241746 _public_6241746
#define public_624174b _public_624174b
#define public_6241795 _public_6241795
#define public_6241797 _public_6241797
#define public_62417c2 _public_62417c2
#define public_6241818 _public_6241818
#define public_6241828 _public_6241828
#define public_624183b _public_624183b
#define public_624185a _public_624185a
#define public_6241860 _public_6241860

PROC_DECLARE(0x62416f0, internal_62416f0, public_62416f0);
extern "C" NAKED register_t __cdecl internal_62416f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a801 @0x62416f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a801
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
        jne public_624183b
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6241722 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6241746
        test cl, cl
        je public_6241742
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6241746
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6241722
        public_6241742 : nop
        xor eax, eax
        jmp public_624174b
        public_6241746 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_624174b : nop
        test eax, eax
        jne public_624183b
        push 0x20
        call public_624612c
        add esp, 4
        test eax, eax
        je public_6241795
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bbb4
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bb68
        mov dword ptr ds : [eax+0x1C], 1
        mov edi, eax
        jmp public_6241797
        public_6241795 : nop
        xor edi, edi
        public_6241797 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_62417c2
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
        public_62417c2 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [edx+0x44]
        mov ebp, eax
        test ebp, ebp
        je public_624185a
        lea esi, ds:[edi+8]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ds : [esi], offset public_624bbb4
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], 2
        test eax, eax
        je public_6241828
        push 0
        mov ecx, esi
        call public_620a630
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6241818
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_620c710
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_6241818 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6241828
        push esi
        call public_62460e0
        add esp, 4
        public_6241828 : nop
        push edi
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6241860
        public_624183b : nop
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
        public_624185a : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edi
        public_6241860 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62416f0)
    }
}

#undef public_6241722
#undef public_6241742
#undef public_6241746
#undef public_624174b
#undef public_6241795
#undef public_6241797
#undef public_62417c2
#undef public_6241818
#undef public_6241828
#undef public_624183b
#undef public_624185a
#undef public_6241860
