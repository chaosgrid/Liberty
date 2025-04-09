#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5488a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0ff8);

#define public_5488db _public_5488db
#define public_5488f0 _public_5488f0
#define public_54893b _public_54893b
#define public_54895a _public_54895a
#define public_54895c _public_54895c
#define public_54898e _public_54898e
#define public_548990 _public_548990
#define public_5489c7 _public_5489c7
#define public_5489f6 _public_5489f6
#define public_548a02 _public_548a02

PROC_DECLARE(0x5488a0, internal_5488a0, public_5488a0);
extern "C" NAKED register_t __cdecl internal_5488a0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr fs : [0]
        fadd st(0), st
        push 0xFFFFFFFF
/*FIXUP push public_5c0ff8 @0x5488ae*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0ff8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        fsub dword ptr ds : [public_5c75dc]
        mov dword ptr fs : [0], esp
        sub esp, 8
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_5488db
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        jmp public_5488f0
        public_5488db : nop
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_5488f0
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_5488f0 : nop
        fld dword ptr ds : [public_5d4f28]
        push ebx
        fmul st, st(1)
        push esi
        push edi
        fadd dword ptr ds : [public_5d8850]
        call public_5b7ec0
        fadd st(0), st
        mov ebx, eax
        fsubr dword ptr ds : [public_5e0530]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 2
        call public_540fc0
        mov esi, eax
        xor edi, edi
        add esp, 4
        cmp esi, edi
        je public_548a02
        push ebp
        public_54893b : nop
        lea eax, ds:[esi+0xC]
        cmp eax, edi
        je public_54895a
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_54895a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_54895c
        public_54895a : nop
        xor eax, eax
        public_54895c : nop
        test byte ptr ds : [eax+0xE0], 7
        je public_5489f6
        mov dword ptr ss : [esp+0x28], edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_54898e
        lea eax, ds:[esi+0xC]
        cmp eax, edi
        je public_54898e
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_54898e
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_548990
        public_54898e : nop
        xor eax, eax
        public_548990 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ebp, ss:[esp+0x28]
        push ebp
/*FIXUP push offset public_5e051c @0x5489a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e051c
        push ecx
        push eax
        call dword ptr ds : [edx+0x78]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x28]
        jge public_5489c7
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_5489f6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_5489f6
        public_5489c7 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x1C]
        fild dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_5489f6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_5489f6 : nop
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, edi
        jne public_54893b
        pop ebp
        public_548a02 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5488a0)
    }
}

#undef public_5488db
#undef public_5488f0
#undef public_54893b
#undef public_54895a
#undef public_54895c
#undef public_54898e
#undef public_548990
#undef public_5489c7
#undef public_5489f6
#undef public_548a02
