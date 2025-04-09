#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_490cd0);
CLANG_FORWARD_PROC_SYMBOL(public_491100);
CLANG_FORWARD_PROC_SYMBOL(public_4915b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);

#define public_491184 _public_491184
#define public_491196 _public_491196
#define public_4911c0 _public_4911c0
#define public_49121c _public_49121c
#define public_491235 _public_491235
#define public_49123c _public_49123c
#define public_49140b _public_49140b

PROC_DECLARE(0x491100, internal_491100, public_491100);
extern "C" NAKED register_t __cdecl internal_491100()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x408]
        test al, al
        jne public_49140b
        push ebp
        push edi
        mov byte ptr ds : [esi+0x408], 1
        call public_490cd0
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x46C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        je public_491235
        mov eax, dword ptr ds : [public_6720c4]
        test eax, eax
        je public_491184
        push eax
        call dword ptr ds : [public_5c6094]
        mov dword ptr ds : [esi+0x7E0], eax
        mov dword ptr ds : [public_6720c4], 0
        jmp public_491196
        public_491184 : nop
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        mov dword ptr ds : [esi+0x7E0], eax
        public_491196 : nop
        mov ecx, dword ptr ds : [esi+0x7E0]
        add esp, 4
        test ecx, ecx
        mov byte ptr ds : [esi+0x87D], 0
        mov byte ptr ds : [esi+0x87C], 1
        je public_49121c
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        xor ecx, ecx
        lea edx, ds:[esi+0xF28]
        lea ecx, ds:[ecx]
        public_4911c0 : nop
        cmp dword ptr ds : [edx], eax
        je public_49121c
        inc ecx
        add edx, 4
        cmp ecx, 4
        jl public_4911c0
        mov ecx, dword ptr ds : [esi+0x7E0]
        test ecx, ecx
        je public_49123c
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [ecx]
        push edx
/*FIXUP push offset public_66fc60 @0x4911e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
        push ecx
        call public_4347e0
        add esp, 0x10
/*FIXUP push offset public_66fc60 @0x4911f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ds : [esi+0x8C8]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x49120d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        jmp public_49123c
        public_49121c : nop
        mov ecx, dword ptr ds : [esi+0x8C8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x62A
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        jmp public_49123c
        public_491235 : nop
        mov ecx, esi
        call public_4915b0
        public_49123c : nop
        lea ecx, ds:[esi+0x40C]
        mov edx, ecx
        mov edi, dword ptr ds : [edx]
        lea eax, ds:[esi+0x43C]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[esi+0x448]
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], edx
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [esi+0x418]
        mov edx, ecx
        mov ebp, dword ptr ds : [edx]
        push 0
        fstp dword ptr ds : [eax]
        lea eax, ds:[esi+0x454]
        mov edi, eax
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], edx
        fld dword ptr ds : [esi+0x418]
        fadd dword ptr ds : [eax]
        push 1
        push 1
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x41C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+0x420]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x41C]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x460]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fadd dword ptr ds : [esi+0x464]
        mov ecx, dword ptr ds : [esi+0x7EC]
        fstp dword ptr ds : [esi+0x464]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7F0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x8D8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x8DC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB4C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB50]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC58]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB54]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        pop edi
        pop ebp
        mov ecx, esi
        pop esi
        add esp, 0xC
        jmp dword ptr ds : [eax+0x2C]
        public_49140b : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x491100)
    }
}

#undef public_491184
#undef public_491196
#undef public_4911c0
#undef public_49121c
#undef public_491235
#undef public_49123c
#undef public_49140b
