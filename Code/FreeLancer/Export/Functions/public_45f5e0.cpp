#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_46d920);
CLANG_FORWARD_PROC_SYMBOL(public_57c360);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_45f634 _public_45f634
#define public_45f63c _public_45f63c
#define public_45f678 _public_45f678
#define public_45f67f _public_45f67f
#define public_45f68e _public_45f68e

PROC_DECLARE(0x45f5e0, internal_45f5e0, public_45f5e0);
extern "C" NAKED register_t __cdecl internal_45f5e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr ds : [ebx+0x530]
        test esi, esi
        je public_45f68e
        mov eax, dword ptr ds : [ebx+0x534]
        cmp eax, dword ptr ds : [esi+0x14]
        je public_45f68e
        push ebp
        mov ebp, dword ptr ds : [esi+4]
        push edi
        lea edi, ds:[ebx+0x568]
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_46d920
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_45f634
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        ja public_45f634
        lea eax, ss:[esp+0x10]
        jmp public_45f63c
        public_45f634 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_45f63c : nop
        mov ecx, dword ptr ds : [eax]
        pop edi
        cmp ecx, ebp
        pop ebp
        jne public_45f67f
        mov eax, dword ptr ds : [public_66da40]
/*FIXUP push offset public_5cf04c @0x45f649*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [public_66d3fc], eax
        call public_59da10
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_45f678
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_45eaf0
        mov ecx, esi
        call public_57d330
        public_45f678 : nop
        mov ecx, ebx
        call public_57d330
        public_45f67f : nop
        mov ecx, dword ptr ds : [ebx+0x530]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ebx+0x534], edx
        public_45f68e : nop
        mov ecx, ebx
        call public_57c360
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x45f5e0)
    }
}

#undef public_45f634
#undef public_45f63c
#undef public_45f678
#undef public_45f67f
#undef public_45f68e
