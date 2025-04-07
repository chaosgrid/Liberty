#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f06840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6face78);

#define public_6f06880 _public_6f06880
#define public_6f06895 _public_6f06895

PROC_DECLARE(0x6f06840, internal_6f06840, public_6f06840);
extern "C" NAKED register_t __cdecl internal_6f06840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6face78 @0x6f06842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6face78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0x11C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x118]
        mov dword ptr ss : [esp+0x20], 0
        je public_6f06895
        lea esp, ss:[esp]
        public_6f06880 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6f06880
        public_6f06895 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb43f8
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f06840)
    }
}

#undef public_6f06880
#undef public_6f06895
