#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb200d);

#define public_6fa44f8 _public_6fa44f8
#define public_6fa4500 _public_6fa4500
#define public_6fa4506 _public_6fa4506
#define public_6fa4523 _public_6fa4523
#define public_6fa452b _public_6fa452b
#define public_6fa4535 _public_6fa4535
#define public_6fa4543 _public_6fa4543

PROC_DECLARE(0x6fa4490, internal_6fa4490, public_6fa4490);
extern "C" NAKED register_t __cdecl internal_6fa4490()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb200d @0x6fa4492*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb200d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0
        je public_6fa4543
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        push edi
        lea edi, ds:[eax+4]
        lea edx, ds:[esi+8]
        mov dword ptr ds : [eax], ecx
        push edx
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_6fb3084]
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x1C], eax
        mov cl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+0x20], cl
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_6fa44f8
        xor eax, eax
        jmp public_6fa4500
        public_6fa44f8 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, ecx
        sar eax, 2
        public_6fa4500 : nop
        test eax, eax
        jge public_6fa4506
        xor eax, eax
        public_6fa4506 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x24], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov esi, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp esi, ecx
        je public_6fa4535
        public_6fa4523 : nop
        test eax, eax
        je public_6fa452b
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_6fa452b : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_6fa4523
        public_6fa4535 : nop
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi], offset public_6fbc700
        pop edi
        pop esi
        public_6fa4543 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa4490)
    }
}

#undef public_6fa44f8
#undef public_6fa4500
#undef public_6fa4506
#undef public_6fa4523
#undef public_6fa452b
#undef public_6fa4535
#undef public_6fa4543
