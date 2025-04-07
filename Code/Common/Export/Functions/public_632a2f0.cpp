#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632a2f0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_632ca30);
CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397230);

#define public_632a320 _public_632a320
#define public_632a345 _public_632a345
#define public_632a39a _public_632a39a
#define public_632a3d3 _public_632a3d3

PROC_DECLARE(0x632a2f0, internal_632a2f0, public_632a2f0);
extern "C" NAKED register_t __cdecl internal_632a2f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397230 @0x632a2f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397230
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_632a345
        lea ebx, ds:[ebx]
        public_632a320 : nop
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_632ca30
        cmp dword ptr ss : [esp+0xC], edi
        jne public_632a320
        public_632a345 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], offset public_63a3f64
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x28], 0
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_63a3f80]
        mov dword ptr ss : [esp+0x3C], eax
        mov edi, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        mov byte ptr ss : [esp+0x38], 1
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_632a39a
        mov ebp, eax
        public_632a39a : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x3C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_632d550
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        test ecx, ecx
        pop edi
        pop esi
        mov byte ptr ss : [esp+0x2C], 0
        pop ebp
        je public_632a3d3
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_632a3d3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x632a2f0)
    }
}

#undef public_632a320
#undef public_632a345
#undef public_632a39a
#undef public_632a3d3
