#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5200);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63946d0);

#define public_62b4d55 _public_62b4d55
#define public_62b4d67 _public_62b4d67
#define public_62b4d9b _public_62b4d9b
#define public_62b4dba _public_62b4dba
#define public_62b4dee _public_62b4dee
#define public_62b4df3 _public_62b4df3
#define public_62b4e0a _public_62b4e0a

PROC_DECLARE(0x62b4d10, internal_62b4d10, public_62b4d10);
extern "C" NAKED register_t __cdecl internal_62b4d10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63946d0 @0x62b4d18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63946d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        push edi
        mov edi, ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [edi+0xB0]
        jne public_62b4d55
        pop edi
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        public_62b4d55 : nop
        mov eax, dword ptr ds : [edi+0x1FC]
        push ebp
        push esi
        mov esi, dword ptr ds : [edi+0x1F8]
        cmp esi, eax
        je public_62b4d9b
        public_62b4d67 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b4e0a
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62b4e0a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebp, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        cmp ebp, eax
        je public_62b4df3
        mov eax, dword ptr ds : [edi+0x1FC]
        add esi, 8
        cmp esi, eax
        jne public_62b4d67
        public_62b4d9b : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ds:[ebx+8]
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_62b4dba
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6341610
        public_62b4dba : nop
        mov eax, dword ptr ds : [edi+0x1FC]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[edi+0x1F4]
        push 1
        push eax
        mov dword ptr ss : [esp+0x2C], 1
        call public_62b5200
        cmp dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_62b4df3
        push esi
        lea ecx, ss:[esp+0x14]
        public_62b4dee : nop
        call public_6341610
        public_62b4df3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        public_62b4e0a : nop
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[ebx+8]
        cmp eax, ecx
        je public_62b4df3
        push eax
        mov ecx, esi
        jmp public_62b4dee
        UNREACHABLE_TRAP(0x62b4d10)
    }
}

#undef public_62b4d55
#undef public_62b4d67
#undef public_62b4d9b
#undef public_62b4dba
#undef public_62b4dee
#undef public_62b4df3
#undef public_62b4e0a
