#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_635c310);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6398236);

#define public_635c356 _public_635c356
#define public_635c362 _public_635c362
#define public_635c373 _public_635c373
#define public_635c388 _public_635c388
#define public_635c38e _public_635c38e
#define public_635c3a7 _public_635c3a7
#define public_635c3ad _public_635c3ad
#define public_635c3c8 _public_635c3c8
#define public_635c3cf _public_635c3cf
#define public_635c3f2 _public_635c3f2
#define public_635c3f9 _public_635c3f9

PROC_DECLARE(0x635c310, internal_635c310, public_635c310);
extern "C" NAKED register_t __cdecl internal_635c310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398236 @0x635c312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398236
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov edx, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp edx, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_635c388
        xor edi, edi
        mov di, word ptr ds : [edx+0x1A]
        mov eax, edi
        and eax, 0xFFFF
        dec eax
        js public_635c362
        mov ecx, dword ptr ds : [edx+0x1C]
        lea ecx, ds:[ecx+eax*4]
        public_635c356 : nop
        cmp dword ptr ds : [ecx], esi
        je public_635c362
        dec eax
        sub ecx, 4
        cmp eax, ebx
        jge public_635c356
        public_635c362 : nop
        lea ecx, ds:[edi-1]
        mov word ptr ds : [edx+0x1A], cx
        and ecx, 0xFFFF
        cmp eax, ecx
        jge public_635c388
        public_635c373 : nop
        mov ecx, dword ptr ds : [edx+0x1C]
        mov edi, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edi
        xor ecx, ecx
        mov cx, word ptr ds : [edx+0x1A]
        inc eax
        cmp eax, ecx
        jl public_635c373
        public_635c388 : nop
        cmp word ptr ds : [esi+0x1A], bx
        je public_635c3ad
        public_635c38e : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [edx]
        cmp edi, ebx
        je public_635c3a7
        mov ecx, edi
        call public_635c310
        push edi
        call public_6391d5a
        add esp, 4
        public_635c3a7 : nop
        cmp word ptr ds : [esi+0x1A], bx
        jne public_635c38e
        public_635c3ad : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ds:[esi+0x28]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18], bl
        je public_635c3cf
        cmp eax, ebx
        je public_635c3c8
        push eax
        call public_6343fb0
        add esp, 4
        public_635c3c8 : nop
        mov dword ptr ds : [esi+0x24], ebx
        mov word ptr ds : [esi+0x20], bx
        public_635c3cf : nop
        mov word ptr ds : [esi+0x22], bx
        mov eax, dword ptr ds : [esi+0x1C]
        lea edx, ds:[esi+0x20]
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_635c3f9
        cmp eax, ebx
        je public_635c3f2
        push eax
        call public_6343fb0
        add esp, 4
        public_635c3f2 : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov word ptr ds : [esi+0x18], bx
        public_635c3f9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [esi+0x1A], bx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x635c310)
    }
}

#undef public_635c356
#undef public_635c362
#undef public_635c373
#undef public_635c388
#undef public_635c38e
#undef public_635c3a7
#undef public_635c3ad
#undef public_635c3c8
#undef public_635c3cf
#undef public_635c3f2
#undef public_635c3f9
