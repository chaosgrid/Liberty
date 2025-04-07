#include "Alchemy-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_624a948);

#define public_6243888 _public_6243888
#define public_624389c _public_624389c
#define public_62438d1 _public_62438d1
#define public_624390a _public_624390a
#define public_6243935 _public_6243935
#define public_624393e _public_624393e
#define public_6243949 _public_6243949
#define public_6243983 _public_6243983
#define public_6243993 _public_6243993

PROC_DECLARE(0x6243850, internal_6243850, public_6243850);
extern "C" NAKED register_t __cdecl internal_6243850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a948 @0x6243852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a948
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        xor esi, esi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x14], offset public_62575e8
        mov dword ptr ds : [edi+8], esi
        add edi, 0xC
        public_6243888 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        mov ebx, eax
        xor ebp, ebp
        cmp ebx, esi
        jle public_624393e
        public_624389c : nop
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x40], esi
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x14]
        cmp eax, esi
        jne public_62438d1
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        jmp public_624390a
        public_62438d1 : nop
        cmp eax, 1
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6243993
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        public_624390a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x44
        mov eax, dword ptr ss : [esp+0x10]
        jp public_6243983
        cmp eax, esi
        je public_6243935
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], esi
        public_6243935 : nop
        inc ebp
        cmp ebp, ebx
        jl public_624389c
        public_624393e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x18]
        or dword ptr ds : [eax+8], ecx
        public_6243949 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add eax, 4
        add edi, 4
        add edx, edx
        cmp eax, offset public_625760c
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edx
        jl public_6243888
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        public_6243983 : nop
        cmp eax, esi
        je public_6243949
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6243949
        public_6243993 : nop
        cmp eax, esi
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_6243949
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6243949
        UNREACHABLE_TRAP(0x6243850)
    }
}

#undef public_6243888
#undef public_624389c
#undef public_62438d1
#undef public_624390a
#undef public_6243935
#undef public_624393e
#undef public_6243949
#undef public_6243983
#undef public_6243993
