#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6910);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6333e50);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62f6983 _public_62f6983
#define public_62f69b3 _public_62f69b3
#define public_62f69c1 _public_62f69c1
#define public_62f6a05 _public_62f6a05
#define public_62f6a50 _public_62f6a50
#define public_62f6a97 _public_62f6a97

PROC_DECLARE(0x62f6910, internal_62f6910, public_62f6910);
extern "C" NAKED register_t __cdecl internal_62f6910()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xCC]
        test al, al
        push edi
        jne public_62f69b3
        mov eax, dword ptr ds : [esi+0x98]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edi, ds:[esi+0x98]
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_63fcad4
        mov dword ptr ds : [esi+0xD0], 0
        mov dword ptr ss : [esp+0x18], eax
        call public_6301640
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_63fcad8]
        jne public_62f69c1
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f696e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f6978*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_62f6983 : nop
        lea ecx, ds:[esi+8]
        mov ebx, 0x100001
        call public_6333e60
        push eax
        mov ecx, edi
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0xD2D
/*FIXUP push offset public_63a123c @0x62f69a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1c18 @0x62f69a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1c18
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        public_62f69b3 : nop
        fld dword ptr ds : [esi+0xD0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_62f69c1 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_62f6983
        lea ebp, ds:[eax+0x8C]
        mov ecx, ebp
        call public_6333e50
        test al, al
        je public_62f6a05
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x70]
        pop edi
        fmul dword ptr ds : [esi+0x94]
        mov byte ptr ds : [esi+0xCC], 1
        fstp dword ptr ds : [esi+0xD0]
        fld dword ptr ds : [esi+0xD0]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_62f6a05 : nop
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, offset public_63fca70
        call public_6301640
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [public_63fca74]
        jne public_62f6a97
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f6a39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f6a43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov edi, edi
        public_62f6a50 : nop
        lea ecx, ds:[esi+8]
        mov ebx, 0x100001
        call public_6333e60
        push eax
        mov ecx, edi
        call public_6333e60
        push eax
        mov ecx, ebp
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0xD25
/*FIXUP push offset public_63a123c @0x62f6a79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1ba8 @0x62f6a7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1ba8
        push ebx
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0xD0]
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_62f6a97 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_62f6a50
        fld dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x94]
        pop edi
        fst dword ptr ds : [esi+0xD0]
        fld dword ptr ds : [eax+0x10]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [public_639c13c]
        faddp st(2), st
        fstp st(0)
        fst dword ptr ds : [esi+0xD0]
        fld dword ptr ds : [esi+0x94]
        fmul dword ptr ds : [eax+0x10]
        faddp 
        fst dword ptr ds : [esi+0xD0]
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [eax+0xC]
        fadd dword ptr ds : [esi+0x94]
        fld dword ptr ds : [ecx+0x70]
        fsub dword ptr ds : [eax+0x10]
        mov byte ptr ds : [esi+0xCC], 1
        fmulp 
        fadd st, st(1)
        fstp dword ptr ds : [esi+0xD0]
        fstp st(0)
        fld dword ptr ds : [esi+0xD0]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62f6910)
    }
}

#undef public_62f6983
#undef public_62f69b3
#undef public_62f69c1
#undef public_62f6a05
#undef public_62f6a50
#undef public_62f6a97
