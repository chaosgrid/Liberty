#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204670);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62473bb);

#define public_6205063 _public_6205063
#define public_6205065 _public_6205065
#define public_6205085 _public_6205085
#define public_6205092 _public_6205092

PROC_DECLARE(0x6205000, internal_6205000, public_6205000);
extern "C" NAKED register_t __cdecl internal_6205000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62473bb @0x6205002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62473bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x94
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6205063
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_6204670
        mov dword ptr ds : [ebx], offset public_624b9f0
        mov dword ptr ds : [esi], offset public_624b990
        mov dword ptr ds : [esi+0x90], 1
        pop ebx
        jmp public_6205065
        public_6205063 : nop
        xor esi, esi
        public_6205065 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_6205092
        test eax, eax
        je public_6205085
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_6205085 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_6205092
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6205092 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0xF0], esi
        mov dword ptr ds : [edi+0xA8], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6205000)
    }
}

#undef public_6205063
#undef public_6205065
#undef public_6205085
#undef public_6205092
