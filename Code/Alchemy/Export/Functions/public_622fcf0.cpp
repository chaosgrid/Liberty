#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622fcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_62307b0);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);
CLANG_FORWARD_JUMP_SYMBOL(public_62498c0);

#define public_622fd68 _public_622fd68
#define public_622fdb5 _public_622fdb5
#define public_622fe8e _public_622fe8e
#define public_622feb5 _public_622feb5
#define public_622feb9 _public_622feb9
#define public_622fec7 _public_622fec7
#define public_622fed9 _public_622fed9

PROC_DECLARE(0x622fcf0, internal_622fcf0, public_622fcf0);
extern "C" NAKED register_t __cdecl internal_622fcf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62498c0 @0x622fcf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62498c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edi+0xC0]
        mov ecx, dword ptr ds : [eax+0x94]
        test ecx, ecx
        je public_622fed9
        push ebx
        push esi
        lea ecx, ss:[esp+0xC]
        lea esi, ds:[edi+0xB4]
        push ecx
        mov ecx, esi
        call public_62307b0
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        lea edx, ss:[esp+0x54]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_6230790
        mov ecx, dword ptr ss : [esp+0x54]
        mov byte ptr ss : [esp+0x4C], 1
        cmp ecx, ebx
        je public_622fec7
        public_622fd68 : nop
        mov eax, dword ptr ds : [ecx+0x70]
        lea esi, ds:[ecx+0x70]
        test eax, eax
        jne public_622feb9
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        and eax, 0x4100
        jne public_622feb9
        mov eax, dword ptr ds : [public_6257b90]
        test eax, eax
        je public_622feb9
        mov eax, dword ptr ds : [public_6257b98]
        test eax, eax
        je public_622feb9
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_622fdb5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_622fdb5 : nop
        mov ecx, dword ptr ds : [public_6257b90]
        mov edx, dword ptr ds : [edi+0xC0]
        push esi
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0x90]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [public_6257b98]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [public_6257b90]
        push eax
        mov eax, dword ptr ds : [edi+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        call dword ptr ds : [eax+0x18]
        test eax, eax
        jne public_622feb5
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x38], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x40], edx
        mov eax, dword ptr ds : [eax+0x70]
        lea edx, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 1
        push eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [edi+0x8C]
        fcomp qword ptr ds : [public_624e7e8]
        fnstsw ax
        test ah, 0x44
        jnp public_622fe8e
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [edi+0x8C]
        push edx
        mov eax, dword ptr ds : [eax+0x70]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        public_622fe8e : nop
        fld dword ptr ds : [edi+0x90]
        fcomp qword ptr ds : [public_624c370]
        fnstsw ax
        test ah, 0x44
        jnp public_622feb5
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [edi+0x90]
        push edx
        mov eax, dword ptr ds : [eax+0x70]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        public_622feb5 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        public_622feb9 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x54], ecx
        jne public_622fd68
        public_622fec7 : nop
        pop esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        pop ebx
        public_622fed9 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        push edi
        call public_62401a0
        pop edi
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 0xC
        UNREACHABLE_TRAP(0x622fcf0)
    }
}

#undef public_622fd68
#undef public_622fdb5
#undef public_622fe8e
#undef public_622feb5
#undef public_622feb9
#undef public_622fec7
#undef public_622fed9
