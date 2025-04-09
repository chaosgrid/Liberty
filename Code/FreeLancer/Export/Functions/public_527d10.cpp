#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_527d10);
CLANG_FORWARD_PROC_SYMBOL(public_5295d0);
CLANG_FORWARD_PROC_SYMBOL(public_5298c0);
CLANG_FORWARD_PROC_SYMBOL(public_529d50);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0259);

#define public_527d50 _public_527d50
#define public_527d6d _public_527d6d
#define public_527d88 _public_527d88
#define public_527d8f _public_527d8f
#define public_527da0 _public_527da0
#define public_527db2 _public_527db2
#define public_527dc0 _public_527dc0
#define public_527de5 _public_527de5
#define public_527dfd _public_527dfd
#define public_527e10 _public_527e10
#define public_527e36 _public_527e36

PROC_DECLARE(0x527d10, internal_527d10, public_527d10);
extern "C" NAKED register_t __cdecl internal_527d10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0259 @0x527d12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0259
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_5dd134
        mov ebp, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], 1
        je public_527d8f
        lea ebx, ds:[ebx]
        public_527d50 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp ecx, ebx
        je public_527d6d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_527d6d
        call public_4f7a90
        mov dword ptr ds : [esi+4], ebx
        public_527d6d : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_527d88
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_527d88
        call public_4f7a90
        mov dword ptr ds : [esi+8], ebx
        public_527d88 : nop
        add esi, 0xC
        cmp esi, ebp
        jne public_527d50
        public_527d8f : nop
        mov ebp, dword ptr ds : [edi+0x18]
        cmp ebp, ebp
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, ebp
        je public_527db2
        nop 
        lea esp, ss:[esp]
        public_527da0 : nop
        push esi
        mov ecx, ebx
        call public_529d50
        add esi, 0xC
        add ebx, 0xC
        cmp esi, ebp
        jne public_527da0
        public_527db2 : nop
        mov ebp, dword ptr ds : [edi+0x18]
        cmp ebx, ebp
        mov esi, ebx
        mov dword ptr ss : [esp+0x10], esi
        je public_527de5
        nop 
        public_527dc0 : nop
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x20], 2
        call public_5298c0
        lea ecx, ds:[esi+4]
        mov byte ptr ss : [esp+0x20], 1
        call public_5298c0
        add esi, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        jne public_527dc0
        public_527de5 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+0x18], ebx
        call public_5295d0
        mov ecx, dword ptr ds : [edi+0x5C]
        xor ebx, ebx
        cmp ecx, ebx
        je public_527dfd
        call public_40e990
        public_527dfd : nop
        mov esi, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [edi+0x18]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        je public_527e36
        mov bl, 3
        lea ecx, ds:[ecx]
        public_527e10 : nop
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x20], bl
        call public_5298c0
        lea ecx, ds:[esi+4]
        mov byte ptr ss : [esp+0x20], 0
        call public_5298c0
        add esi, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], esi
        jne public_527e10
        xor ebx, ebx
        public_527e36 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_531af0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x527d10)
    }
}

#undef public_527d50
#undef public_527d6d
#undef public_527d88
#undef public_527d8f
#undef public_527da0
#undef public_527db2
#undef public_527dc0
#undef public_527de5
#undef public_527dfd
#undef public_527e10
#undef public_527e36
