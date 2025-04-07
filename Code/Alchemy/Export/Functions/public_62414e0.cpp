#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a4c0);
CLANG_FORWARD_PROC_SYMBOL(public_620c3d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a7d1);

#define public_6241512 _public_6241512
#define public_6241532 _public_6241532
#define public_6241536 _public_6241536
#define public_624153b _public_624153b
#define public_6241585 _public_6241585
#define public_6241587 _public_6241587
#define public_62415b2 _public_62415b2
#define public_6241608 _public_6241608
#define public_6241618 _public_6241618
#define public_624162b _public_624162b
#define public_624164a _public_624164a
#define public_6241650 _public_6241650

PROC_DECLARE(0x62414e0, internal_62414e0, public_62414e0);
extern "C" NAKED register_t __cdecl internal_62414e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a7d1 @0x62414e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a7d1
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
        jne public_624162b
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6241512 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6241536
        test cl, cl
        je public_6241532
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6241536
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6241512
        public_6241532 : nop
        xor eax, eax
        jmp public_624153b
        public_6241536 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_624153b : nop
        test eax, eax
        jne public_624162b
        push 0x20
        call public_624612c
        add esp, 4
        test eax, eax
        je public_6241585
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bb60
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bb18
        mov dword ptr ds : [eax+0x1C], 1
        mov edi, eax
        jmp public_6241587
        public_6241585 : nop
        xor edi, edi
        public_6241587 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_62415b2
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
        public_62415b2 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [edx+0x40]
        mov ebp, eax
        test ebp, ebp
        je public_624164a
        lea esi, ds:[edi+8]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ds : [esi], offset public_624bb60
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], 2
        test eax, eax
        je public_6241618
        push 0
        mov ecx, esi
        call public_620a4c0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6241608
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_620c3d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_6241608 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6241618
        push esi
        call public_62460e0
        add esp, 4
        public_6241618 : nop
        push edi
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6241650
        public_624162b : nop
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
        public_624164a : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edi
        public_6241650 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62414e0)
    }
}

#undef public_6241512
#undef public_6241532
#undef public_6241536
#undef public_624153b
#undef public_6241585
#undef public_6241587
#undef public_62415b2
#undef public_6241608
#undef public_6241618
#undef public_624162b
#undef public_624164a
#undef public_6241650
