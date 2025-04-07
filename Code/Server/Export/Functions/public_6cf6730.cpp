#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6730);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60ae9);

#define public_6cf6760 _public_6cf6760
#define public_6cf6781 _public_6cf6781
#define public_6cf67c9 _public_6cf67c9
#define public_6cf67cb _public_6cf67cb
#define public_6cf6807 _public_6cf6807

PROC_DECLARE(0x6cf6730, internal_6cf6730, public_6cf6730);
extern "C" NAKED register_t __cdecl internal_6cf6730()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60ae9 @0x6cf6738*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60ae9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6cf6807
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, edi
        public_6cf6760 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [esi], ecx
        je public_6cf6781
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6cf6760
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        public_6cf6781 : nop
        mov eax, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [eax+0x2F0]
        xor ebx, ebx
        cmp dl, bl
        je public_6cf6807
        mov dl, byte ptr ss : [esp+0x2C]
        mov byte ptr ss : [esp+0xC], dl
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_6cf67c9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6cf67c9
        mov esi, eax
        jmp public_6cf67cb
        public_6cf67c9 : nop
        xor esi, esi
        public_6cf67cb : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xAC]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [esi+0xB0]
        push eax
        add edi, 0x38
        push edi
        call dword ptr ds : [edx+0x154]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6d5ffb0
        add esp, 4
        public_6cf6807 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6cf6730)
    }
}

#undef public_6cf6760
#undef public_6cf6781
#undef public_6cf67c9
#undef public_6cf67cb
#undef public_6cf6807
