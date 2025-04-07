#include "DALib-PCH.h"


#define public_65c2886 _public_65c2886
#define public_65c28e8 _public_65c28e8
#define public_65c2913 _public_65c2913
#define public_65c2934 _public_65c2934
#define public_65c2963 _public_65c2963
#define public_65c29b4 _public_65c29b4

PROC_DECLARE(0x65c2870, internal_65c2870, public_65c2870);
extern "C" NAKED register_t __cdecl internal_65c2870()
{
    __asm
    {
        sub esp, 0x50
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        jne public_65c2886
        pop edi
        xor al, al
        pop esi
        add esp, 0x50
        ret 
        public_65c2886 : nop
        xor eax, eax
        mov ecx, 0x12
        lea edi, ss:[esp+0x10]
        rep stosd
        mov edi, dword ptr ds : [public_65c70e0]
        lea eax, ds:[esi+0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_65c75f0 @0x65c28b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 7
        push 0
/*FIXUP push offset public_65c7600 @0x65c28bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        mov dword ptr ss : [esp+0x24], 0x48
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x20], 0
        call edi
        test eax, eax
        je public_65c28e8
        pop edi
        xor al, al
        pop esi
        add esp, 0x50
        ret 
        public_65c28e8 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_65c75f0 @0x65c28ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75f0
        push 7
        push 0
/*FIXUP push offset public_65c7600 @0x65c28f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7600
        call edi
        test eax, eax
        mov eax, dword ptr ss : [esp+8]
        je public_65c2913
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        xor al, al
        pop esi
        add esp, 0x50
        ret 
        public_65c2913 : nop
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c2915*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [ecx+0x34]
        test eax, eax
        je public_65c2934
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        xor al, al
        pop esi
        add esp, 0x50
        ret 
        public_65c2934 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_65c75a0 @0x65c293a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c75a0
        push eax
        call dword ptr ds : [ecx+0x34]
        test eax, eax
        je public_65c2963
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop edi
        xor al, al
        pop esi
        add esp, 0x50
        ret 
        public_65c2963 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        mov edx, dword ptr ds : [eax]
        add esi, 0x78
        push esi
        push 0
        push 0
        push 0
        push 0xFFFFFFFF
        push 0
        push 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_65c29b4
        cmp eax, 0x15800E
        je public_65c29b4
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop edi
        xor al, al
        pop esi
        add esp, 0x50
        ret 
        public_65c29b4 : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop edi
        mov al, 1
        pop esi
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x65c2870)
    }
}

#undef public_65c2886
#undef public_65c28e8
#undef public_65c2913
#undef public_65c2934
#undef public_65c2963
#undef public_65c29b4
