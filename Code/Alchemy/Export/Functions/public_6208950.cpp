#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208950);
CLANG_FORWARD_PROC_SYMBOL(public_620a710);
CLANG_FORWARD_PROC_SYMBOL(public_620a730);
CLANG_FORWARD_PROC_SYMBOL(public_620a940);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624764c);

#define public_620899f _public_620899f
#define public_62089af _public_62089af
#define public_62089c3 _public_62089c3
#define public_62089d4 _public_62089d4
#define public_62089db _public_62089db
#define public_62089e8 _public_62089e8
#define public_6208a0a _public_6208a0a

PROC_DECLARE(0x6208950, internal_6208950, public_6208950);
extern "C" NAKED register_t __cdecl internal_6208950()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624764c @0x6208952*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624764c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [ebp], offset public_624bb10
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x18], 0
        test eax, eax
        je public_6208a0a
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        inc edi
        jns public_62089d4
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jg public_620899f
        push 0
        call public_620a730
        public_620899f : nop
        mov eax, dword ptr ss : [ebp+4]
        test edi, edi
        lea esi, ds:[eax+edi*8]
        mov dword ptr ss : [esp+0xC], esi
        jge public_62089e8
        neg edi
        public_62089af : nop
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov byte ptr ss : [esp+0x20], 1
        je public_62089c3
        mov ecx, esi
        call public_620a940
        public_62089c3 : nop
        add esi, 8
        dec edi
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0xC], esi
        jne public_62089af
        jmp public_62089e8
        public_62089d4 : nop
        test edi, edi
        jle public_62089e8
        lea esi, ds:[eax+4]
        public_62089db : nop
        mov ecx, esi
        call public_620a710
        add esi, 8
        dec edi
        jne public_62089db
        public_62089e8 : nop
        push 0
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        call public_620a730
        mov ebp, dword ptr ss : [ebp+4]
        pop edi
        test ebp, ebp
        pop esi
        je public_6208a0a
        push ebp
        call public_62460e0
        add esp, 4
        public_6208a0a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6208950)
    }
}

#undef public_620899f
#undef public_62089af
#undef public_62089c3
#undef public_62089d4
#undef public_62089db
#undef public_62089e8
#undef public_6208a0a
