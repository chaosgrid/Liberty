#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e160);
CLANG_FORWARD_PROC_SYMBOL(public_4f7f70);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf4c8);

#define public_4f7fc0 _public_4f7fc0
#define public_4f7fe5 _public_4f7fe5
#define public_4f7ff7 _public_4f7ff7
#define public_4f8016 _public_4f8016

PROC_DECLARE(0x4f7f70, internal_4f7f70, public_4f7f70);
extern "C" NAKED register_t __cdecl internal_4f7f70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf4c8 @0x4f7f72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf4c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5d9ad4
        test byte ptr ds : [esi+0x7C], 4
        mov dword ptr ss : [esp+0x10], 0
        je public_4f7fe5
        mov eax, dword ptr ds : [esi+0x6C]
        test eax, eax
        je public_4f7fc0
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], 0
        public_4f7fc0 : nop
        mov ecx, dword ptr ds : [esi+0x70]
        test ecx, ecx
        je public_4f7fe5
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ds : [esi+0x70]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], 0
        public_4f7fe5 : nop
        test byte ptr ds : [esi+0x7C], 8
        je public_4f7ff7
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_4f7ff7
        call public_42e160
        public_4f7ff7 : nop
        lea ecx, ds:[esi+0x44]
        mov dword ptr ds : [esi], offset public_5d9aac
        cmp dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_4f8016
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4f8016 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4f7f70)
    }
}

#undef public_4f7fc0
#undef public_4f7fe5
#undef public_4f7ff7
#undef public_4f8016
