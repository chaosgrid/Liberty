#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d223e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d628bb);

#define public_6d22420 _public_6d22420
#define public_6d2242d _public_6d2242d
#define public_6d22434 _public_6d22434
#define public_6d22441 _public_6d22441
#define public_6d22456 _public_6d22456
#define public_6d22477 _public_6d22477
#define public_6d22498 _public_6d22498
#define public_6d224bc _public_6d224bc
#define public_6d224dd _public_6d224dd

PROC_DECLARE(0x6d223e0, internal_6d223e0, public_6d223e0);
extern "C" NAKED register_t __cdecl internal_6d223e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d628bb @0x6d223e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d628bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_6d68c28
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], 1
        je public_6d22434
        lea esp, ss:[esp]
        public_6d22420 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d2242d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d2242d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d22420
        public_6d22434 : nop
        mov ebp, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[edi+8]
        je public_6d22456
        public_6d22441 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call public_6d23fd0
        cmp esi, ebp
        jne public_6d22441
        public_6d22456 : nop
        lea esi, ds:[edi+0x30]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x28], 2
        je public_6d22477
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d22477 : nop
        mov dword ptr ds : [esi], offset public_6d68d28
        mov dword ptr ds : [edi], offset public_6d68e7c
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6d224bc
        public_6d22498 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        call public_6d23fd0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d22498
        public_6d224bc : nop
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [edi], offset public_6d68d00
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x28], 4
        je public_6d224dd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d224dd : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], offset public_6d68d28
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d223e0)
    }
}

#undef public_6d22420
#undef public_6d2242d
#undef public_6d22434
#undef public_6d22441
#undef public_6d22456
#undef public_6d22477
#undef public_6d22498
#undef public_6d224bc
#undef public_6d224dd
