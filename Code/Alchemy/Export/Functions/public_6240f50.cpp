#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240f50);

#define public_6240f93 _public_6240f93
#define public_6240fb5 _public_6240fb5
#define public_6240fde _public_6240fde
#define public_624105a _public_624105a

PROC_DECLARE(0x6240f50, internal_6240f50, public_6240f50);
extern "C" NAKED register_t __cdecl internal_6240f50()
{
    __asm
    {
        sub esp, 0x100
        push ebx
        mov ebx, dword ptr ss : [esp+0x10C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x114]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebp
        mov eax, dword ptr ds : [public_6257bd8]
        cmp eax, ebx
        jge public_6240f93
        push eax
        push ebx
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6257488 @0x6240f7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257488
        push eax
        call dword ptr ds : [public_624b064]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x76
        jmp public_6240fb5
        public_6240f93 : nop
        mov eax, dword ptr ds : [public_6257bdc]
        cmp eax, ebp
        jge public_6240fde
        push eax
        push ebp
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_6257438 @0x6240fa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257438
        push eax
        call dword ptr ds : [public_624b064]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x7D
        public_6240fb5 : nop
        mov edx, dword ptr ds : [public_624b004]
        mov eax, 0x100001
/*FIXUP push offset public_62573f0 @0x6240fc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573f0
/*FIXUP push offset public_625506c @0x6240fc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x24
        xor al, al
        pop esi
        pop ebp
        pop ebx
        add esp, 0x100
        ret 0xC
        public_6240fde : nop
        mov byte ptr ds : [esi+8], 1
        mov eax, dword ptr ds : [public_6257bb8]
        push edi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ss : [esp+0x114]
        mov dword ptr ds : [public_6257bd4], eax
        lea eax, ds:[esi+0x20]
        lea edi, ds:[esi+0x24]
        push ebx
        xor ecx, ecx
        lea ebx, ds:[esi+0x10]
        mov dword ptr ds : [esi], edx
        mov word ptr ds : [esi+6], cx
        mov word ptr ds : [esi+4], cx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [public_6257bc4]
        push ebx
        push eax
        mov eax, dword ptr ds : [public_6257bd4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6257bc8]
        add esi, 0x14
        push ebp
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0x1C]
        test ebx, ebx
        pop edi
        jl public_624105a
        test eax, eax
        jl public_624105a
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x100
        ret 0xC
        public_624105a : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x100
        ret 0xC
        UNREACHABLE_TRAP(0x6240f50)
    }
}

#undef public_6240f93
#undef public_6240fb5
#undef public_6240fde
#undef public_624105a
