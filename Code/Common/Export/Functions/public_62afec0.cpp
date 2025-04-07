#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_62afec0);
CLANG_FORWARD_PROC_SYMBOL(public_62d3f10);
CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63943da);

#define public_62aff1f _public_62aff1f
#define public_62aff21 _public_62aff21
#define public_62aff36 _public_62aff36
#define public_62aff49 _public_62aff49

PROC_DECLARE(0x62afec0, internal_62afec0, public_62afec0);
extern "C" NAKED register_t __cdecl internal_62afec0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63943da @0x62afec2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63943da
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+8]
        lea ebx, ds:[esi+0x18]
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_639e5a4
        mov dword ptr ss : [ebp], offset public_639e584
        mov dword ptr ds : [ebx], offset public_639e57c
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        lea edi, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x20], 2
        je public_62aff36
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62aff36
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62aff1f
        add eax, 0xFFFFFFF8
        jmp public_62aff21
        public_62aff1f : nop
        xor eax, eax
        public_62aff21 : nop
        push eax
        call public_62d4ba0
        add esp, 4
        test eax, eax
        je public_62aff36
        push ebx
        mov ecx, eax
        call public_62d3f10
        public_62aff36 : nop
        cmp dword ptr ds : [edi], 0
        mov byte ptr ss : [esp+0x20], 1
        je public_62aff49
        push 0
        mov ecx, edi
        call public_6341610
        public_62aff49 : nop
        mov ecx, ebp
        mov byte ptr ss : [esp+0x20], 0
        call public_6285b90
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_629ff20
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62afec0)
    }
}

#undef public_62aff1f
#undef public_62aff21
#undef public_62aff36
#undef public_62aff49
