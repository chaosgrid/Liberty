#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208840);
CLANG_FORWARD_PROC_SYMBOL(public_620a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_620a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_620a930);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624761c);

#define public_620888f _public_620888f
#define public_620889f _public_620889f
#define public_62088b3 _public_62088b3
#define public_62088c4 _public_62088c4
#define public_62088cb _public_62088cb
#define public_62088d8 _public_62088d8
#define public_62088fa _public_62088fa

PROC_DECLARE(0x6208840, internal_6208840, public_6208840);
extern "C" NAKED register_t __cdecl internal_6208840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624761c @0x6208842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624761c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [ebp], offset public_624bbb4
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x18], 0
        test eax, eax
        je public_62088fa
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        inc edi
        jns public_62088c4
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jg public_620888f
        push 0
        call public_620a5c0
        public_620888f : nop
        mov eax, dword ptr ss : [ebp+4]
        test edi, edi
        lea esi, ds:[eax+edi*8]
        mov dword ptr ss : [esp+0xC], esi
        jge public_62088d8
        neg edi
        public_620889f : nop
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov byte ptr ss : [esp+0x20], 1
        je public_62088b3
        mov ecx, esi
        call public_620a930
        public_62088b3 : nop
        add esi, 8
        dec edi
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0xC], esi
        jne public_620889f
        jmp public_62088d8
        public_62088c4 : nop
        test edi, edi
        jle public_62088d8
        lea esi, ds:[eax+4]
        public_62088cb : nop
        mov ecx, esi
        call public_620a5a0
        add esi, 8
        dec edi
        jne public_62088cb
        public_62088d8 : nop
        push 0
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        call public_620a5c0
        mov ebp, dword ptr ss : [ebp+4]
        pop edi
        test ebp, ebp
        pop esi
        je public_62088fa
        push ebp
        call public_62460e0
        add esp, 4
        public_62088fa : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6208840)
    }
}

#undef public_620888f
#undef public_620889f
#undef public_62088b3
#undef public_62088c4
#undef public_62088cb
#undef public_62088d8
#undef public_62088fa
