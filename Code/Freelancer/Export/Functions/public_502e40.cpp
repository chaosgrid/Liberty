#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_502e40);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf861);

#define public_502e80 _public_502e80
#define public_502e9a _public_502e9a
#define public_502ec7 _public_502ec7
#define public_502ed7 _public_502ed7
#define public_502ee6 _public_502ee6

PROC_DECLARE(0x502e40, internal_502e40, public_502e40);
extern "C" NAKED register_t __cdecl internal_502e40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf861 @0x502e42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf861
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
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], 1
        je public_502e9a
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x40]
        xor edi, edi
        cmp ecx, ebx
        jle public_502e9a
        push ebp
        lea ebp, ds:[esi+0x40]
        nop 
        public_502e80 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ebp
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+0x40]
        inc edi
        add ebp, 0x24
        cmp edi, eax
        jl public_502e80
        pop ebp
/*FIXUP public_502e9a : nop
        push offset _public_502e00 @0x502e9a*/
  FIXUP public_502e9a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502e00
        push 5
        push 0x24
        lea edx, ds:[esi+0x2C]
        push edx
        mov byte ptr ss : [esp+0x28], bl
        call public_5b7ec6
        mov ecx, dword ptr ds : [esi+0x24]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_502ec7
        call public_4f7a90
        mov dword ptr ds : [esi+0x24], ebx
        public_502ec7 : nop
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, ebx
        je public_502ed7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x20], ebx
        public_502ed7 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        cmp ecx, ebx
        je public_502ee6
        call public_537ad0
        mov dword ptr ds : [esi+0x28], ebx
        public_502ee6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x1C], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x502e40)
    }
}

#undef public_502e80
#undef public_502e9a
#undef public_502ec7
#undef public_502ed7
#undef public_502ee6
