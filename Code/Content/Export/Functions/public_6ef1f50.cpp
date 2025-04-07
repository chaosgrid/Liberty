#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac0a8);

#define public_6ef1f82 _public_6ef1f82
#define public_6ef1f94 _public_6ef1f94
#define public_6ef1fa0 _public_6ef1fa0
#define public_6ef1fdd _public_6ef1fdd
#define public_6ef1ff0 _public_6ef1ff0
#define public_6ef2005 _public_6ef2005

PROC_DECLARE(0x6ef1f50, internal_6ef1f50, public_6ef1f50);
extern "C" NAKED register_t __cdecl internal_6ef1f50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac0a8 @0x6ef1f52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac0a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_6ef1f94
        public_6ef1f82 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6ef1f82
        public_6ef1f94 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ef1fdd
        lea ecx, ds:[ecx]
        public_6ef1fa0 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6ef1fa0
        public_6ef1fdd : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6ef2005
        mov edi, edi
        public_6ef1ff0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebx
        jne public_6ef1ff0
        public_6ef2005 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6ef1f50)
    }
}

#undef public_6ef1f82
#undef public_6ef1f94
#undef public_6ef1fa0
#undef public_6ef1fdd
#undef public_6ef1ff0
#undef public_6ef2005
