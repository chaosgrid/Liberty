#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3bc1);

#define public_5789d7 _public_5789d7
#define public_5789df _public_5789df
#define public_5789e5 _public_5789e5
#define public_578a02 _public_578a02
#define public_578a10 _public_578a10
#define public_578a1a _public_578a1a
#define public_578a21 _public_578a21

PROC_DECLARE(0x578980, internal_578980, public_578980);
extern "C" NAKED register_t __cdecl internal_578980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3bc1 @0x578982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3bc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_578a21
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0x10], cl
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_5789d7
        xor eax, eax
        jmp public_5789df
        public_5789d7 : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 3
        public_5789df : nop
        test eax, eax
        jge public_5789e5
        xor eax, eax
        public_5789e5 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov esi, dword ptr ds : [esi+0x14]
        add esp, 4
        cmp esi, ecx
        je public_578a1a
        public_578a02 : nop
        test eax, eax
        je public_578a10
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        public_578a10 : nop
        add esi, 8
        add eax, 8
        cmp esi, ecx
        jne public_578a02
        public_578a1a : nop
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x1C], eax
        pop esi
        public_578a21 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x578980)
    }
}

#undef public_5789d7
#undef public_5789df
#undef public_5789e5
#undef public_578a02
#undef public_578a10
#undef public_578a1a
#undef public_578a21
