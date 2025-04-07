#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_6225890);
CLANG_FORWARD_PROC_SYMBOL(public_62258b0);
CLANG_FORWARD_PROC_SYMBOL(public_6226120);
CLANG_FORWARD_PROC_SYMBOL(public_62264f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249050);

#define public_6226517 _public_6226517
#define public_6226519 _public_6226519
#define public_622656e _public_622656e
#define public_622657d _public_622657d
#define public_622659a _public_622659a
#define public_62265a8 _public_62265a8
#define public_62265e1 _public_62265e1

PROC_DECLARE(0x62264f0, internal_62264f0, public_62264f0);
extern "C" NAKED register_t __cdecl internal_62264f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249050 @0x62264f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249050
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        cmp ecx, ebp
        push edi
        je public_6226517
        lea edi, ds:[ecx+0xC]
        jmp public_6226519
        public_6226517 : nop
        xor edi, edi
        public_6226519 : nop
        mov dword ptr ss : [esp+0x10], edi
        lea esi, ds:[edi+0xB4]
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x18], esi
        push ecx
        mov bl, 1
        mov eax, esp
        mov dword ptr ss : [esp+0x20], esp
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], bl
        call public_62258b0
        push ecx
        mov byte ptr ss : [esp+0x34], 2
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push ecx
        mov ecx, esi
        call public_6225890
        lea edx, ss:[esp+0x1C]
        mov ecx, esi
        push edx
        mov byte ptr ss : [esp+0x38], bl
        call public_6226120
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ebp
        cmp eax, ebp
        je public_622657d
        public_622656e : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        jne public_622656e
        public_622657d : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov ebx, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x2C], 3
        je public_62265a8
        public_622659a : nop
        mov ecx, esi
        call public_620d670
        add esi, 4
        cmp esi, ebx
        jne public_622659a
        public_62265a8 : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebp
        mov dword ptr ds : [edi+0xA0], ebp
        mov dword ptr ds : [edi+0xA4], ebp
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_62265e1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebp
        public_62265e1 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62264f0)
    }
}

#undef public_6226517
#undef public_6226519
#undef public_622656e
#undef public_622657d
#undef public_622659a
#undef public_62265a8
#undef public_62265e1
