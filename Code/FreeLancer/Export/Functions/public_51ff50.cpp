#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_51ff50);
CLANG_FORWARD_PROC_SYMBOL(public_5201e0);
CLANG_FORWARD_PROC_SYMBOL(public_520850);
CLANG_FORWARD_PROC_SYMBOL(public_524880);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bff7b);

#define public_51ff8e _public_51ff8e
#define public_51ff90 _public_51ff90
#define public_52003b _public_52003b
#define public_520073 _public_520073
#define public_520084 _public_520084

PROC_DECLARE(0x51ff50, internal_51ff50, public_51ff50);
extern "C" NAKED register_t __cdecl internal_51ff50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bff7b @0x51ff52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bff7b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push 0x238
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_51ff8e
        mov ecx, eax
        call public_5201e0
        jmp public_51ff90
        public_51ff8e : nop
        xor eax, eax
        public_51ff90 : nop
        push ebx
        push esi
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_6753c4]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push edi
        push ecx
        push eax
        mov ecx, offset public_6753c0
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_42a7e0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_5999b0
        mov edi, dword ptr ds : [public_6753c8]
        mov edx, dword ptr ds : [public_6753c4]
        mov ebx, dword ptr ss : [esp+0x30]
        add esp, 8
        inc edi
        mov dword ptr ds : [public_6753c8], edi
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax+8]
        push ebx
        call public_554e90
        push eax
        call dword ptr ds : [public_5c6654]
        mov esi, eax
        add esp, 8
        test esi, esi
        jne public_52003b
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [public_5c6d18]
        push ebx
        push ecx
        push 0xC8
/*FIXUP push offset public_5dc47c @0x520012*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100001
/*FIXUP push offset public_5dc438 @0x52001c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc438
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_52003b : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        cmp eax, 1
        mov ebp, dword ptr ss : [esp+0x28]
        je public_520073
        cmp eax, 2
        je public_520073
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push ebp
        push 0xD1
/*FIXUP push offset public_5dc47c @0x52005e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5dc3d8 @0x520068*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc3d8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_520073 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov dword ptr ds : [edi+0x1C], esi
        je public_520084
        push esi
        call dword ptr ds : [public_5c6650]
        public_520084 : nop
        mov edx, dword ptr ds : [public_613844]
        push edx
        mov ecx, edi
        call public_524880
        push ebp
        mov ecx, edi
        call public_520850
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x51ff50)
    }
}

#undef public_51ff8e
#undef public_51ff90
#undef public_52003b
#undef public_520073
#undef public_520084
