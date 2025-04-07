#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409f10);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_539f90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0538);

#define public_52e813 _public_52e813
#define public_52e815 _public_52e815
#define public_52e873 _public_52e873
#define public_52e88c _public_52e88c
#define public_52e89e _public_52e89e
#define public_52e8ab _public_52e8ab

PROC_DECLARE(0x52e760, internal_52e760, public_52e760);
extern "C" NAKED register_t __cdecl internal_52e760()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0538 @0x52e768*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0538
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        je public_52e8ab
        mov eax, dword ptr ds : [eax+0x70]
        cmp eax, ebp
        je public_52e8ab
        cmp dword ptr ds : [eax+4], ebp
        je public_52e8ab
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x1C]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        mov ecx, esi
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [public_5c68d4]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        fmul dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        je public_52e813
        mov eax, dword ptr ds : [eax+0x70]
        cmp eax, ebp
        je public_52e813
        mov ecx, dword ptr ds : [eax+4]
        jmp public_52e815
        public_52e813 : nop
        xor ecx, ecx
        public_52e815 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        call public_409f10
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ds:[ecx+0xC]
        push edx
        push ecx
        push eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [ebx+8]
        push eax
        call public_539f90
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebp
        je public_52e873
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x30]
        public_52e873 : nop
        cmp eax, ebp
        pop edi
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        pop esi
        je public_52e88c
        mov ecx, eax
        call public_4f7a90
        mov dword ptr ss : [esp+0x28], ebp
        public_52e88c : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebp
        je public_52e89e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x24], ebp
        public_52e89e : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, ebp
        je public_52e8ab
        call public_537ad0
        public_52e8ab : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x52e760)
    }
}

#undef public_52e813
#undef public_52e815
#undef public_52e873
#undef public_52e88c
#undef public_52e89e
#undef public_52e8ab
