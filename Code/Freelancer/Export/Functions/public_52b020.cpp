#include "Freelancer-PCH.h"


#define public_52b042 _public_52b042
#define public_52b077 _public_52b077
#define public_52b09b _public_52b09b
#define public_52b0eb _public_52b0eb
#define public_52b0fc _public_52b0fc

PROC_DECLARE(0x52b020, internal_52b020, public_52b020);
extern "C" NAKED register_t __cdecl internal_52b020()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_52b0fc
        push ebx
        mov ebx, dword ptr ds : [public_5c6698]
        public_52b042 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6894]
        test al, al
        jne public_52b0eb
/*FIXUP push offset public_5dd350 @0x52b053*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd350
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_52b077
        call ebx
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        jmp public_52b0eb
/*FIXUP public_52b077 : nop
        push offset public_5dd344 @0x52b077*/
  FIXUP public_52b077 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_52b09b
        call ebx
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [edi+0x2C], eax
        jmp public_52b0eb
/*FIXUP public_52b09b : nop
        push offset public_5dd338 @0x52b09b*/
  FIXUP public_52b09b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd338
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_52b0eb
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0xC]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x10]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+0x30]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_52b0eb : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_52b042
        pop ebx
        public_52b0fc : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x52b020)
    }
}

#undef public_52b042
#undef public_52b077
#undef public_52b09b
#undef public_52b0eb
#undef public_52b0fc
