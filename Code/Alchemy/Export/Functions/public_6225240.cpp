#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6208640);
CLANG_FORWARD_PROC_SYMBOL(public_6225240);
CLANG_FORWARD_PROC_SYMBOL(public_6225890);
CLANG_FORWARD_PROC_SYMBOL(public_62258b0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248e76);

#define public_62252e0 _public_62252e0
#define public_62253c5 _public_62253c5
#define public_62253f9 _public_62253f9
#define public_622543d _public_622543d
#define public_6225441 _public_6225441
#define public_622544f _public_622544f
#define public_6225453 _public_6225453

PROC_DECLARE(0x6225240, internal_6225240, public_6225240);
extern "C" NAKED register_t __cdecl internal_6225240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248e76 @0x6225242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248e76
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x110
        mov eax, dword ptr ss : [esp+0x128]
        mov ecx, dword ptr ss : [esp+0x124]
        push ebp
        mov ebp, dword ptr ss : [esp+0x124]
        push esi
        push edi
        push eax
        push ecx
        push ebp
        call public_62401a0
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6225453
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x14]
        push eax
        push 0
        push ebp
        call dword ptr ds : [edx+0x14]
        lea ecx, ss:[esp+0x18]
        lea esi, ss:[ebp+0xB4]
        push ecx
        mov ecx, esi
        call public_62258b0
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], edi
        lea edx, ss:[esp+0xC]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x128], 0
        mov dword ptr ss : [esp+0x1C], 0
        call public_6225890
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [esp+0x124], 1
        cmp eax, edi
        je public_622544f
        public_62252e0 : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_6225441
        mov ecx, dword ptr ss : [ebp+0xC0]
        mov dl, byte ptr ds : [ecx+0x84]
        test dl, dl
        je public_62253c5
        lea ecx, ss:[esp+0x2C]
        call public_6206c70
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x58], 0
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        fld dword ptr ds : [ecx+0x24]
        fdiv dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ss : [ebp+0xC0]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x8C]
        mov eax, dword ptr ds : [edx+0x88]
        mov edx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        lea ecx, ss:[esp+0x8C]
        mov edx, dword ptr ss : [esp+0xC]
        lea esi, ds:[edx+0xC]
        call public_6206c70
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xB0], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xB4], ecx
        mov edx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x8C]
        lea ecx, ss:[esp+0xBC]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC0], edx
        call public_6208640
        lea edx, ss:[esp+0x2C]
        lea eax, ss:[esp+0xEC]
        push edx
        push eax
        lea ecx, ss:[esp+0xC4]
        call public_6208640
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+0x30]
        lea ecx, ss:[esp+0xEC]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xC]
        jmp public_622543d
        public_62253c5 : nop
        mov eax, dword ptr ds : [eax+0x30]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        mov ecx, 0xC
        mov esi, eax
        mov eax, dword ptr ss : [esp+0xC]
        lea edi, ss:[esp+0x5C]
        rep movsd
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_6257a6c]
        test eax, eax
        jne public_62253f9
        call public_623e830
        mov dword ptr ds : [public_6257a6c], eax
        public_62253f9 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x24]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x88], edx
        lea edx, ss:[esp+0x5C]
        mov eax, dword ptr ds : [eax+0x30]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ss : [esp+0x1C]
        public_622543d : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_6225441 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], eax
        jne public_62252e0
        public_622544f : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6225453 : nop
        mov ecx, dword ptr ss : [esp+0x11C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x11C
        ret 0xC
        UNREACHABLE_TRAP(0x6225240)
    }
}

#undef public_62252e0
#undef public_62253c5
#undef public_62253f9
#undef public_622543d
#undef public_6225441
#undef public_622544f
#undef public_6225453
