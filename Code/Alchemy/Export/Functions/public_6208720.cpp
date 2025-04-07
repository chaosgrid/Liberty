#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208720);
CLANG_FORWARD_PROC_SYMBOL(public_620a430);
CLANG_FORWARD_PROC_SYMBOL(public_620a450);
CLANG_FORWARD_PROC_SYMBOL(public_620a920);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_62475ec);

#define public_620876f _public_620876f
#define public_620877f _public_620877f
#define public_6208793 _public_6208793
#define public_62087a4 _public_62087a4
#define public_62087ab _public_62087ab
#define public_62087b8 _public_62087b8
#define public_62087da _public_62087da

PROC_DECLARE(0x6208720, internal_6208720, public_6208720);
extern "C" NAKED register_t __cdecl internal_6208720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62475ec @0x6208722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62475ec
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [ebp], offset public_624bb60
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x18], 0
        test eax, eax
        je public_62087da
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        inc edi
        jns public_62087a4
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jg public_620876f
        push 0
        call public_620a450
        public_620876f : nop
        mov eax, dword ptr ss : [ebp+4]
        test edi, edi
        lea esi, ds:[eax+edi*8]
        mov dword ptr ss : [esp+0xC], esi
        jge public_62087b8
        neg edi
        public_620877f : nop
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov byte ptr ss : [esp+0x20], 1
        je public_6208793
        mov ecx, esi
        call public_620a920
        public_6208793 : nop
        add esi, 8
        dec edi
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0xC], esi
        jne public_620877f
        jmp public_62087b8
        public_62087a4 : nop
        test edi, edi
        jle public_62087b8
        lea esi, ds:[eax+4]
        public_62087ab : nop
        mov ecx, esi
        call public_620a430
        add esi, 8
        dec edi
        jne public_62087ab
        public_62087b8 : nop
        push 0
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        call public_620a450
        mov ebp, dword ptr ss : [ebp+4]
        pop edi
        test ebp, ebp
        pop esi
        je public_62087da
        push ebp
        call public_62460e0
        add esp, 4
        public_62087da : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6208720)
    }
}

#undef public_620876f
#undef public_620877f
#undef public_6208793
#undef public_62087a4
#undef public_62087ab
#undef public_62087b8
#undef public_62087da
