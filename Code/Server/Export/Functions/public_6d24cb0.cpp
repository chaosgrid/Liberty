#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22820);
CLANG_FORWARD_PROC_SYMBOL(public_6d24cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d250e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d284a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62a09);

#define public_6d24cfa _public_6d24cfa
#define public_6d24d11 _public_6d24d11
#define public_6d24d2c _public_6d24d2c
#define public_6d24dbc _public_6d24dbc
#define public_6d24dbe _public_6d24dbe
#define public_6d24ddc _public_6d24ddc

PROC_DECLARE(0x6d24cb0, internal_6d24cb0, public_6d24cb0);
extern "C" NAKED register_t __cdecl internal_6d24cb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62a09 @0x6d24cb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62a09
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        push esi
        setne cl
        push edi
        mov byte ptr ss : [esp+0x10], cl
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0
        je public_6d24cfa
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+4]
        add edx, 0x38
        cmp edx, eax
        jbe public_6d24d2c
        public_6d24cfa : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0x38
        lea eax, ds:[edi+4]
        mov dword ptr ss : [esp+0x2C], 0x38
        jae public_6d24d11
        lea eax, ss:[esp+0x2C]
        public_6d24d11 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [edi], eax
        public_6d24d2c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x38
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x2C], esi
        test esi, esi
        mov byte ptr ss : [esp+0x20], 1
        je public_6d24dbc
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0xC]
        call public_6d284a0
        mov eax, dword ptr ss : [esp+0x28]
        push edi
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 2
        call public_6d22820
        lea edi, ds:[esi+0x24]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        call public_6d250e0
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi], offset public_6d68cd8
        mov dword ptr ds : [esi], offset public_6d68c58
        mov cl, byte ptr ss : [esp+8]
        mov byte ptr ds : [esi+0x30], cl
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ss : [esp+8], 0
        mov dword ptr ds : [esi+0x34], edx
        mov dword ptr ds : [esi], offset public_6d68fec
        mov al, byte ptr ss : [esp+8]
        test al, al
        mov byte ptr ss : [esp+0x20], 1
        je public_6d24dbe
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6d24dbe
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        jmp public_6d24dbe
        public_6d24dbc : nop
        xor esi, esi
        public_6d24dbe : nop
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6d24ddc
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_6d24ddc
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d24ddc : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d24cb0)
    }
}

#undef public_6d24cfa
#undef public_6d24d11
#undef public_6d24d2c
#undef public_6d24dbc
#undef public_6d24dbe
#undef public_6d24ddc
