#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209160);
CLANG_FORWARD_PROC_SYMBOL(public_620a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_620a880);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624768b);

#define public_62091a7 _public_62091a7
#define public_62091b3 _public_62091b3
#define public_62091bd _public_62091bd
#define public_62091c3 _public_62091c3
#define public_62091eb _public_62091eb
#define public_62091fb _public_62091fb

PROC_DECLARE(0x6209160, internal_6209160, public_6209160);
extern "C" NAKED register_t __cdecl internal_6209160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624768b @0x6209162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624768b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_624bc34
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_62091fb
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_62091c3
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_62091a7
        push 0
        call public_620a1f0
        public_62091a7 : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea eax, ds:[eax+edi*8]
        jge public_62091c3
        neg edi
        public_62091b3 : nop
        test eax, eax
        je public_62091bd
        mov dword ptr ds : [eax], 0
        public_62091bd : nop
        add eax, 8
        dec edi
        jne public_62091b3
        public_62091c3 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_62091eb
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620a880
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_62091eb : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_62091fb
        push esi
        call public_62460e0
        add esp, 4
        public_62091fb : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6209160)
    }
}

#undef public_62091a7
#undef public_62091b3
#undef public_62091bd
#undef public_62091c3
#undef public_62091eb
#undef public_62091fb
