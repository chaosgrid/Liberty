#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62097e0);
CLANG_FORWARD_PROC_SYMBOL(public_620a310);
CLANG_FORWARD_PROC_SYMBOL(public_620a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_62476cb);

#define public_6209827 _public_6209827
#define public_6209833 _public_6209833
#define public_620983d _public_620983d
#define public_6209843 _public_6209843
#define public_620986b _public_620986b
#define public_620987b _public_620987b

PROC_DECLARE(0x62097e0, internal_62097e0, public_62097e0);
extern "C" NAKED register_t __cdecl internal_62097e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62476cb @0x62097e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62476cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_624bc94
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_620987b
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_6209843
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_6209827
        push 0
        call public_620a310
        public_6209827 : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea eax, ds:[eax+edi*8]
        jge public_6209843
        neg edi
        public_6209833 : nop
        test eax, eax
        je public_620983d
        mov dword ptr ds : [eax], 0
        public_620983d : nop
        add eax, 8
        dec edi
        jne public_6209833
        public_6209843 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_620986b
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620a8d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_620986b : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_620987b
        push esi
        call public_62460e0
        add esp, 4
        public_620987b : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62097e0)
    }
}

#undef public_6209827
#undef public_6209833
#undef public_620983d
#undef public_6209843
#undef public_620986b
#undef public_620987b
