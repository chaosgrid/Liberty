#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d901f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d93350);
CLANG_FORWARD_PROC_SYMBOL(public_6d95b60);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db26fe);

#define public_6d9338f _public_6d9338f
#define public_6d93393 _public_6d93393
#define public_6d933c1 _public_6d933c1
#define public_6d933db _public_6d933db
#define public_6d93463 _public_6d93463
#define public_6d93472 _public_6d93472
#define public_6d93483 _public_6d93483
#define public_6d93498 _public_6d93498

PROC_DECLARE(0x6d93350, internal_6d93350, public_6d93350);
extern "C" NAKED register_t __cdecl internal_6d93350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db26fe @0x6d93352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db26fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], offset public_6db3dc4
        xor ebx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d93472
        jmp public_6d93393
        public_6d9338f : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6d93393 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6d93463
        mov dword ptr ss : [esp+0x18], edi
        mov esi, dword ptr ds : [edi+0x274]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x2C], 5
        je public_6d933c1
        mov ecx, esi
        call public_6d95b60
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d933c1 : nop
        mov esi, dword ptr ds : [edi+0x278]
        cmp esi, ebx
        je public_6d933db
        mov ecx, esi
        call public_6d95b60
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d933db : nop
        mov ebp, dword ptr ds : [edi+0x26C]
        lea esi, ds:[edi+0x268]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 4
        call dword ptr ds : [public_6db3044]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6db3040]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        add esp, 4
        lea ecx, ds:[edi+0x264]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x2C], 3
        call public_6d91340
        push 1
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x30], 2
        call dword ptr ds : [public_6db31a0]
        push 1
        lea ecx, ds:[edi+0x204]
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [public_6db31a0]
        push edi
        call public_6db1dc2
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6d93463 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6d9338f
        public_6d93472 : nop
        mov ebp, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ecx+0x24]
        mov byte ptr ss : [esp+0x2C], bl
        je public_6d93498
        public_6d93483 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6d901f0
        cmp esi, ebp
        jne public_6d93483
        public_6d93498 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_6da1370
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d93350)
    }
}

#undef public_6d9338f
#undef public_6d93393
#undef public_6d933c1
#undef public_6d933db
#undef public_6d93463
#undef public_6d93472
#undef public_6d93483
#undef public_6d93498
