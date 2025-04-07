#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a260);
CLANG_FORWARD_PROC_SYMBOL(public_620a880);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a891);

#define public_6242cc2 _public_6242cc2
#define public_6242ce2 _public_6242ce2
#define public_6242ce6 _public_6242ce6
#define public_6242ceb _public_6242ceb
#define public_6242d35 _public_6242d35
#define public_6242d37 _public_6242d37
#define public_6242d62 _public_6242d62
#define public_6242db9 _public_6242db9
#define public_6242dc9 _public_6242dc9
#define public_6242ddc _public_6242ddc
#define public_6242dfb _public_6242dfb
#define public_6242e01 _public_6242e01

PROC_DECLARE(0x6242c90, internal_6242c90, public_6242c90);
extern "C" NAKED register_t __cdecl internal_6242c90()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a891 @0x6242c98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a891
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
        jne public_6242ddc
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6242cc2 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6242ce6
        test cl, cl
        je public_6242ce2
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6242ce6
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6242cc2
        public_6242ce2 : nop
        xor eax, eax
        jmp public_6242ceb
        public_6242ce6 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6242ceb : nop
        test eax, eax
        jne public_6242ddc
        push 0x2C
        call public_624612c
        add esp, 4
        test eax, eax
        je public_6242d35
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bc34
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_624bbf0
        mov dword ptr ds : [eax+0x28], 1
        mov edi, eax
        jmp public_6242d37
        public_6242d35 : nop
        xor edi, edi
        public_6242d37 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jne public_6242d62
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
        public_6242d62 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x40]
        mov ebp, eax
        test ebp, ebp
        je public_6242dfb
        lea esi, ds:[edi+8]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ds : [esi], offset public_624bc34
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], 2
        test eax, eax
        je public_6242dc9
        push 0
        mov ecx, esi
        call public_620a260
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6242db9
        push eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_620a880
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_6242db9 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6242dc9
        push esi
        call public_62460e0
        add esp, 4
        public_6242dc9 : nop
        push edi
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6242e01
        public_6242ddc : nop
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
        public_6242dfb : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], edi
        public_6242e01 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6242c90)
    }
}

#undef public_6242cc2
#undef public_6242ce2
#undef public_6242ce6
#undef public_6242ceb
#undef public_6242d35
#undef public_6242d37
#undef public_6242d62
#undef public_6242db9
#undef public_6242dc9
#undef public_6242ddc
#undef public_6242dfb
#undef public_6242e01
