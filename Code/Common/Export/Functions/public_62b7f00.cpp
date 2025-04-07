#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a9a90);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_JUMP_SYMBOL(public_639482b);

#define public_62b7f65 _public_62b7f65
#define public_62b7f71 _public_62b7f71
#define public_62b7f7f _public_62b7f7f

PROC_DECLARE(0x62b7f00, internal_62b7f00, public_62b7f00);
extern "C" NAKED register_t __cdecl internal_62b7f00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639482b @0x62b7f08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639482b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        mov ebx, ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        cmp eax, 0x1D
        mov ebp, dword ptr ss : [esp+0x20]
        jne public_62b7f71
        push 0x20
        call public_62fd560
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_62b7f65
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push edi
        push ebp
        push ebx
        push 0x800000
        mov ecx, esi
        call public_629f2c0
        mov dword ptr ds : [esi], offset public_639cb8c
        mov eax, esi
        public_62b7f65 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_62b7f7f
        public_62b7f71 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push edi
        push ebp
        mov ecx, ebx
        call public_62a9a90
        public_62b7f7f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62b7f00)
    }
}

#undef public_62b7f65
#undef public_62b7f71
#undef public_62b7f7f
