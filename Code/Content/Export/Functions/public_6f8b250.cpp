#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1198);

#define public_6f8b28c _public_6f8b28c
#define public_6f8b294 _public_6f8b294
#define public_6f8b29a _public_6f8b29a
#define public_6f8b2c0 _public_6f8b2c0
#define public_6f8b2c9 _public_6f8b2c9
#define public_6f8b2d3 _public_6f8b2d3
#define public_6f8b2f0 _public_6f8b2f0
#define public_6f8b30f _public_6f8b30f

PROC_DECLARE(0x6f8b250, internal_6f8b250, public_6f8b250);
extern "C" NAKED register_t __cdecl internal_6f8b250()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1198 @0x6f8b252*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1198
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x88]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+0x74]
        mov esi, eax
        mov cl, byte ptr ds : [esi]
        mov byte ptr ss : [esp+0x10], cl
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f8b28c
        xor eax, eax
        jmp public_6f8b294
        public_6f8b28c : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f8b294 : nop
        test eax, eax
        jge public_6f8b29a
        xor eax, eax
        public_6f8b29a : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ebx
        mov esi, ebx
        je public_6f8b2d3
        sub eax, ebx
        mov edi, edi
        public_6f8b2c0 : nop
        test esi, esi
        je public_6f8b2c9
        mov edx, dword ptr ds : [eax+esi]
        mov dword ptr ds : [esi], edx
        public_6f8b2c9 : nop
        add esi, 4
        lea edx, ds:[eax+esi]
        cmp edx, ecx
        jne public_6f8b2c0
        public_6f8b2d3 : nop
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        cmp ebx, esi
        mov dword ptr ss : [esp+0x28], 0
        mov edi, ebx
        je public_6f8b30f
        lea esp, ss:[esp]
        public_6f8b2f0 : nop
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, eax
        call public_6f1cee0
        add edi, 4
        cmp edi, esi
        jne public_6f8b2f0
        public_6f8b30f : nop
        push ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f8b250)
    }
}

#undef public_6f8b28c
#undef public_6f8b294
#undef public_6f8b29a
#undef public_6f8b2c0
#undef public_6f8b2c9
#undef public_6f8b2d3
#undef public_6f8b2f0
#undef public_6f8b30f
