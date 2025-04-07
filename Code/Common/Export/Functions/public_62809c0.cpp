#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62809c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392e71);

#define public_6280a41 _public_6280a41
#define public_6280a49 _public_6280a49
#define public_6280a4f _public_6280a4f
#define public_6280a68 _public_6280a68
#define public_6280a70 _public_6280a70
#define public_6280a7a _public_6280a7a
#define public_6280a81 _public_6280a81

PROC_DECLARE(0x62809c0, internal_62809c0, public_62809c0);
extern "C" NAKED register_t __cdecl internal_62809c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392e71 @0x62809c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392e71
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
        je public_6280a81
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        lea eax, ds:[esi+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[esi+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[edi+0x18]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+0x24], dl
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        jne public_6280a41
        xor eax, eax
        jmp public_6280a49
        public_6280a41 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, ecx
        sar eax, 2
        public_6280a49 : nop
        test eax, eax
        jge public_6280a4f
        xor eax, eax
        public_6280a4f : nop
        shl eax, 2
        push eax
        call public_6391d9c
        mov dword ptr ds : [edi+0x28], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov esi, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp esi, ecx
        je public_6280a7a
        public_6280a68 : nop
        test eax, eax
        je public_6280a70
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_6280a70 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_6280a68
        public_6280a7a : nop
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], eax
        pop esi
        public_6280a81 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62809c0)
    }
}

#undef public_6280a41
#undef public_6280a49
#undef public_6280a4f
#undef public_6280a68
#undef public_6280a70
#undef public_6280a7a
#undef public_6280a81
