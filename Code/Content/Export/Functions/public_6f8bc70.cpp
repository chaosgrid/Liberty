#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f8b030);
CLANG_FORWARD_PROC_SYMBOL(public_6f8bc70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1458);

#define public_6f8bcc9 _public_6f8bcc9
#define public_6f8bcd0 _public_6f8bcd0
#define public_6f8bd01 _public_6f8bd01
#define public_6f8bd20 _public_6f8bd20
#define public_6f8bd33 _public_6f8bd33
#define public_6f8bd43 _public_6f8bd43
#define public_6f8bd70 _public_6f8bd70

PROC_DECLARE(0x6f8bc70, internal_6f8bc70, public_6f8bc70);
extern "C" NAKED register_t __cdecl internal_6f8bc70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1458 @0x6f8bc72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1458
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        push esi
        push edi
        push 6
        mov ebp, ecx
        call public_6f8b030
        push 7
        mov ecx, ebp
        call public_6f8b030
        mov ecx, dword ptr ss : [ebp+0x5C]
        push 2
        push 2
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f87a50
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0xC], eax
        je public_6f8bd33
        push ebx
        jmp public_6f8bcd0
        public_6f8bcc9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6f8bcd0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ss : [ebp+0x5C]
        mov edx, dword ptr ds : [ecx+0x20]
        add ecx, 0x20
        push eax
        call dword ptr ds : [edx+8]
        mov ebx, eax
        mov dword ptr ds : [ebx+0x40], 0
        mov ecx, dword ptr ss : [ebp+0x88]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x74]
        mov edi, eax
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f8bd20
        public_6f8bd01 : nop
        mov ecx, dword ptr ds : [ebx+0x48]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0xC]
        push 0
        push ecx
        push eax
        call dword ptr ds : [public_6fb34cc]
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f8bd01
        public_6f8bd20 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f8bcc9
        pop ebx
        public_6f8bd33 : nop
        mov dword ptr ss : [esp+0x10], offset public_6fbc7cc
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov edi, ecx
        je public_6f8bd70
        public_6f8bd43 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f8bd43
        mov ecx, dword ptr ss : [esp+0x18]
        public_6f8bd70 : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f8bc70)
    }
}

#undef public_6f8bcc9
#undef public_6f8bcd0
#undef public_6f8bd01
#undef public_6f8bd20
#undef public_6f8bd33
#undef public_6f8bd43
#undef public_6f8bd70
