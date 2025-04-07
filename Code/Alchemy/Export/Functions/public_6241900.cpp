#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_620ca50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a831);

#define public_6241932 _public_6241932
#define public_6241952 _public_6241952
#define public_6241956 _public_6241956
#define public_624195b _public_624195b
#define public_62419a5 _public_62419a5
#define public_62419a7 _public_62419a7
#define public_62419d2 _public_62419d2
#define public_6241a28 _public_6241a28
#define public_6241a38 _public_6241a38
#define public_6241a4b _public_6241a4b
#define public_6241a6a _public_6241a6a
#define public_6241a70 _public_6241a70

PROC_DECLARE(0x6241900, internal_6241900, public_6241900);
extern "C" NAKED register_t __cdecl internal_6241900()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a831 @0x6241908*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a831
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
        jne public_6241a4b
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6241932 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6241956
        test cl, cl
        je public_6241952
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6241956
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6241932
        public_6241952 : nop
        xor eax, eax
        jmp public_624195b
        public_6241956 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_624195b : nop
        test eax, eax
        jne public_6241a4b
        push 0x20
        call public_624612c
        add esp, 4
        test eax, eax
        je public_62419a5
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bb10
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bac8
        mov dword ptr ds : [eax+0x1C], 1
        mov edi, eax
        jmp public_62419a7
        public_62419a5 : nop
        xor edi, edi
        public_62419a7 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_62419d2
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
        public_62419d2 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [edx+0x40]
        mov ebp, eax
        test ebp, ebp
        je public_6241a6a
        lea esi, ds:[edi+8]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ds : [esi], offset public_624bb10
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], 2
        test eax, eax
        je public_6241a38
        push 0
        mov ecx, esi
        call public_620a7a0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6241a28
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_620ca50
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_6241a28 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6241a38
        push esi
        call public_62460e0
        add esp, 4
        public_6241a38 : nop
        push edi
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6241a70
        public_6241a4b : nop
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
        public_6241a6a : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edi
        public_6241a70 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6241900)
    }
}

#undef public_6241932
#undef public_6241952
#undef public_6241956
#undef public_624195b
#undef public_62419a5
#undef public_62419a7
#undef public_62419d2
#undef public_6241a28
#undef public_6241a38
#undef public_6241a4b
#undef public_6241a6a
#undef public_6241a70
