#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204030);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624722b);

#define public_6203f08 _public_6203f08
#define public_6203f28 _public_6203f28
#define public_6203f2c _public_6203f2c
#define public_6203f31 _public_6203f31
#define public_6203fac _public_6203fac
#define public_6203fb3 _public_6203fb3
#define public_6203fb5 _public_6203fb5
#define public_6203fce _public_6203fce
#define public_6203fe8 _public_6203fe8
#define public_6203ffe _public_6203ffe
#define public_620400b _public_620400b
#define public_6204011 _public_6204011
#define public_6204013 _public_6204013

PROC_DECLARE(0x6203ed0, internal_6203ed0, public_6203ed0);
extern "C" NAKED register_t __cdecl internal_6203ed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624722b @0x6203ed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624722b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        xor ebx, ebx
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 0x14
        jne public_6203ffe
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6203f08 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6203f2c
        cmp cl, bl
        je public_6203f28
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6203f2c
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6203f08
        public_6203f28 : nop
        xor eax, eax
        jmp public_6203f31
        public_6203f2c : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6203f31 : nop
        cmp eax, ebx
        jne public_6203ffe
        push 0x54
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6203fb3
        lea eax, ss:[esp+0x28]
        lea edx, ss:[esp+0x24]
        push eax
        push ebx
        mov dword ptr ds : [esi], offset public_624b4f0
        lea ecx, ds:[esi+0xC]
        push edx
        mov dword ptr ds : [esi+8], ebx
        call public_6204030
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        lea eax, ds:[esi+0x48]
        mov dword ptr ds : [esi+4], offset public_624b4c4
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [eax], offset public_624b4b8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_624b410
        mov dword ptr ds : [esi+4], offset public_624b3e4
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x44], ecx
        jne public_6203fac
        mov dword ptr ds : [esi+0x44], eax
        jmp public_6203fb5
        public_6203fac : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6203fb5
        public_6203fb3 : nop
        xor esi, esi
        public_6203fb5 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        jne public_6203fce
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], esi
        jmp public_6204013
        public_6203fce : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x94]
        mov edi, eax
        cmp edi, ebx
        je public_620400b
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6203fe8
        mov dword ptr ds : [eax], ebx
        public_6203fe8 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0xA4]
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        jmp public_6204011
        public_6203ffe : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6204013
        public_620400b : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], esi
        public_6204011 : nop
        mov eax, edi
        public_6204013 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6203ed0)
    }
}

#undef public_6203f08
#undef public_6203f28
#undef public_6203f2c
#undef public_6203f31
#undef public_6203fac
#undef public_6203fb3
#undef public_6203fb5
#undef public_6203fce
#undef public_6203fe8
#undef public_6203ffe
#undef public_620400b
#undef public_6204011
#undef public_6204013
