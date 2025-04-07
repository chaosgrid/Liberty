#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6211850);
CLANG_FORWARD_PROC_SYMBOL(public_6218ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624854b);

#define public_6218f17 _public_6218f17
#define public_6218f19 _public_6218f19
#define public_6218f3b _public_6218f3b
#define public_6218f56 _public_6218f56
#define public_6218f6b _public_6218f6b
#define public_6218f80 _public_6218f80
#define public_6218f95 _public_6218f95
#define public_6218faa _public_6218faa
#define public_6218fbe _public_6218fbe
#define public_6218fd6 _public_6218fd6
#define public_6218fec _public_6218fec
#define public_6219010 _public_6219010

PROC_DECLARE(0x6218ef0, internal_6218ef0, public_6218ef0);
extern "C" NAKED register_t __cdecl internal_6218ef0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624854b @0x6218ef8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624854b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        cmp ecx, ebx
        push edi
        je public_6218f17
        lea esi, ds:[ecx+4]
        jmp public_6218f19
        public_6218f17 : nop
        xor esi, esi
        public_6218f19 : nop
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x28], 6
        cmp eax, ebx
        je public_6218f3b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_6218f3b : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov byte ptr ss : [esp+0x28], 5
        cmp eax, ebx
        je public_6218f56
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_6218f56 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov byte ptr ss : [esp+0x28], 4
        cmp eax, ebx
        je public_6218f6b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6218f6b : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x28], 3
        cmp eax, ebx
        je public_6218f80
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_6218f80 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x28], 2
        cmp eax, ebx
        je public_6218f95
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_6218f95 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x28], 1
        cmp eax, ebx
        je public_6218faa
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_6218faa : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x28], bl
        cmp eax, ebx
        je public_6218fbe
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_6218fbe : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x28], 8
        cmp eax, ebx
        je public_6218fd6
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_6218fd6 : nop
        mov ebp, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        mov byte ptr ss : [esp+0x28], 7
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6219010
        public_6218fec : nop
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6211850
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, edi
        call public_620c160
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6218fec
        public_6219010 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, offset public_624bd84
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x28], 9
        mov dword ptr ds : [esi+0x28], edi
        call public_620b350
        lea ecx, ds:[esi+0x24]
        call public_620d1d0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+4], edi
        call public_620b350
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6218ef0)
    }
}

#undef public_6218f17
#undef public_6218f19
#undef public_6218f3b
#undef public_6218f56
#undef public_6218f6b
#undef public_6218f80
#undef public_6218f95
#undef public_6218faa
#undef public_6218fbe
#undef public_6218fd6
#undef public_6218fec
#undef public_6219010
