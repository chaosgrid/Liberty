#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6285d10);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62b2f30);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_639468a);

#define public_62b2f84 _public_62b2f84
#define public_62b2f86 _public_62b2f86
#define public_62b2f9b _public_62b2f9b
#define public_62b2fb8 _public_62b2fb8

PROC_DECLARE(0x62b2f30, internal_62b2f30, public_62b2f30);
extern "C" NAKED register_t __cdecl internal_62b2f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639468a @0x62b2f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639468a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+8]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_639e6a0
        mov dword ptr ds : [ebx], offset public_639e680
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        lea edi, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x1C], 2
        je public_62b2f9b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b2f9b
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b2f84
        lea ecx, ds:[eax-8]
        jmp public_62b2f86
        public_62b2f84 : nop
        xor ecx, ecx
        public_62b2f86 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b2f9b
        push 1
        mov ecx, eax
        call public_62ad540
        public_62b2f9b : nop
        push ebx
        call public_6285d10
        mov eax, dword ptr ds : [edi]
        add esp, 4
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 1
        je public_62b2fb8
        push 0
        mov ecx, edi
        call public_6341610
        public_62b2fb8 : nop
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 0
        call public_6285b90
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_629ff20
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62b2f30)
    }
}

#undef public_62b2f84
#undef public_62b2f86
#undef public_62b2f9b
#undef public_62b2fb8
